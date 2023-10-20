from setuptools import find_packages, setup

package_name = 'person_feature_extraction'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mimi_orin',
    maintainer_email='mimi_orin@todo.todo',
    description='TODO: Package for extracting human features',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'clip_service = person_feature_extraction.gpt2_exam_realsense:main'
        ],
    },
)
