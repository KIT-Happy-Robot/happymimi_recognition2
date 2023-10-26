// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymimi_recognition_msgs2:action/RecognitionProcessing.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__TRAITS_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sort_option'
#include "happymimi_msgs_ros2/msg/detail/str_int__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << ", ";
  }

  // member: sort_option
  {
    out << "sort_option: ";
    to_flow_style_yaml(msg.sort_option, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
    out << "\n";
  }

  // member: sort_option
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sort_option:\n";
    to_block_style_yaml(msg.sort_option, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_Goal & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_Goal";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_Goal";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'centroid_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_flg
  {
    out << "result_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_flg, out);
    out << ", ";
  }

  // member: centroid_point
  {
    out << "centroid_point: ";
    to_flow_style_yaml(msg.centroid_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_flg, out);
    out << "\n";
  }

  // member: centroid_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid_point:\n";
    to_block_style_yaml(msg.centroid_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_Result & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_Result";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_Result";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback_flg
  {
    out << "feedback_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_flg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_flg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_Feedback";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "happymimi_recognition_msgs2/action/detail/recognition_processing__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_SendGoal_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_SendGoal_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_SendGoal";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_GetResult_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_GetResult_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_GetResult";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "happymimi_recognition_msgs2/action/detail/recognition_processing__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace action
{

inline void to_flow_style_yaml(
  const RecognitionProcessing_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionProcessing_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionProcessing_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::action::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage & msg)
{
  return happymimi_recognition_msgs2::action::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>()
{
  return "happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage";
}

template<>
inline const char * name<happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>()
{
  return "happymimi_recognition_msgs2/action/RecognitionProcessing_FeedbackMessage";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<happymimi_recognition_msgs2::action::RecognitionProcessing>
  : std::true_type
{
};

template<>
struct is_action_goal<happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<happymimi_recognition_msgs2::action::RecognitionProcessing_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__TRAITS_HPP_
