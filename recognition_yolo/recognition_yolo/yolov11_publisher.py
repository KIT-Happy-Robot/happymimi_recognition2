#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from ultralytics import YOLO
import cv2
import numpy as np

class YoloDetector(Node):
    def __init__(self):
        super().__init__('yolo_detector')
        
        self.bridge = CvBridge()
        self.model = YOLO("yolo11n.pt")
        self.depth_image = None
        self.color_image = None
        
        # クラスごとの色を定義
        self.class_colors = {
            'person': (0, 0, 255),    # 赤
            'chair': (0, 255, 0),     # 緑
            'cup': (255, 0, 0),       # 青
            'bottle': (255, 165, 0)   # オレンジ
        }
        
        # クラスIDとクラス名の対応
        self.class_names = {
            0: 'person',
            56: 'chair',
            41: 'cup',
            39: 'bottle'
        }
        
        self.image_pub = self.create_publisher(
            Image, 
            '/yolo_detected_with_depth', 
            10)
        
        self.image_sub = self.create_subscription(
            Image,
            '/kit_HappyMimi/camera/color/image_raw',
            self.color_callback,
            10)
            
        self.depth_sub = self.create_subscription(
            Image,
            "/kit_HappyMimi/camera/aligned_depth_to_color/image_raw",
            self.depth_callback,
            10
        )

        self.get_logger().info('YOLO detector node has been started')

    def depth_callback(self, data):
        try:
            self.depth_image = self.bridge.imgmsg_to_cv2(data)
            self.process_images()
        except CvBridgeError as e:
            self.get_logger().error(f'Error processing depth image: {str(e)}')

    def color_callback(self, data):
        try:
            self.color_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
            self.latest_header = data.header
            self.process_images()
        except CvBridgeError as e:
            self.get_logger().error(f'Error processing color image: {str(e)}')

    def get_depth_from_bbox(self, bbox, depth_image, height, width):
        """
        バウンディングボックス内の深度値を解析する補助関数
        """
        x1, y1, x2, y2 = bbox
        x1, y1 = max(0, int(x1)), max(0, int(y1))
        x2, y2 = min(width - 1, int(x2)), min(height - 1, int(y2))
        
        box_width = x2 - x1
        box_height = y2 - y1
        
        # ボックスサイズに応じてサンプリング数を調整
        if box_width < 100 or box_height < 100:
            divisions = 3
        else:
            divisions = 5

        depth_values = []
        
        # グリッドサンプリング
        for y in np.linspace(y1, y2, divisions):
            for x in np.linspace(x1, x2, divisions):
                y_idx = int(y)
                x_idx = int(x)
                if 0 <= y_idx < height and 0 <= x_idx < width:
                    depth_value = depth_image[y_idx, x_idx]
                    if depth_value > 0:  # 有効な深度値のみを追加
                        depth_values.append(depth_value)
        
        if not depth_values:
            return None
            
        # ヒストグラムによる深度値の解析
        hist, bins = np.histogram(depth_values, bins=20)
        most_common_depth = bins[np.argmax(hist)]
        
        # 信頼度スコアの計算
        confidence_score = len(depth_values) / (divisions * divisions)
        
        return most_common_depth / 1000.0, confidence_score  # メートルに変換

    def process_images(self):
        if self.depth_image is None or self.color_image is None:
            return

        try:
            output_image = self.color_image.copy()
            height, width = self.depth_image.shape[:2]
            
            # 検出結果を格納するリスト
            detected_objects = []

            results = self.model(output_image)
            
            for result in results[0].boxes:
                box = result.xyxy[0].cpu().numpy()
                conf = result.conf[0].cpu().numpy()
                cls = int(result.cls[0].cpu().numpy())
                
                if cls not in self.class_names:
                    continue
                
                # 深度値と信頼度スコアの取得
                depth_result = self.get_depth_from_bbox(box, self.depth_image, height, width)
                if depth_result is None:
                    continue
                    
                depth_value, confidence_score = depth_result
                
                # 信頼度スコアが低い場合はスキップ
                if confidence_score < 0.5:
                    continue

                x1, y1, x2, y2 = map(int, box[:4])
                center_x = int((x1 + x2) / 2)
                center_y = int((y1 + y2) / 2)
                
                class_name = self.class_names[cls]
                color = self.class_colors[class_name]

                # 描画処理
                cv2.rectangle(output_image, 
                            (x1, y1), 
                            (x2, y2), 
                            color, 2)
                
                cv2.circle(output_image, (center_x, center_y), 5, color, -1)
                
                label = f"{class_name} Conf:{conf:.2f} Depth:{depth_value:.2f}m"
                cv2.putText(output_image, label,
                        (x1, y1 - 10),
                        cv2.FONT_HERSHEY_PLAIN, 1, color, 1)
                
                # 検出結果をリストに追加
                detected_objects.append([class_name, depth_value, confidence_score])

            # 奥行きでソート
            detected_objects.sort(key=lambda x: x[1])
            
            # ターミナルに表示
            self.get_logger().info("\nDetected objects (sorted by depth):")
            self.get_logger().info("--------------------------------")
            for obj in detected_objects:
                self.get_logger().info(f"Class: {obj[0]}, Depth: {obj[1]:.2f}m, Confidence: {obj[2]:.2f}")
            self.get_logger().info("--------------------------------")

            # 結果の公開
            ros_image = self.bridge.cv2_to_imgmsg(output_image, "bgr8")
            ros_image.header = self.latest_header
            self.image_pub.publish(ros_image)
            
            # 画像バッファのクリア
            self.depth_image = None
            self.color_image = None
            
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