// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:srv/RecognitionList.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/srv/detail/recognition_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_RecognitionList_Request_sort_option
{
public:
  explicit Init_RecognitionList_Request_sort_option(::happymimi_recognition_msgs2::srv::RecognitionList_Request & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::srv::RecognitionList_Request sort_option(::happymimi_recognition_msgs2::srv::RecognitionList_Request::_sort_option_type arg)
  {
    msg_.sort_option = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::RecognitionList_Request msg_;
};

class Init_RecognitionList_Request_target_name
{
public:
  Init_RecognitionList_Request_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionList_Request_sort_option target_name(::happymimi_recognition_msgs2::srv::RecognitionList_Request::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_RecognitionList_Request_sort_option(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::RecognitionList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::RecognitionList_Request>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_RecognitionList_Request_target_name();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace srv
{

namespace builder
{

class Init_RecognitionList_Response_object_list
{
public:
  Init_RecognitionList_Response_object_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::srv::RecognitionList_Response object_list(::happymimi_recognition_msgs2::srv::RecognitionList_Response::_object_list_type arg)
  {
    msg_.object_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::srv::RecognitionList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::srv::RecognitionList_Response>()
{
  return happymimi_recognition_msgs2::srv::builder::Init_RecognitionList_Response_object_list();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__SRV__DETAIL__RECOGNITION_LIST__BUILDER_HPP_
