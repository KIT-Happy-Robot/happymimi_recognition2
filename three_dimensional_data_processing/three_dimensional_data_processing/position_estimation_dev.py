"""
このノードはYOLOを使って検出されたバウンディングボックス座標の結果から
位置推定を行うノードです。"""

import cv_bridge
import cv2
import math

import rclpy
from rclpy.node import Node
#from sensor_msgs.msg import Image
#from std_msgs.msg import Float64MultiArray
from happymimi_recognition_msgs2.srv import PositionEstimator, Clip
from geometry_msgs.msg import Point

from ament_index_python import get_package_share_directory
from vision_msgs.msg import Detection2D, Detection2DArray, ObjectHypothesisWithPose

class PositionEstimator(Node):
    def __init__(self, object_name):
        super().__init__('three_dimensional_position_estimation')
        
        #self.realsense_sub = self.create_subscription(
        #    Image, '/camera/aligned_depth_to_color/image_raw', self.realsense_callback, 1)
        self.get_object = object_name
        self.center_x = float('nan')
        self.center_y = float('nan')
        
        #self.srv = self.create_service(PositionEstimator,'depth', self.estimate_callback)
        self.service = self.create_service(PositionEstimator, 'detect_depth',self.estimate_callback)
        #self.image_sub = self.create_subscription(
        #    Detection2DArray, '/detection_result', self.image_callback,1)
        
        print("READY to service")
        
    def realsense_callback(self,image):
        self.image = image
    
    def image_callback(self,image):
        for obj in image.detections:
            bb = obj.bbox.center.position
            res = obj.results[0].hypothesis.class_id #何を認識したか
            if(res == self.get_object):
                self.center_x = bb.x
                self.center_y = bb.y
                #print("name:",res)
                #print("x:",x_axis)
                #print("y",y_axis)
        
        
    def estimate_callback(self, req, res):
        objet_point = Point()
        req.center_x = self.center_x
        req.center_y = self.center_y
        
        distance = list(self.center_x, self.center_y)
        self.get_logger().info('distance: %f' % distance)
        
        theta_y = ((self.center_y - 320) * 54.2 / 640) / 180 * math.pi
        theta_z = (-1 * (self.center_x - 240) * 47.0 / 480) / 180 * math.pi
        
        centroid_x = distance
        centroid_y = -1 * distance * math.tan(theta_y)
        centroid_z = distance * math.tan(theta_z)
        self.get_logger().info('x: %f, y: %f' % (centroid_x, centroid_z))

        centroid_x = (centroid_x * math.cos(math.pi * self.head_angle / 180)) - (centroid_z * math.sin(math.pi * self.head_angle / 180))
        centroid_z = (centroid_z * math.cos(math.pi * self.head_angle / 180)) + (distance * math.sin(math.pi * self.head_angle / 180))
        self.get_logger().info('%f, %f' % (centroid_x, centroid_z))

        res.point.x = centroid_x
        res.point.y = centroid_y
        res.point.z = centroid_z

        return res
    
    
def main(args=None):
    rclpy.init(args=args)
    node = PositionEstimator("bottle")
    rclpy.spin(node)
    
    #node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()