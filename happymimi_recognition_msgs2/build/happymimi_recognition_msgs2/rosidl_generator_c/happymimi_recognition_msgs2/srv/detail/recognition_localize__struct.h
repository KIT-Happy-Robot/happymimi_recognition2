// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:srv/RecognitionLocalize.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_name'
#include "rosidl_runtime_c/string.h"
// Member 'sort_option'
#include "happymimi_msgs2/msg/detail/str_int__struct.h"

/// Struct defined in srv/RecognitionLocalize in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionLocalize_Request
{
  rosidl_runtime_c__String target_name;
  happymimi_msgs2__msg__StrInt sort_option;
} happymimi_recognition_msgs2__srv__RecognitionLocalize_Request;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionLocalize_Request.
typedef struct happymimi_recognition_msgs2__srv__RecognitionLocalize_Request__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionLocalize_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionLocalize_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/RecognitionLocalize in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionLocalize_Response
{
  geometry_msgs__msg__Point point;
} happymimi_recognition_msgs2__srv__RecognitionLocalize_Response;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionLocalize_Response.
typedef struct happymimi_recognition_msgs2__srv__RecognitionLocalize_Response__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionLocalize_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionLocalize_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__STRUCT_H_
