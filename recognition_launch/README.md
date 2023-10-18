# normallaunch.py
ROS2とOpenCVが正しく接続されているかを確認できるラウンチファイル。
`$ ros2 launch recognition_launch normallaunch.py`
## usage
ウェブカメラを用いるすべてのノードを立ち上げるラウンチファイルです。
上記のコマンドを入力したら、`rqt`と`rqt_graph`を別ターミナルウィンドウで叩き、トピック通信で流れているカメラ映像を取得しましょう。

