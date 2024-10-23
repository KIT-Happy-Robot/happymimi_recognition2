import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class HandRaiseDetector(Node):
    def __init__(self):
        super().__init__('hand_raise_detector')
        self.get_logger().info("挙手判定のクラスを初期化しました。")
        self.camera_image = self.create_subscription(
            Image,
            '/camera/camera/color/image_raw',
            self.image_callback,
            10
        )
        self.bridge = CvBridge()
    def image_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            cv2.imshow("camera", cv_image)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().error('挙手判定プログラムで画像取得ができません エラー内容: '.format(e))

def main(args=None):
    rclpy.init(args=args)
    hand_raise_detector = HandRaiseDetector()
    try:
        rclpy.spin(hand_raise_detector)
    except KeyboardInterrupt:
        pass
    finally:
        hand_raise_detector.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()