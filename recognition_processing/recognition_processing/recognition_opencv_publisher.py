"""
このノードは、OpenCVを使って画像処理を行い、処理結果をトピックとして配信するノードです。
このノードを利用する際は以下のコマンドを実行してください。
$ ros2 run usb_cam usb_cam_node_exe
"""

# ROS2の標準モジュールをインポート
import rclpy
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
# OpenCVのモジュールをインポート
from cv_bridge import CvBridge
import cv2 # OpenCVのライブラリをインポート

class RecognitionOpenCVPublisher(Node):

    def __init__(self):
        super().__init__('imgproc_opencv_ros')
        self.subscription = self.create_subscription(
            Image,
            'image_raw',
            self.image_callback,
            qos_profile_sensor_data)

        self.publisher = self.create_publisher(
            Image,
            'result', 10)
        
        self.br = CvBridge()

    def image_callback(self, data):
        source = self.br.imgmsg_to_cv2(data, 'bgr8')
        gray = cv2.cvtColor(source, cv2.COLOR_BGR2GRAY)
        _, result = cv2.threshold(gray, 128, 255, cv2.THRESH_BINARY)
        result_msg = self.br.cv2_to_imgmsg(result, 'passthrough')
        cv2.imshow('result', result)
        self.publisher.publish(result_msg)
        self.get_logger().info('Publishing image')


def main():
    rclpy.init()
    recognitonCVPub = RecognitionOpenCVPublisher()
    try:
        rclpy.spin(recognitonCVPub)
    except KeyboardInterrupt:
        pass
    rclpy.shutdown()

