// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:srv/RecognitionFind.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_FIND__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_FIND__STRUCT_H_

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

/// Struct defined in srv/RecognitionFind in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionFind_Request
{
  rosidl_runtime_c__String target_name;
} happymimi_recognition_msgs2__srv__RecognitionFind_Request;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionFind_Request.
typedef struct happymimi_recognition_msgs2__srv__RecognitionFind_Request__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionFind_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionFind_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RecognitionFind in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionFind_Response
{
  bool result;
} happymimi_recognition_msgs2__srv__RecognitionFind_Response;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionFind_Response.
typedef struct happymimi_recognition_msgs2__srv__RecognitionFind_Response__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionFind_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionFind_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_FIND__STRUCT_H_
