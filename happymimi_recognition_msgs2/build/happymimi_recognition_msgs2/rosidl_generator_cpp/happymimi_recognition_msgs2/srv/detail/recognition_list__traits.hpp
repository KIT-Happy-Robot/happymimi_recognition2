// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from happymimi_recognition_msgs2:srv/RecognitionList.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__TRAITS_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "happymimi_recognition_msgs2/srv/detail/recognition_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionList_Request & msg,
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
    rosidl_generator_traits::value_to_yaml(msg.sort_option, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionList_Request & msg,
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
    out << "sort_option: ";
    rosidl_generator_traits::value_to_yaml(msg.sort_option, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionList_Request & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::RecognitionList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionList_Request & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionList_Request>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionList_Request";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionList_Request>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionList_Request";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionList_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace happymimi_recognition_msgs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecognitionList_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_list
  {
    if (msg.object_list.size() == 0) {
      out << "object_list: []";
    } else {
      out << "object_list: [";
      size_t pending_items = msg.object_list.size();
      for (auto item : msg.object_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecognitionList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_list.size() == 0) {
      out << "object_list: []\n";
    } else {
      out << "object_list:\n";
      for (auto item : msg.object_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecognitionList_Response & msg, bool use_flow_style = false)
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
  const happymimi_recognition_msgs2::srv::RecognitionList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  happymimi_recognition_msgs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use happymimi_recognition_msgs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const happymimi_recognition_msgs2::srv::RecognitionList_Response & msg)
{
  return happymimi_recognition_msgs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionList_Response>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionList_Response";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionList_Response>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionList_Response";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<happymimi_recognition_msgs2::srv::RecognitionList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<happymimi_recognition_msgs2::srv::RecognitionList>()
{
  return "happymimi_recognition_msgs2::srv::RecognitionList";
}

template<>
inline const char * name<happymimi_recognition_msgs2::srv::RecognitionList>()
{
  return "happymimi_recognition_msgs2/srv/RecognitionList";
}

template<>
struct has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionList>
  : std::integral_constant<
    bool,
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionList_Request>::value &&
    has_fixed_size<happymimi_recognition_msgs2::srv::RecognitionList_Response>::value
  >
{
};

template<>
struct has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionList>
  : std::integral_constant<
    bool,
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionList_Request>::value &&
    has_bounded_size<happymimi_recognition_msgs2::srv::RecognitionList_Response>::value
  >
{
};

template<>
struct is_service<happymimi_recognition_msgs2::srv::RecognitionList>
  : std::true_type
{
};

template<>
struct is_service_request<happymimi_recognition_msgs2::srv::RecognitionList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<happymimi_recognition_msgs2::srv::RecognitionList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__TRAITS_HPP_
