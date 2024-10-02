import requests

# 画像ファイルのパス
image_path = "test.jpg"

# リクエストを送信
url = "http://127.0.0.1:8000/analyze"
with open(image_path, "rb") as image_file:
    files = {"file": ("image.jpg", image_file, "image/jpeg")}
    response = requests.post(url, files=files)

# レスポンスを表示
print(response.json())