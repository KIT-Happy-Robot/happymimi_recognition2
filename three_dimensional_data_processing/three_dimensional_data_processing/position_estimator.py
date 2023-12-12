"""
このノードはYOLOを使って検出されたバウンディングボックス座標の結果から
位置推定を行うノードです。"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Float64MultiArray
from happymimi_recognition_msgs.srv import PositionEstimator
import cv_bridge
import cv2
import math
from geometry_msgs.msg import Point

class ThreeDimensionalPositionEstimator(Node):

    def __init__(self):
        super().__init__('three_dimensional_position_estimator')
        #self.neck_height = 0.0
        self.head_angle = 0.0

        self.realsense_subscription = self.create_subscription(
            Image, '/camera/camera/aligned_depth_to_color/image_raw', self.realsense_callback,1)
        #self.motor_angle_subscription = self.create_subscription(
        #    Float64MultiArray, '/servo/angle_list', self.motor_angle_callback, 1)
        self.estimate_service = self.create_service(
            PositionEstimator, '/detect/depth', self.estimate_callback)

        #self.get_parameter("mimi_specification.Ground_Neck_Height", self.neck_height)
        self.neck_height = 20
        self.depth_image = None
        
        print("READY TO SERVER")

    def realsense_callback(self, ros_image):
        self.depth_image = ros_image

    def motor_angle_callback(self, angle_list):
        #self.head_angle = angle_list.data[5]
        self.head_angle = 20.0
        
    def convert_image(self, input_image):
        try:
            bridge = cv_bridge.CvBridge()
            cv_image = bridge.imgmsg_to_cv2(input_image, "16UC1")
            return cv_image
        except cv_bridge.CvBridgeError as e:
            self.get_logger().error('cv_bridge exception: %s' % e)
            return None

    def estimate_callback(self, request, response):
        object_point = Point()
        current_depth_image = self.depth_image
        
        #デバッグ用にコメントアウト
        #cv_image = self.convert_image(self.depth_image)
        cv_image = None
        if cv_image is None:
            response.point.x = float(100)
            response.point.y = float(10)
            response.point.z = float(10)
            return response

        distance = cv_image[request.center_x, request.center_y]
        self.get_logger().info('distance: %f' % distance)

        theta_y = ((request.center_y - 320) * 54.2 / 640) / 180 * math.pi
        theta_z = (-1 * (request.center_x - 240) * 47.0 / 480) / 180 * math.pi

        centroid_x = distance
        centroid_y = -1 * distance * math.tan(theta_y)
        centroid_z = distance * math.tan(theta_z)
        self.get_logger().info('x: %f, y: %f' % (centroid_x, centroid_y))

        #main
        #centroid_x = (centroid_x * math.cos(math.pi * self.head_angle / 180)) - (centroid_z * math.sin(math.pi * self.head_angle / 180))
        #centroid_z = (centroid_z * math.cos(math.pi * self.head_angle / 180)) + (distance * math.sin(math.pi * self.head_angle / 180))
        
        #debug
        centroid_x = (centroid_x * math.cos(math.pi * self.head_angle / 180)) - (centroid_z * math.sin(math.pi * self.head_angle / 180))
        centroid_z = (centroid_z * math.cos(math.pi * self.head_angle / 180)) + (distance * math.sin(math.pi * self.head_angle / 180))
        self.get_logger().info('%f, %f' % (centroid_x, centroid_z))

        response.point.x = centroid_x
        response.point.y = centroid_y
        response.point.z = centroid_z

        return response

def main(args=None):
    rclpy.init(args=args)
    node = ThreeDimensionalPositionEstimator()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
