import io
from fastapi import FastAPI, File, UploadFile
from fastapi.responses import JSONResponse
import cv2
import numpy as np
from PIL import Image
import uvicorn
from object_detector import ObjectDetector

class APIServer:
    def __init__(self):
        self.app = FastAPI()
        self.detector = ObjectDetector()
        
        @self.app.post("/analyze")
        async def process(file: UploadFile = File(...)):
            contents = await file.read()
            image = Image.open(io.BytesIO(contents))
            image_np = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
            
            results = self.detector.process(image_np,["person"])
            return JSONResponse(content=results)

    def run(self):
        uvicorn.run(self.app, host="127.0.0.1", port=8000)

if __name__ == "__main__":
    # カスタムクラスを指定する場合は以下のようにします
    server = APIServer()
    server.run()