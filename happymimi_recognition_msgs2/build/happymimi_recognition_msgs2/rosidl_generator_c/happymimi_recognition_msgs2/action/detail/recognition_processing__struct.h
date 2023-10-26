// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from happymimi_recognition_msgs2:action/RecognitionProcessing.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__STRUCT_H_
#define HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__STRUCT_H_

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
#include "happymimi_msgs_ros2/msg/detail/str_int__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Goal
{
  rosidl_runtime_c__String target_name;
  happymimi_msgs_ros2__msg__StrInt sort_option;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Goal;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_Goal.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'centroid_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Result
{
  bool result_flg;
  geometry_msgs__msg__Point centroid_point;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Result;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_Result.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback
{
  bool feedback_flg;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  happymimi_recognition_msgs2__action__RecognitionProcessing_Goal goal;
} happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response
{
  int8_t status;
  happymimi_recognition_msgs2__action__RecognitionProcessing_Result result;
} happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.h"

/// Struct defined in action/RecognitionProcessing in the package happymimi_recognition_msgs2.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  happymimi_recognition_msgs2__action__RecognitionProcessing_Feedback feedback;
} happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage;

// Struct for a sequence of happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage.
typedef struct happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence
{
  happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} happymimi_recognition_msgs2__action__RecognitionProcessing_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__STRUCT_H_
