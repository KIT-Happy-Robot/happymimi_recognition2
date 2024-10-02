import requests
import json
from PIL import Image
import io

image_path = "test.jpg"
base_url = "http://127.0.0.1:8000"

def test_analyze(objects):
    url = f"{base_url}/analyze"
    with open(image_path, "rb") as image_file:
        files = {"file": ("image.jpg", image_file, "image/jpeg")}
        data = {"objects": objects}
        response = requests.post(url, files=files, data=data)
    
    if response.status_code == 200:
        print("analyze エンドポイントのレスポンス:")
        print(json.dumps(response.json(), indent=2))
    else:
        print(f"エラー: {response.status_code}")
        print(response.text)

def test_analyze_image(objects):
    url = f"{base_url}/analyze_image"
    with open(image_path, "rb") as image_file:
        files = {"file": ("image.jpg", image_file, "image/jpeg")}
        data = {"objects": objects}
        response = requests.post(url, files=files, data=data)
    
    if response.status_code == 200:
        print("analyze_image エンドポイントのレスポンス:")
        print("画像を正常に受信しました。")
        
        image = Image.open(io.BytesIO(response.content))
        output_path = "output_image.jpg"
        image.save(output_path)
        print(f"処理された画像を {output_path} に保存しました。")
    else:
        print(f"エラー: {response.status_code}")
        print(response.text)

if __name__ == "__main__":
    objects_to_detect = ["person", "car", "dog"]  # 検出したいオブジェクトのリスト
    
    print("analyzeエンドポイントのテスト")
    test_analyze(objects_to_detect)
    
    print("\nanalyze_imageエンドポイントのテスト")
    test_analyze_image(objects_to_detect)