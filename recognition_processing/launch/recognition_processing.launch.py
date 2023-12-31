from launch import LaunchDescription
#from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
#from launch.substitutions import Command, LaunchConfiguration
from ament_index_python.packages import get_package_share_path


def generate_launch_description():
    package_path = get_package_share_path('recognition_processing')
    
    return LaunchDescription([
        Node(
            package='recognition_processing',
            namespace='recognition_action_server',
            executable='recognition_action_server',
            name='recognition_action_server',
            output='screen',
            parameters=[
                {'object_dict': package_path+'/param/object_dict.yaml'}
            ]
        )
    ])