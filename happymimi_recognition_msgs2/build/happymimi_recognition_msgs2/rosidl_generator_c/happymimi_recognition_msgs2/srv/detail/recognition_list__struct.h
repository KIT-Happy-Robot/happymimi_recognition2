// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:srv/RecognitionList.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__STRUCT_H_

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
// Member 'sort_option'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecognitionList in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionList_Request
{
  rosidl_runtime_c__String target_name;
  rosidl_runtime_c__String sort_option;
} happymimi_recognition_msgs2__srv__RecognitionList_Request;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionList_Request.
typedef struct happymimi_recognition_msgs2__srv__RecognitionList_Request__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object_list'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecognitionList in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__srv__RecognitionList_Response
{
  rosidl_runtime_c__String__Sequence object_list;
} happymimi_recognition_msgs2__srv__RecognitionList_Response;

// Struct for a sequence of happymimi_recognition_msgs2__srv__RecognitionList_Response.
typedef struct happymimi_recognition_msgs2__srv__RecognitionList_Response__Sequence
{
  happymimi_recognition_msgs2__srv__RecognitionList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__srv__RecognitionList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__STRUCT_H_
