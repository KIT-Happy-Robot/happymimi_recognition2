#!/usr/bin/env python3
#-*- coding: utf-8 -*

import cv2
from cv_bridge import CvBridge,CvBridgeError
from sensor_msgs.msg import Image
import rclpy
from rclpy.node import Node
import numpy as np
import time
from happymimi_recognition_msgs2.srv import Depthmeter


class ImageMask(Node):
    def __init__(self):
        super().__init__('image_mask')
        self.bridge = CvBridge()
        self.meter = 2.5
        print("{}[m]".format(self.meter))
        self.img = self.create_subscription(Image,"/camera/camera_ayu/color/image_raw",self.img_listener,1)
        time.sleep(0.1)
        self.depth = self.create_subscription(Image,"/camera/camera_ayu/aligned_depth_to_color/image_raw",self.depth_listener,1)
        self.pub = self.create_publisher(Image,"camera/color/depth_mask",10)
        self.server = self.create_service(Depthmeter,"depth_mask",self.depth_reception)

    def depth_reception(self,request,response):
        self.meter = request.meter
        response.ans = "depth_mask is {}[m]".format(self.meter)
        print("{}[m]".format(self.meter))
        return response

    def img_listener(self,data):
        try:
            img = self.bridge.imgmsg_to_cv2(data,"rgb8")
            self.img = np.copy(img)
        except CvBridgeError as e:
            print("image:",e)

    def depth_listener(self,data):
        try:
            depth_data = self.bridge.imgmsg_to_cv2(data,"16UC1")
            self.depth_data = depth_data * 0.001
            self.maskImg()
        except CvBridgeError as e:
            print("depth:",e)

    def maskImg(self):
        ksize = 5
        try:
            mask1 = np.zeros((self.img.shape[0],self.img.shape[1],3),np.uint8)
            mask2 = np.zeros((self.img.shape[0],self.img.shape[1],3),np.uint8)

            mask1[self.depth_data < self.meter] = (255,255,255)
            mask2[self.depth_data >= 0.5] = (255,255,255)
            mask = cv2.bitwise_and(mask1,mask2)
            mask = cv2.medianBlur(mask,ksize)
            img_AND = cv2.bitwise_and(self.img,mask)

            img_pub = self.bridge.cv2_to_imgmsg(img_AND,encoding="rgb8")
            self.pub.publish(img_pub)
        except cv2.error as e:
            print("cv2:")
        except KeyboardInterrupt as e:
            print("KeyboardInterrupt")

def main(args = None):
    rclpy.init(args=args)
    image_mask = ImageMask()
    rclpy.spin(image_mask)
    image_mask.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
