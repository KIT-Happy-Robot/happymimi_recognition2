# happymimi_recognition
認識処理のプログラムや、それに付随するプログラム関係をまとめたメタパッケージ

## Description
以下のパッケージを含みます。
- ### [recognition_processing](./recognition_processing)
    > darknet yoloから得られた物体の認識・検出結果を用いたモジュールをまとめたパッケージ  
    このパッケージでできること
    - 周辺の物体を探す
    - YOLOで検出した物体の一覧を取得
    - 物体を数える
    - 物体の三次元位置を推定する
    - etc..

- ### [person_feature_extraction](./person_feature_extraction)
    > 認識処理系を利用した人の特徴を取得するパッケージ  
    このパッケージでできること
    - 身長を推定する
    - 服の色を取得する
    - etc..

- ### [three_dimensional_data_processing](./three_dimensional_data_processing)
    > recognition_processingなどで必要となる、3次元データ処理を行うパッケージ  
    
    このパッケージでできること
    - 画像のピクセル座標から三次元位置を推定する
    - etc..

以上、認識系モジュールを扱うパッケージとなっています。  

## Requirement
※あまり気にしなくていいと思います
```
cv_bridge
vision_msgs
```

## Build Environment
```
$ colcon build
```

## Bring Up
基本以下の２つを立ち上げてください  
- recognition_processingの立ち上げ
```
$ ros2 launch recognition_processing recognition_processing.launch.py
```
- three_dimensional_data_processingの立ち上げ
```
$ ros2 launch three_dimensional_data_processing three_dimensional_data_processing.launch.py
```
※person_feature_extractionは別で立ち上げる必要があります。  

## Usage
モジュールの呼び出し方法等は各種パッケージで記述

## Reverse Lookup
- 物体を探したい 👉 [recognition_processingの Find モジュール](https://github.com/KIT-Happy-Robot/happymimi_recognition2/tree/master/recognition_processing#find)
- YOLOで検出した物体の一覧が欲しい 👉 [recognition_processingの List モジュール](https://github.com/KIT-Happy-Robot/happymimi_recognition/tree/master/recognition_processing#list)
- 物体の数を知りたい 👉 [recognition_processingの Count モジュール](https://github.com/KIT-Happy-Robot/happymimi_recognition2/tree/master/recognition_processing#count)
- 物体の三次元位置を知りたい 👉 [recognition_processingの Localize モジュール](https://github.com/KIT-Happy-Robot/happymimi_recognition2/tree/master/recognition_processing#localize)
- 複数の三次元位置を知りたい 👉 [recognition_processingの MultipleLocalize モジュール](https://github.com/KIT-Happy-Robot/happymimi_recognition2/tree/master/recognition_processing#MultipleLocalize)
- 人の身長や服の色などの特徴を取得したい 👉 [person_feature_extraction](./person_feature_extraction)
- (開発向け)物体の三次元位置を知りたい 👉 [three_dimensional_data_processingの Position Estimator モジュール]()
- (Advanced)認識から把持の一連のタスクを行いたい 👉 [happymimi_manipulation](https://github.com/KIT-Happy-Robot/happymimi_manipulation2)
