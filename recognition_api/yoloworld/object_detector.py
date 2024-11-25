from ultralytics import YOLOWorld
import cv2
import numpy as np

class ObjectDetector:
    def __init__(self, yolowName="yolov8l-world.pt"):
        self.yolowName = yolowName
    
    def process(self, image, object_list):
        self.model = YOLOWorld(self.yolowName)
        self.model.set_classes(object_list)
        self.image = image
        results = self.model.predict(self.image)
        
        detections = []
        # 元の画像のコピーを作成
        annotated_image = self.image.copy()
        
        for r in results:
            boxes = r.boxes.xyxy.cpu().numpy()
            classes = r.boxes.cls.cpu().numpy()
            
            for box, cls in zip(boxes, classes):
                x1, y1, x2, y2 = map(int, box)
                center_x = (x1 + x2) / 2
                center_y = (y1 + y2) / 2
                
                class_name = self.model.names[int(cls)]
                
                # バウンディングボックスを描画
                cv2.rectangle(annotated_image, (x1, y1), (x2, y2), (0, 255, 0), 2)
                # クラス名を描画
                cv2.putText(annotated_image, class_name, (x1, y1 - 10), 
                            cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)
                
                detections.append({
                    "class": class_name,
                    "center": [float(center_x), float(center_y)]
                })
        
        return {
            "num_objects": len(detections),
            "detections": detections,
            "annotated_image": annotated_image
        }