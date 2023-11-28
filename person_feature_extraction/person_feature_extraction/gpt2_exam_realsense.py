#! /usr/bin/env python3
# -*- coding: utf-8 -*-
#GPTのCLIPから特徴量推定を行う
#ROSとの連携を考慮し、画像取得はRealsenseで行う

from PIL import Image as PImage
import requests
#from transformers import CLIPProcessor, CLIPModel
import torch
import clip
import numpy as np
#モデルの読み込み
#model = CLIPModel.from_pretrained("openai/clip-vit-large-patch14")
#processor = CLIPProcessor.from_pretrained("openai/clip-vit-large-patch14")

#Deviceの確認
device = "cuda" if torch.cuda.is_available() else "cpu"
model, preprocess = clip.load("ViT-B/32", device=device)

import rclpy
from rclpy.node import Node
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from happymimi_recognition_msgs2.srv import Clip



class Person_extract(Node):
    def __init__(self):
        
        self.SELFNODE = "person_extract"
        super().__init__(self.SELFNODE)
        self.srv = self.create_service(Clip, '/person_feature/gpt', self.main_extract)
        #debug用
        self.sub = self.create_subscription(Image, "/image_raw", self.realsenseCB,1)
        #rospy.Subscriber('/camera/color/image_raw', Image, self.realsenseCB)
        #self.realsense_sub = self.create_subscription(Image, "camera/camera/color/image_raw", self.realsenseCB,1)
        self.bridge = CvBridge()
        
        print("READY SERVER")
        self.label_cloth_color = ["person wearing white clothes", "person wearing red clothes",
                                  "person wearing blue clothes","person wearing black clothes",
                                  "person wearing glay clothes","person wearing brown clothes",
                                  "person wearing orange clothes", "person wearing yellow clothes",
                                  "person wearing green clothes","person wearing purple clothes",
                                  "person wearing pink clothes"]
        
        self.label_pants_color = ["person wearing white pants", "person wearing black pants"]
        
        self.label_hair_color = ["dark-haired person","white-haired person",
                                 "person with brown hair","red-haired person"]
        
        self.label_gender = ["a photo of a man", "a photo of a woman"]
        self.label_glass = ["a photo of a person wearing glasses", "a photo of a person not wearing glasses"]

        self.label_age = ["This person appears to be in his/her 10s.",
                          "This person appears to be in his/her 20s.",
                          "This person appears to be in his/her 30s.",
                          "This person appears to be in his/her 40s.",
                          "This person appears to be in his/her 50s.",
                          "This person appears to be in his/her 60s.",
                          "This person appears to be in his/her 70s."]
    
    
    def realsenseCB(self, res):
        self.image_res = res
    
    def extract_gender(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_gender).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_gender[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def extract_glass(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_glass).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_glass[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def extract_cloth_color(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_cloth_color).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_cloth_color[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def extract_pants_color(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_pants_color).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_pants_color[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def extract_hair_color(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_hair_color).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_hair_color[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def extract_age(self):
        #試験的に性別を判断する
        image_data = self.bridge.imgmsg_to_cv2(self.image_res)
        image_pil = PImage.fromarray(image_data)
        image_pil = image_pil.convert('RGB')
        
        image = preprocess(image_pil).unsqueeze(0).to(device)
        
        text = clip.tokenize(self.label_age).to(device)
        with torch.no_grad():
            image_features = model.encode_image(image)
            text_features = model.encode_text(text)
            
            logits_per_image, logits_per_text = model(image, text)
            probs = logits_per_image.softmax(dim=-1).cpu().numpy()
            
            result = self.label_age[np.argmax(probs)]
            
        print("--------------------------------------------")
        print("result:",result)
        print("Label probs:", probs)
        print()
        
        return result
    
    def main_extract(self, request, response):
        
        data = request.data
        if data == "gender":response.result = str(self.extract_gender())
        elif data == "glass":response.result = str(self.extract_glass())
        elif data == "cloth" :response.result = str(self.extract_cloth_color())
        elif data == "pants":response.result = str(self.extract_pants_color())
        elif data == "hair":response.result = str(self.extract_hair_color())
        elif data == "age":response.result = str(self.extract_age())
        elif data == "":
            self.get_logger().info("no select data")
            response.result = "False"
            return response
        
        return response
    
def main(args=None):
    try:
        rclpy.init(args=None)
        person_extraction = Person_extract()
        rclpy.spin(person_extraction)
    except KeyboardInterrupt:
        pass
    finally:
        # 終了処理
        #person_extraction.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()