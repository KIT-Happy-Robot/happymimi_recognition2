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

#State
states = ['Server','Count', 'Find', 'Localize', 'Checkcenter', 'Move']

#Transition
# trigger：遷移の引き金になるイベント、
# source：トリガーイベントを受ける状態、
# dest：トリガーイベントを受けた後の状態
# before：遷移前に実施されるコールバック、
# after：遷移後に実施されるコールバック
transitions = [
    { 'trigger': 'server_execute','source': 'Server',   'dest': 'Count'},
    { 'trigger': 'count_execute',   'source': 'Count',  'dest': 'Localize'},
    { 'trigger': 'find_execute',   'source': 'Find',   'dest': 'Find'},
    { 'trigger': '',      'source': 'gas',     'dest': 'plasma',  'after': 'action_g2p'}
]


rclpy.init()
_node = Node('recognition_action_server')

class Recognition_Action_Server(object):
    def __init__(self, target_name_dict, sort_option) -> None:
        self.target_name = target_name_dict
        self.sort_option = sort_option
        self.result_out = RecognitionProcessingResult(result_flg=False, centroid_point=Point())
        
    def execute():
        self.get_logger().info('')
