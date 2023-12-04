#!/usr/bin/env python3
# -*- coding: utf-8 -*
"""
import rospy
import rosparam
import rosgraph
import roslib.packages
"""
import os
import sys
import time
import numpy
import cv2

import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist, Point
#from darknet_ros_msgs.msg import BoundingBoxes
from ultralytics import YOLO
from ament_index_python.packages import get_package_share_directory
from vision_msgs.msg import Detection2D, Detection2DArray, ObjectHypothesisWithPose

from happymimi_msgs.srv import StrTrg
from happymimi_recognition_msgs.srv import (RecognitionList, 
                                            RecognitionCount,                                             
                                            RecognitionFind, 
                                            RecognitionLocalize, 
                                            MultipleLocalize, 
                                            PositionEstimator, )

#新しくパッケージを作成したら要修正
#teleop_path = get_package_share_directory('happymimi_teleop')
#sys.path.insert(0, os.path.join(teleop_path, 'src/'))
#from base_control import BaseControl


class CallDetector(Node):
    def __init__(self):
        super().__init__('call_detector')
        self.detect_depth = self.create_client(PositionEstimator, '/detect/depth')
        self.object_centroid = Point()
        

    def detectorService(self, center_x, center_y):
        while not self.detect_depth.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        ## リクエスト定義
        self.position_estimator_req = PositionEstimator.Request()
        self.position_estimator_req.center_x = int(center_x)
        self.position_estimator_req.center_y = int(center_y)
        #print("center_x, center_y",self.position_estimator_req.center_x, self.position_estimator_req.center_y)
        self.res = self.detect_depth.call_async(self.position_estimator_req)
        rclpy.spin_until_future_complete(self,self.res)
        self.object_centroid = self.res.result()
        


