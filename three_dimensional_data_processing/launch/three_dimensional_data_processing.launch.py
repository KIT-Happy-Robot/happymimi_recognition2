from launch import LaunchDescription
#from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
#from launch.substitutions import Command, LaunchConfiguration
from ament_index_python.packages import get_package_share_path


def generate_launch_description():
    package_path = get_package_share_path('three_dimensional_data_processing')
    
    return LaunchDescription([
        Node(
            package='three_dimensional_data_processing',
            namespace='three_dimensional_data_processing',
            executable='position_estimator',
            name='position_estimator',
            output='screen',
        )
    ])