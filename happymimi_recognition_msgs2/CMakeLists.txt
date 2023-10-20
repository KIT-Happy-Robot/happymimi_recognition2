cmake_minimum_required(VERSION 3.5)
project(happymimi_recognition_msgs2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(happymimi_msgs2 REQUIRED)
find_package(action_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Clip.srv"
  "srv/Depthmeter.srv"
  "srv/Itt.srv"
  "srv/MultipleLocalize.srv"
  "srv/PositionEstimator.srv"
  "srv/RecognitionCount.srv"
  "srv/RecognitionFind.srv"
  "srv/RecognitionList.srv"
  "srv/RecognitionLocalize.srv"
  "action/RecognitionProcessing.action"
  DEPENDENCIES geometry_msgs happymimi_msgs2 action_msgs
  

  
)
ament_export_dependencies(rosidl_default_runtime)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  #set(ament_cmake_copyright_FOUND TRUE)
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
