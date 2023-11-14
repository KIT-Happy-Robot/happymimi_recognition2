#!/usr/bin/env python3
# -*- coding: utf-8 -*

import os
import sys
import time
import math
import numpy
from transitions import Machine

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

from geometry_msgs import Twist, Point
from ament_index_python import get_package_share_directory

from vision_msgs import Detection2D, Detection2DArray, ObjectHypothesisWithPose
from happymimi_msgs.msg import StrInt
from happymimi_recognition_msgs2.msg import RecognitionProcessingAction, RecognitionProcessingResult
from happymimi_recognition_msgs2.srv import RecognitionCountRequest, RecognitionFindRequest, RecognitionLocalizeRequest

from recognition_tools import RecognitionTools
teleop_path = get_package_share_directory( 'happymimi_teleop')
sys.path.insert(0, os.path.join(teleop_path, 'src/'))
from base_control import BaseControl



class Recognition_Action_Server(object):
    def __init__(self, target_name_dict, sort_option) -> None:
        super().__init__('action_server_node')
        
        self.target_name = target_name_dict
        self.sort_option = sort_option
        self.result_out = RecognitionProcessingResult(result_flg=False, centroid_point=Point())
        self.e_l_count_out = 0
        self.c_l_count_out = 0
        self.move_count_out = 0
        self.base_control = BaseControl()
        
        self.action_sever = ActionServer(
            self,
            RecognitionProcessingAction,
            'recognition',
            self.execute_callback
        )
        
    def action_Sever(self):
        self.get_logger().info('Executing state: Server')
        return 'start_action'
    
    def count_execute(self):
        self.get_logger().info('Executing state: Count')
        time.sleep(1.0)
        
        bbox = Recognition_Tools.bbox
        self.bbox_out = bbox #!!!
        object_count = Recognition_Tools.countObject(RecognitionCountRequest(self.target_name), bbox).num
        exist_flg = object_count > 0
        
        if (self.sort_option.num + 1) > object_count:
            reset_option = StrInt(data='center', num=0)
            self.sort_option = reset_option

        if exist_flg:
            return 'count_success'
        elif self.e_l_count_in > 3:
            return 'action_failed'
        else:
            return 'count_failure'
        
    def find_execute(self):
        self.get_logger().info('Executing state: Find')

        find_flg = Recognition_Tools.findObject(RecognitionFindRequest(self.target_name)).result

        if find_flg:
            return 'find_success'
        else:
            self.e_l_count = self.e_l_count + 2
            return 'find_failure'
        
    def local_execute(self):
        self.get_logger().info('Executing state: Localize')

        localize_request = RecognitionLocalizeRequest()
        localize_request.target_name = self.target_name
        localize_request.sort_option = self.sort_option
        object_centroid = Recognition_Tools.localizeObject(localize_request).point
        self.centroid_out = object_centroid #--!!!!

        if not math.isnan(object_centroid.x):
            return 'localize_success'
        else:
            self.e_l_count = self.e_l_count + 1
            return 'localize_failure'
        
    def check_center_execute(self):
        self.get_logger().info('Executing state: CheckCenter')

        object_angle = math.atan2(self.centroid.y, self.centroid.x)/math.pi*180
        reset_option = StrInt(data='center', num=0)
        self.sort_option = reset_option

        if abs(object_angle) < 1:
            self.result_out = RecognitionProcessingResult(result_flg=True, centroid_point=self.centroid)
            return 'check_center_success'
        elif self.c_l_count > 3:
            return 'action_failed'
        else:
            #if abs(object_angle) < 3.5: object_angle=object_angle/abs(object_angle)*3.5
            self.base_control.rotateAngle(float(object_angle))
            time.sleep(2.0)
            self.c_l_count = self.c_l_count + 1
            return 'check_center_failure'
        
    def move_execute(self):
        self.get_logger().info('Executing state: Move')

        move_range = 0.4*(((self.move_count+1)%4)/2)-0.2
        self.base_control.translateDist(move_range)
        time.sleep(1.0)
        self.move_count_out = self.move_count_in + 1
        return 'retry'


def main():
    global Recognition_Tools
    Recognition_Tools = RecognitionTools()
    
    rclpy.init()
    node = Node('recognition_action_server')
    
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()
    
    RAS = Recognition_Action_Server()
    
if __name__ == '__main__':
    
    main()