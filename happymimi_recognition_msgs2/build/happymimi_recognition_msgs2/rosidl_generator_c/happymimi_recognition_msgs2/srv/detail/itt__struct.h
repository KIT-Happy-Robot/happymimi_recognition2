// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:srv/Itt.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__ITT__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__ITT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Itt in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__Itt_Request
{
  uint8_t structure_needs_at_least_one_member;
} happymimi_recognition_msgs2__srv__Itt_Request;

// Struct for a sequence of happymimi_recognition_msgs2__srv__Itt_Request.
typedef struct happymimi_recognition_msgs2__srv__Itt_Request__Sequence
{
  happymimi_recognition_msgs2__srv__Itt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__Itt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Itt in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__Itt_Response
{
  rosidl_runtime_c__String result;
} happymimi_recognition_msgs2__srv__Itt_Response;

// Struct for a sequence of happymimi_recognition_msgs2__srv__Itt_Response.
typedef struct happymimi_recognition_msgs2__srv__Itt_Response__Sequence
{
  happymimi_recognition_msgs2__srv__Itt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__Itt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__ITT__STRUCT_H_
