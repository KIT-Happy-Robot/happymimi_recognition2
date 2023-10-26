// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymimi_recognition_msgs2:srv/PositionEstimator.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__TRAITS_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymimi_recognition_msgs2/srv/detail/position_estimator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const PositionEstimator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: center_x
  {
    out << "center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_x, out);
    out << ", ";
  }

  // member: center_y
  {
    out << "center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionEstimator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_x, out);
    out << "\n";
  }

  // member: center_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionEstimator_Request & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::PositionEstimator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::PositionEstimator_Request & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::PositionEstimator_Request>()
{
  return "happymimi_recognition_msgs2::srv::PositionEstimator_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::PositionEstimator_Request>()
{
  return "happymimi_recognition_msgs2/srv/PositionEstimator_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::PositionEstimator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::PositionEstimator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::PositionEstimator_Request>
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
  const PositionEstimator_Response & msg,
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
  const PositionEstimator_Response & msg,
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

inline std::string to_yaml(const PositionEstimator_Response & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::PositionEstimator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::PositionEstimator_Response & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::PositionEstimator_Response>()
{
  return "happymimi_recognition_msgs2::srv::PositionEstimator_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::PositionEstimator_Response>()
{
  return "happymimi_recognition_msgs2/srv/PositionEstimator_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::PositionEstimator_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::PositionEstimator_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::PositionEstimator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::PositionEstimator>()
{
  return "happymimi_recognition_msgs2::srv::PositionEstimator";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::PositionEstimator>()
{
  return "happymimi_recognition_msgs2/srv/PositionEstimator";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::PositionEstimator>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::srv::PositionEstimator_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::srv::PositionEstimator_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::PositionEstimator>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::srv::PositionEstimator_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::srv::PositionEstimator_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::srv::PositionEstimator>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::srv::PositionEstimator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::srv::PositionEstimator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__TRAITS_HPP_
