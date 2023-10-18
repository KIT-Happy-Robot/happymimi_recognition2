cmake_minimum_required(VERSION 3.8)
project(happymimi_recognition_msgs2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
set(srv_files
  "srv/Clip.srv"
  "srv/depth_meter.srv"
  "srv/ITT.srv"
  "srv/MultipleLocalize.srv"
  "srv/PositionEstimator.srv"
  "srv/RecognitionCount.srv"
  "srv/RecognitionFind.srv"
  "srv/RecognitionList.srv"
  "srv/RecognitionLocalize.srv"
)

set(action_files
  "action/RecognitionProcessing.action"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
