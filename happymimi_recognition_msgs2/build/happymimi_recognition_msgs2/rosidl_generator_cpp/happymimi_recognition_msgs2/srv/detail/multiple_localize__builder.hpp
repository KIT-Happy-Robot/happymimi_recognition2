// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:srv/MultipleLocalize.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__MULTIPLE_LOCALIZE__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__MULTIPLE_LOCALIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/srv/detail/multiple_localize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_MultipleLocalize_Request_target_name
{
public:
  Init_MultipleLocalize_Request_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::MultipleLocalize_Request target_name(::happymimi_recognition_msgs2::srv::MultipleLocalize_Request::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::MultipleLocalize_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::MultipleLocalize_Request>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_MultipleLocalize_Request_target_name();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_MultipleLocalize_Response_points
{
public:
  Init_MultipleLocalize_Response_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::MultipleLocalize_Response points(::happymimi_recognition_msgs2::srv::MultipleLocalize_Response::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::MultipleLocalize_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::MultipleLocalize_Response>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_MultipleLocalize_Response_points();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__MULTIPLE_LOCALIZE__BUILDER_HPP_
