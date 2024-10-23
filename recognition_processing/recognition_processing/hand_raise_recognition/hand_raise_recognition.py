#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from ultralytics import YOLO
import cv2
import numpy as np

class YoloDetector(Node):
    def __init__(self):
        super().__init__('yolo_detector')
        
        self.bridge = CvBridge()
        self.model = YOLO("yolo11n-seg.pt")
        
        # 検出結果と距離情報を統合した画像用のPublisher
        self.image_pub = self.create_publisher(
            Image, 
            '/yolo_v11/detected_objects_with_distance', 
            10)
        
        # カラー画像のSubscriber
        self.image_sub = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.color_callback,
            10)
            
        # デプス画像のSubscriber
        self.depth_sub = self.create_subscription(
            Image,
            '/camera/camera/depth/image_rect_raw',
            self.depth_callback,
            10)
        
        self.depth_image = None
        self.get_logger().info('YOLO detector node has been started')

    def depth_callback(self, msg):
        try:
            self.depth_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='passthrough')
        except Exception as e:
            self.get_logger().error(f'Error processing depth image: {str(e)}')

    def find_min_distance(self, depth_image, bbox):
        if depth_image is None:
            return None
        
        x1, y1, x2, y2 = map(int, bbox)
        
        # バウンディングボックス内を100x100グリッドで分割
        x_points = np.linspace(x1, x2, 100)
        y_points = np.linspace(y1, y2, 100)
        
        min_distance = float('inf')
        
        for x in x_points:
            for y in y_points:
                x_idx = int(x)
                y_idx = int(y)
                if 0 <= y_idx < depth_image.shape[0] and 0 <= x_idx < depth_image.shape[1]:
                    distance = depth_image[y_idx, x_idx]
                    if distance > 0:  # 0は無効な距離値
                        min_distance = min(min_distance, distance)
        
        return min_distance if min_distance != float('inf') else None

    def color_callback(self, data):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
            results = self.model(cv_image)
            
            # 検出結果を画像に描画
            annotated_image = results[0].plot()
            
            for result in results[0].boxes.data:
                bbox = result[:4].cpu().numpy()
                min_distance = self.find_min_distance(self.depth_image, bbox)
                
                if min_distance is not None:
                    # メートル単位に変換
                    distance_meters = min_distance / 1000.0
                    
                    # バウンディングボックスの中心座標を計算
                    x1, y1, x2, y2 = map(int, bbox)
                    center_x = (x1 + x2) // 2
                    center_y = (y1 + y2) // 2
                    
                    # 距離情報のテキスト
                    text = f'{distance_meters:.2f}m'
                    
                    # テキストのサイズを取得
                    (text_width, text_height), _ = cv2.getTextSize(
                        text,
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.7,  # フォントスケール
                        2    # 太さ
                    )
                    
                    # テキストの背景用の矩形を描画
                    rect_x = center_x - text_width//2 - 5
                    rect_y = center_y - text_height//2 - 5
                    cv2.rectangle(
                        annotated_image,
                        (rect_x, rect_y),
                        (rect_x + text_width + 10, rect_y + text_height + 10),
                        (0, 0, 0),
                        -1
                    )
                    
                    # 距離情報をバウンディングボックスの中心に描画
                    cv2.putText(
                        annotated_image,
                        text,
                        (center_x - text_width//2, center_y + text_height//2),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.7,
                        (255, 255, 255),
                        2
                    )
            
            # 検出結果と距離情報を統合した画像を発行
            ros_image = self.bridge.cv2_to_imgmsg(annotated_image, "bgr8")
            ros_image.header = data.header
            self.image_pub.publish(ros_image)
            
        except Exception as e:
            self.get_logger().error(f'Error processing image: {str(e)}')

def main(args=None):
    rclpy.init(args=args)
    
    detector = YoloDetector()
    
    try:
        rclpy.spin(detector)
    except KeyboardInterrupt:
        pass
    finally:
        detector.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()