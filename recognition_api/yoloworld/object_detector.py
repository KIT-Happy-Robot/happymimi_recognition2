from ultralytics import YOLOWorld
import cv2
import numpy as np



class ObjectDetector:
    def __init__(self,
                 yolowName="yolov8l-world.pt",
                 ):
        self.yolowName = yolowName

    def process(self,image,object_list):
        self.model = YOLOWorld(self.yolowName)
        self.model.set_classes(object_list)
        self.image = image
        results = self.model.predict(self.image)
        detections = []
        for r in results:
            boxes = r.boxes.xyxy.cpu().numpy()
            classes = r.boxes.cls.cpu().numpy()

            for box, cls in zip(boxes,classes):
                x1,y1,x2,y2 = box
                center_x = (x1 + x2) / 2
                center_y = (y1 + y2) /2

                detections.append({
                    "class": self.model.names[int(cls)],
                    "center": [float(center_x),float(center_y)]
                })


        return{
            "num_objects": len(detections),
            "detections": detections
        }




