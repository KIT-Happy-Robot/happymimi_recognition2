// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymimi_recognition_msgs2:srv/RecognitionCount.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__TRAITS_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymimi_recognition_msgs2/srv/detail/recognition_count__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionCount_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_name
  {
    out << "target_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionCount_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionCount_Request & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::RecognitionCount_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionCount_Request & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionCount_Request>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionCount_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionCount_Request>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionCount_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionCount_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionCount_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionCount_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionCount_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionCount_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionCount_Response & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::RecognitionCount_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionCount_Response & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionCount_Response>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionCount_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionCount_Response>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionCount_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionCount_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionCount_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionCount_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionCount>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionCount";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionCount>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionCount";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionCount>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionCount_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionCount_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionCount>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionCount_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionCount_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::srv::RecognitionCount>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::srv::RecognitionCount_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::srv::RecognitionCount_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_COUNT__TRAITS_HPP_
