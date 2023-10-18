from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='usb_cam',
            namespace='usb_cam',
            executable='usb_cam_node_exe',
        ),
        Node(
            package='recognition_processing',
            namespace='recognition_processing',
            executable='recognition_opencv_publisher',
        )
    ])