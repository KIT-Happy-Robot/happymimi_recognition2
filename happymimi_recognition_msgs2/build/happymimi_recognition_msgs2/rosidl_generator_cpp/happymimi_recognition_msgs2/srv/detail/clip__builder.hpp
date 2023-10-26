// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:srv/Clip.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__CLIP__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__CLIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/srv/detail/clip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_Clip_Request_data
{
public:
  Init_Clip_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::Clip_Request data(::happymimi_recognition_msgs2::srv::Clip_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::Clip_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::Clip_Request>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_Clip_Request_data();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_Clip_Response_result
{
public:
  Init_Clip_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::Clip_Response result(::happymimi_recognition_msgs2::srv::Clip_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::Clip_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::Clip_Response>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_Clip_Response_result();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__CLIP__BUILDER_HPP_
