#! /usr/bin/env python3
# -*- coding: utf-8 -*-
#GPTのITTから特徴量推定を行う
#ROS2との連携を考慮し、画像取得はRealsenseで行う
from PIL import Image as PImage
import requests
import torch
from transformers import pipeline, TrOCRProcessor, VisionEncoderDecoderModel
import numpy as np

#Deviceの確認
device = "cuda" if torch.cuda.is_available() else "cpu"
#モデルの読み込み
captioner = pipeline("image-to-text",model="Salesforce/blip-image-captioning-base")

processor = TrOCRProcessor.from_pretrained('microsoft/trocr-base-handwritten')
model = VisionEncoderDecoderModel.from_pretrained('microsoft/trocr-base-handwritten')

#ROSやCV2の用意
import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from happymimi_recognition_msgs2.srv import Itt


class Image_To_Text(Node):
    def __init__(self):
        
        super().__init__("image_to_text")
        self.srv = self.create_service(Itt, '/person_feature/itt', self.extract_main)
        self.sub = self.create_subscription(Image, "/image_raw", self.realsenseCB, 1)
        #self.realsense_sub = self.create_subscription(Image, "camera/camera/color/image_raw", self.realsenseCB,1)
        self.bridge = CvBridge()
        print("READY SERVER")
        
    def realsenseCB(self, res):
        self.image_res = res
    
    def extract_itt(self):
        image = self.bridge.imgmsg_to_cv2(self.image_res)
        pil_image = PImage.fromarray(image)
        result = str(captioner(pil_image)[0]["generated_text"]) 
        return result
    
    def extract_ocr(self):
        image = self.bridge.imgmsg_to_cv2(self.image_res)
        pil_image = PImage.fromarray(image)
        pixel_values = processor(images=pil_image, return_tensors="pt").pixel_values
        generated_ids = model.generate(pixel_values)
        result = processor.batch_decode(generated_ids, skip_special_tokens=True)[0]
        return result
        
        
    def extract_main(self, request, response):
        data = request.data
        if data == "itt":response.result = str(self.extract_itt())
        elif data == "ocr":response.result= str(self.extract_ocr())
        else:
            self.get_logger().info("no select data")
            response.result = "False"
        return response
        
def main(args=None):
    try:
        rclpy.init(args=None)
        person_extraction_itt = Image_To_Text()
        rclpy.spin(person_extraction_itt)
    except KeyboardInterrupt:
        pass
    finally:
        # 終了処理
        #person_extraction.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()