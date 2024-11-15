# YOLOv8 Object Detection Node Documentation

## Overview
このノードは、RealSenseカメラからの画像を使用して、YOLOv8による物体検出と深度推定を行います。人物、椅子、カップ、ボトルを検出し、それらの位置関係や距離を計算することができます。

## サービスとメッセージの仕様

### トピック
| 名前 | 型 | 説明 |
|------|------|------|
| `/yolo_detected_with_depth` | sensor_msgs/Image | 検出結果を可視化した画像 |
| `/detected/detected_objects` | happymimi_recognition_msgs2/msg/DetectedObjects | 検出されたオブジェクトのリスト |

### サービス
| 名前 | 型 | 説明 |
|------|------|------|
| `/detected/check_objects` | happymimi_recognition_msgs2/srv/CheckObjects | 指定したオブジェクトの存在確認 |
| `/detected/check_position` | happymimi_recognition_msgs2/srv/CheckPosition | 2つのオブジェクト間の位置関係を確認 |
| `/detected/select_person` | happymimi_recognition_msgs2/srv/SelectPerson | 右からn番目の人物を選択し、位置情報を取得 |

### カスタムメッセージ/サービス型
| 型 | フィールド | 説明 |
|------|------|------|
| DetectedObjects | string[] object_names<br>float32[] depths<br>float32[] confidences | 検出されたオブジェクトの情報 |
| CheckObjects | Request: string object_name<br>Response: bool exists | オブジェクトの存在確認 |
| CheckPosition | Request: string object1, string object2<br>Response: string relative_position | オブジェクト間の位置関係 |
| SelectPerson | Request: int32 person_index_from_right, float32 max_distance<br>Response: bool success, float32 selected_person_depth, int32 x_center, int32 y_center | 人物の選択と位置情報取得 |

## ターミナルでの使用方法

### トピックの確認
```bash
# 検出されたオブジェクトのリストを表示
ros2 topic echo /detected/detected_objects

# 検出結果の画像を表示
ros2 run rqt_image_view rqt_image_view /yolo_detected_with_depth
```

### サービスの呼び出し
```bash
# オブジェクトの存在確認
ros2 service call /detected/check_objects happymimi_recognition_msgs2/srv/CheckObjects "object_name: 'person'"

# オブジェクト間の位置関係確認
ros2 service call /detected/check_position happymimi_recognition_msgs2/srv/CheckPosition "{object1: 'person', object2: 'chair'}"

# 特定の人物の選択（右から2番目で3m以内の人物）
ros2 service call /detected/select_person happymimi_recognition_msgs2/srv/SelectPerson "{person_index_from_right: 2, max_distance: 3.0}"
```

## Pythonでの使用例
```python
import rclpy
from rclpy.node import Node
from happymimi_recognition_msgs2.msg import DetectedObjects
from happymimi_recognition_msgs2.srv import CheckObjects, CheckPosition, SelectPerson

class DetectionClient(Node):
    def __init__(self):
        super().__init__('detection_client')
        
        # サービスクライアントの作成
        self.check_objects_cli = self.create_client(
            CheckObjects, '/detected/check_objects')
        self.check_position_cli = self.create_client(
            CheckPosition, '/detected/check_position')
        self.select_person_cli = self.create_client(
            SelectPerson, '/detected/select_person')
            
        # トピックのサブスクライバー
        self.objects_sub = self.create_subscription(
            DetectedObjects,
            '/detected/detected_objects',
            self.objects_callback,
            10)

    def objects_callback(self, msg):
        # 検出されたオブジェクトの処理
        for name, depth, conf in zip(msg.object_names, msg.depths, msg.confidences):
            self.get_logger().info(f'Detected {name} at {depth}m with confidence {conf}')

    async def check_object(self, object_name):
        # オブジェクトの存在確認
        request = CheckObjects.Request()
        request.object_name = object_name
        response = await self.check_objects_cli.call_async(request)
        return response.exists

    async def check_relative_position(self, obj1, obj2):
        # 位置関係の確認
        request = CheckPosition.Request()
        request.object1 = obj1
        request.object2 = obj2
        response = await self.check_position_cli.call_async(request)
        return response.relative_position

    async def select_person(self, index, max_dist):
        # 人物の選択
        request = SelectPerson.Request()
        request.person_index_from_right = index
        request.max_distance = max_dist
        response = await self.select_person_cli.call_async(request)
        return response

# 使用例
async def main():
    rclpy.init()
    client = DetectionClient()
    
    # 人物の存在確認
    exists = await client.check_object('person')
    print(f'Person exists: {exists}')
    
    # 人物と椅子の位置関係確認
    position = await client.check_relative_position('person', 'chair')
    print(f'Position: {position}')
    
    # 右から2番目の人物を選択
    person = await client.select_person(2, 3.0)
    if person.success:
        print(f'Selected person at depth: {person.selected_person_depth}m')

    client.destroy_node()
    rclpy.shutdown()
```