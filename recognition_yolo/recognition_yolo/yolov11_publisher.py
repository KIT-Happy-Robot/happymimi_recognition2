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
        
        self.image_pub = self.create_publisher(
            Image, 
            '/yolo_detected_with_depth', 
            10)
        
        self.image_sub = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.color_callback,
            10)
            
        self.depth_sub = self.create_subscription(
            Image,
            "/camera/camera/aligned_depth_to_color/image_raw",
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

    def process_images(self):
        if self.depth_image is None or self.color_image is None:
            return

        try:
            # 作業用の画像をコピー
            output_image = self.color_image.copy()
            height, width = self.depth_image.shape[:2]

            # YOLOで物体検出
            results = self.model(output_image)
            
            # 検出結果を処理
            for result in results[0].boxes:
                # バウンディングボックスの座標を取得
                box = result.xyxy[0].cpu().numpy()  # x1, y1, x2, y2
                conf = result.conf[0].cpu().numpy()  # 信頼度
                cls = int(result.cls[0].cpu().numpy())  # クラスID
                
                # バウンディングボックスの中心座標を計算
                center_x = int((box[0] + box[2]) / 2)
                center_y = int((box[1] + box[3]) / 2)

                x1 = max(0, int(box[0]))
                y1 = max(0, int(box[1]))
                x2 = min(width - 1, int(box[2]))
                y2 = min(height - 1, int(box[3]))

                lins_x = np.linspace(x1, x2, 5) # 範囲を10分割
                lins_y = np.linspace(y1, y2, 5)

                min_depth_value = float('inf')  # 初期値を無限大に設定

                for y in lins_y:
                    for x in lins_x:
                        y_idx = int(y)
                        x_idx = int(x)
                        cv2.circle(output_image,(x_idx,y_idx),5,(255,255,255),-1)
                        if 0 <= y_idx < height and 0 <= x_idx < width:  # 範囲チェック
                            depth_value = self.depth_image[y_idx, x_idx]
                            if depth_value > 0:  # 有効な深度値のみを考慮
                                min_depth_value = min(min_depth_value, depth_value)
                    min_depth_value = min_depth_value / 1000.0  # mmをmに変換
                    
                    # バウンディングボックスを描画
                    cv2.rectangle(output_image, 
                                (int(box[0]), int(box[1])), 
                                (int(box[2]), int(box[3])), 
                                (0, 255, 0), 2)
                    
                    # 中心点を描画
                    cv2.circle(output_image, (center_x, center_y), 5, (0, 0, 255), -1)
                    
                    # クラス名、信頼度、距離を表示
                    label = f"Class:{cls} Conf:{conf:.2f} Depth:{min_depth_value:.2f}m"
                    cv2.putText(output_image, label,
                              (int(box[0]), int(box[1] - 10)),
                              cv2.FONT_HERSHEY_PLAIN, 1, (0, 255, 0), 1)
                    
                    # ログに出力
                    self.get_logger().info(
                        f'Object detected - Class: {cls}, Position: ({center_x}, {center_y}), '
                        f'Depth: {min_depth_value:.2f}m, Confidence: {conf:.2f}'
                    )

            # 処理した画像をパブリッシュ
            ros_image = self.bridge.cv2_to_imgmsg(output_image, "bgr8")
            ros_image.header = self.latest_header
            self.image_pub.publish(ros_image)
            
            # 処理が完了したらイメージをクリア
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