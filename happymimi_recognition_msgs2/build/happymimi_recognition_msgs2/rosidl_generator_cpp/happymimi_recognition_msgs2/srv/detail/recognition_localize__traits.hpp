// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymimi_recognition_msgs2:srv/RecognitionLocalize.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__TRAITS_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymimi_recognition_msgs2/srv/detail/recognition_localize__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sort_option'
#include "happymimi_msgs2/msg/detail/str_int__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionLocalize_Request & msg,
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
  const RecognitionLocalize_Request & msg,
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

inline std::string to_yaml(const RecognitionLocalize_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::srv::RecognitionLocalize_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionLocalize_Request & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionLocalize_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionLocalize_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionLocalize_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionLocalize_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionLocalize_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace happymimi_recognition_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use happymimi_recognition_msgs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const happymimi_recognition_msgs2::srv::RecognitionLocalize_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionLocalize_Response & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionLocalize_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionLocalize_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionLocalize>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionLocalize";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionLocalize>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionLocalize";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionLocalize>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionLocalize>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::srv::RecognitionLocalize>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::srv::RecognitionLocalize_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::srv::RecognitionLocalize_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LOCALIZE__TRAITS_HPP_
