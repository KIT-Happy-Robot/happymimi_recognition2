// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:srv/PositionEstimator.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PositionEstimator in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__PositionEstimator_Request
{
  int64_t center_x;
  int64_t center_y;
} happymimi_recognition_msgs2__srv__PositionEstimator_Request;

// Struct for a sequence of happymimi_recognition_msgs2__srv__PositionEstimator_Request.
typedef struct happymimi_recognition_msgs2__srv__PositionEstimator_Request__Sequence
{
  happymimi_recognition_msgs2__srv__PositionEstimator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__PositionEstimator_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/PositionEstimator in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__PositionEstimator_Response
{
  geometry_msgs__msg__Point point;
} happymimi_recognition_msgs2__srv__PositionEstimator_Response;

// Struct for a sequence of happymimi_recognition_msgs2__srv__PositionEstimator_Response.
typedef struct happymimi_recognition_msgs2__srv__PositionEstimator_Response__Sequence
{
  happymimi_recognition_msgs2__srv__PositionEstimator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__PositionEstimator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__STRUCT_H_
