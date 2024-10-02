import io
from fastapi import FastAPI, File, UploadFile
from fastapi.responses import JSONResponse, Response
import cv2
import numpy as np
from PIL import Image
import uvicorn
from object_detector import ObjectDetector

from fastapi import FastAPI, File, UploadFile, Form
from typing import List

class APIServer:
    def __init__(self):
        self.app = FastAPI()
        self.detector = ObjectDetector()
        
        @self.app.post("/analyze")
        async def process(file: UploadFile = File(...), objects: List[str] = Form(...)):
            contents = await file.read()
            image = Image.open(io.BytesIO(contents))
            image_np = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
            
            results = self.detector.process(image_np, objects)
            
            json_result = {
                "num_objects": results["num_objects"],
                "detections": results["detections"]
            }
            
            return JSONResponse(content=json_result)

        @self.app.post("/analyze_image")
        async def process_and_return_image(file: UploadFile = File(...), objects: List[str] = Form(...)):
            contents = await file.read()
            image = Image.open(io.BytesIO(contents))
            image_np = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
            
            results = self.detector.process(image_np, objects)
            
            _, img_encoded = cv2.imencode('.jpg', results['annotated_image'])
            
            return Response(content=img_encoded.tobytes(), media_type="image/jpeg")

    def run(self):
        uvicorn.run(self.app, host="127.0.0.1", port=8000)

if __name__ == "__main__":
    server = APIServer()
    server.run()