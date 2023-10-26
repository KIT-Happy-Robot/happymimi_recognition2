// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:srv/PositionEstimator.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/srv/detail/position_estimator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_PositionEstimator_Request_center_y
{
public:
  explicit Init_PositionEstimator_Request_center_y(::happymimi_recognition_msgs2::srv::PositionEstimator_Request & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::srv::PositionEstimator_Request center_y(::happymimi_recognition_msgs2::srv::PositionEstimator_Request::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::PositionEstimator_Request msg_;
};

class Init_PositionEstimator_Request_center_x
{
public:
  Init_PositionEstimator_Request_center_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionEstimator_Request_center_y center_x(::happymimi_recognition_msgs2::srv::PositionEstimator_Request::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_PositionEstimator_Request_center_y(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::PositionEstimator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::PositionEstimator_Request>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_PositionEstimator_Request_center_x();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_PositionEstimator_Response_point
{
public:
  Init_PositionEstimator_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::PositionEstimator_Response point(::happymimi_recognition_msgs2::srv::PositionEstimator_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::PositionEstimator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::PositionEstimator_Response>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_PositionEstimator_Response_point();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__POSITION_ESTIMATOR__BUILDER_HPP_
