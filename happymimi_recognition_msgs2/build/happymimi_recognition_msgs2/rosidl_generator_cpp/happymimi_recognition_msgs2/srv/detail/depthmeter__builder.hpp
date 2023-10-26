// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:srv/Depthmeter.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/srv/detail/depthmeter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_Depthmeter_Request_meter
{
public:
  Init_Depthmeter_Request_meter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::Depthmeter_Request meter(::happymimi_recognition_msgs2::srv::Depthmeter_Request::_meter_type arg)
  {
    msg_.meter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::Depthmeter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::Depthmeter_Request>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_Depthmeter_Request_meter();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_Depthmeter_Response_ans
{
public:
  Init_Depthmeter_Response_ans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::Depthmeter_Response ans(::happymimi_recognition_msgs2::srv::Depthmeter_Response::_ans_type arg)
  {
    msg_.ans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::Depthmeter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::Depthmeter_Response>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_Depthmeter_Response_ans();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__DEPTHMETER__BUILDER_HPP_
