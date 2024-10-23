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
        
        # Bridge for converting between ROS and OpenCV images
        self.bridge = CvBridge()
        
        # YOLOモデルの読み込み
        self.model = YOLO("yolo11n.pt") # または使用したいモデルのパス
        
        # Publisher for processed image
        self.image_pub = self.create_publisher(
            Image, 
            '/yolo_v11/detected_objects', 
            10)
        
        # Subscriber for raw image
        self.image_sub = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.callback,
            10)
        
        self.get_logger().info('YOLO detector node has been started')

    def callback(self, data):
        try:
            # ROSのImage型からOpenCVの画像に変換
            cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
            
            # YOLOで物体検出を実行
            results = self.model(cv_image)
            
            # 検出結果を画像に描画
            annotated_image = results[0].plot()
            
            # OpenCVの画像をROSのImage型に変換して発行
            ros_image = self.bridge.cv2_to_imgmsg(annotated_image, "bgr8")
            ros_image.header = data.header  # タイムスタンプなどのヘッダー情報を維持
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