class RecognitionTools(Node):
    bbox = []

    def __init__(self):
        super().__init__('recognition_tools')
        
        self.create_subscription(Detection2DArray, '/detection_result',self.boundingBoxCB,1)
        self.create_subscription(Image, 'camera/camera/color/image_raw',self.realsenseCB,1)
        
        self.create_service(StrTrg, '/recognition/save', self.saveImage)
        self.create_service(RecognitionList, '/recognition/list', self.listObject)
        self.create_service(RecognitionFind, '/recognition/find', self.findObject)
        self.create_service(RecognitionCount, '/recognition/count', self.countObject)
        self.create_service(RecognitionLocalize, '/recognition/localize',self.localizeObject)
        self.create_service(MultipleLocalize,'/recognition/multiple', self.multipleLocalize)
        
        self.realsense_image = Image()
        self.image_height = 480# rosparam.get_param('/camera/realsense2_camera/color_height')
        self.image_width = 640# rosparam.get_param('/camera/realsense2_camera/color_width')
        try:
            #ROS1
            #self.object_dict = rosparam.get_param('/object_dict')
            #self.object_dict = self.get_parameter('/object_dict').get_parameter_value()
            self.object_dict = {'any':['cup', 'bottle']}
        except AttributeError:
            self.object_dict = {'any':['cup', 'bottle']}

        self.update_time = 0 # darknetからpublishされた時刻を記録
        self.update_flg = False # darknetからpublishされたかどうかの確認

        #rospy.Timer(rospy.Duration(0.5), self.initializeBbox)
        self.create_timer(0.5, self.initializeBbox)
        print("READY SERVER")
        
    def boundingBoxCB(self, bb):
        self.update_time = time.time()
        self.update_flg = True
        RecognitionTools.bbox = bb

    def initializeBbox(self):
        # darknetが何も認識していない時にRecognitionTools.bboxを初期化する
        if time.time() - self.update_time > 1.0 and self.update_flg:
            RecognitionTools.bbox = []
            self.update_flg = False
            self.get_logger().info('initialize')

    def createBboxList(self,bb):
        bbox_list = []
        for i in bb.detections:
            for j in range(len(i.results)):
                obj = i.results[j].hypothesis.class_id
                bbox_list.append(obj)
        return bbox_list

    def realsenseCB(self, image):
        self.realsense_image = image

    def saveImage(self, req, bb=None):
        if bb is None:
            bb = RecognitionTools.bbox
        bbox_list = self.createBboxList(bb)

        bridge = CvBridge()
        cv2_image = bridge.imgmsg_to_cv2(self.realsense_image, desired_encoding="bgr8")
        
        #font = cv2.FONT_HERSHEY_SIMPLEX
        #for i, name in enumerate(bbox_list):
        #    cv2.rectangle(cv2_image,(bb[i].xmin,bb[i].ymin),(bb[i].xmax,bb[i].ymax),(0,255,0),2)
        #    pix_y = bb[i].ymin-5
        #    if pix_y<10: pix_y=10
        #    cv2.putText(cv2_image, name, (bb[i].xmin,pix_y),font,0.5,(0,0,0))
        #cv2.imwrite(req.data+"/"+str(time.time())+".png",cv2_image)
        return True

    def listObject(self, request, response, bb=None, internal_call=False):
        self.get_logger().info('module type : List')

        response_list = RecognitionList.Response()
        coordinate_list = []

        object_name = request.target_name
        sort_option = request.sort_option
        if bb is None:
            bb = RecognitionTools.bbox
        bbox_list = self.createBboxList(bb)

        # 座標を格納したlistを作成
        for i in range(len(bbox_list)):
            if object_name == 'any':
                if not(bbox_list[i] in self.object_dict['any']): continue
            elif object_name != '':
                if not(bbox_list[i] == object_name): continue
            coordinate_list.append([bbox_list[i], [int(bb.detections[i].bbox.center.position.y), int(bb.detections[i].bbox.center.position.x)]])
            
        # ソート
        if sort_option == 'left':
            coordinate_list.sort(key=lambda x: x[1][1])
        elif sort_option == 'center':
            for i in coordinate_list:
                i[1][1] -= (self.image_width)/2
            coordinate_list.sort(key=lambda x: abs(x[1][1]))
            for i in coordinate_list:
                i[1][1] += (self.image_width)/2
        elif sort_option == 'right':
            coordinate_list.sort(key=lambda x: x[1][1], reverse=True)
        elif sort_option == 'front':
            name_list = set([row[0] for row in coordinate_list])

            localize_req = RecognitionLocalize.Request()
            localize_req.sort_option.data = 'left'
            depth_list = []
            #print(name_list)
            for name in name_list:
                count = RecognitionCount.Request(target_name=name)
                loop_count = self.countObject(count, response=None, bb=bb).num
                localize_req.target_name = name
                for i in range(loop_count):
                    localize_req.sort_option.num = i
                    centroid = self.localizeObject(localize_req, response=None,bb=bb).point
                    depth_list.append([name, centroid])
            depth_list.sort(key=lambda x: x[1].x)
            
        try:
            for mini_list in depth_list:
                response_list.object_list.append(mini_list)
        except UnboundLocalError:
            for i in range(len(coordinate_list)):
                response_list.object_list.append(coordinate_list[i])
        
        # serverの呼び出し
        if not internal_call:
            response_list.object_list = [row[0] for row in response_list.object_list]
            #print("internal_object_list:",response_list.object_list)
        return response_list

    def countObject(self, request, response, bb=None):
        self.get_logger().info('module type : Count')

        response_count = RecognitionCount.Response()
        object_count = 0

        object_name = request.target_name
        if bb is None:
            bb = RecognitionTools.bbox
            
        bbox_list = self.createBboxList(bb)

        if object_name == 'any':
            for i in range(len(bbox_list)):
                if bbox_list[i] in self.object_dict['any']:
                    object_count += 1
        else:
            object_count = bbox_list.count(object_name)
        response_count.num = object_count
        return response_count

    def findObject(self, request, response):
        self.get_logger().info('module type : Find')

        #base_control = BaseControl()

        response_flg = RecognitionFind.Response()
        object_name = request.target_name
        loop_count = 0
        count = RecognitionCount.Request(target_name=object_name)
        find_flg = bool(self.countObject(count, response=None,bb=None).num)

        while not find_flg and loop_count <= 3 and not rclpy.shutdown():
            loop_count += 1
            
            #Debug
            #rotation_angle = 30 - (((loop_count)%4)/2) * 60
            #base_control.rotateAngle(rotation_angle, 0.5)
            #time.sleep(3.0)

            bbox_list = self.createBboxList(RecognitionTools.bbox)
            if object_name == '':
                find_flg = bool(len(bbox_list))
            elif object_name == 'any':
                find_flg = bool(len(list(set(self.object_dict['any'])&set(bbox_list))))
            else:
                find_flg = object_name in bbox_list
        response_flg.result = find_flg
        return response_flg

    def localizeObject(self, request, response,bb=None):
        self.get_logger().info('module type : Localize')

        Detector = CallDetector()

        response_centroid = RecognitionLocalize.Response()
        response_centroid.point.x = numpy.nan
        response_centroid.point.y = numpy.nan
        response_centroid.point.z = numpy.nan

        object_name = request.target_name
        sort_option = request.sort_option
        if bb is None:
            bb = RecognitionTools.bbox
            
        bbox_list = self.createBboxList(bb)
        count = RecognitionCount.Request(target_name=object_name)
        exist_flg = bool(self.countObject(count, response=None,bb=bb).num)

        # 対象の物体が存在しない場合
        if not exist_flg:
            return response_centroid

        # リストの取得
        list_req = RecognitionList.Request()
        list_req.target_name = object_name
        list_req.sort_option = sort_option.data
        object_list = self.listObject(request=list_req, response=None,bb=RecognitionTools.bbox, internal_call=True).object_list
        #print("object_list:",object_list)
        try:
            center_x, center_y = object_list[sort_option.num][1]
        except IndexError:
            return response_centroid

        # 三次元位置の推定
        time.sleep(0.5)
        Detector.detectorService(center_x, center_y)
        service_response = Detector.object_centroid
        response_centroid.point = service_response.point
        return response_centroid

    def multipleLocalize(self, request, response, bb=None):
        self.get_logger().info('module type : AddvancedLocalize')

        response_centroid = MultipleLocalize.Response()

        object_name = request.target_name
        if bb is None:
            bb = RecognitionTools.bbox
        bbox_list = self.createBboxList(bb)

        # リストの取得
        list_req = RecognitionList.Request()
        list_req.target_name = object_name
        list_req.sort_option = 'front'
        object_list = self.listObject(request=list_req, response=None, bb=RecognitionTools.bbox, internal_call=True).object_list
        #response_centroid.points = [row[1] for row in object_list if not(row[1].x is numpy.nan)]
        response_list = []
        for row in list(object_list):
            if not(row[1].x is numpy.nan) and row[1].x > 0.1:
                response_list.append(row[1])
        response_centroid.points = response_list
        return response_centroid


def main(args=None):
    try:
        rclpy.init(args=args)
        recognition_tools = RecognitionTools()
        rclpy.spin(recognition_tools)
    except KeyboardInterrupt:
        pass
    finally:
        #recognition_tools.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()