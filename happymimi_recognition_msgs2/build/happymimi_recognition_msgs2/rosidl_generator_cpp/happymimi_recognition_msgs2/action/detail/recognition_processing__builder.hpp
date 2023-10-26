// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from happymimi_recognition_msgs2:action/RecognitionProcessing.idl
// generated code does not contain a copyright notice

#ifndef HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__BUILDER_HPP_
#define HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "happymimi_recognition_msgs2/action/detail/recognition_processing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_Goal_sort_option
{
public:
  explicit Init_RecognitionProcessing_Goal_sort_option(::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal sort_option(::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal::_sort_option_type arg)
  {
    msg_.sort_option = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal msg_;
};

class Init_RecognitionProcessing_Goal_target_name
{
public:
  Init_RecognitionProcessing_Goal_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_Goal_sort_option target_name(::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_RecognitionProcessing_Goal_sort_option(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_Goal>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_Goal_target_name();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_Result_centroid_point
{
public:
  explicit Init_RecognitionProcessing_Result_centroid_point(::happymimi_recognition_msgs2::action::RecognitionProcessing_Result & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Result centroid_point(::happymimi_recognition_msgs2::action::RecognitionProcessing_Result::_centroid_point_type arg)
  {
    msg_.centroid_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Result msg_;
};

class Init_RecognitionProcessing_Result_result_flg
{
public:
  Init_RecognitionProcessing_Result_result_flg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_Result_centroid_point result_flg(::happymimi_recognition_msgs2::action::RecognitionProcessing_Result::_result_flg_type arg)
  {
    msg_.result_flg = std::move(arg);
    return Init_RecognitionProcessing_Result_centroid_point(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_Result>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_Result_result_flg();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_Feedback_feedback_flg
{
public:
  Init_RecognitionProcessing_Feedback_feedback_flg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback feedback_flg(::happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback::_feedback_flg_type arg)
  {
    msg_.feedback_flg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_Feedback>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_Feedback_feedback_flg();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_SendGoal_Request_goal
{
public:
  explicit Init_RecognitionProcessing_SendGoal_Request_goal(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request goal(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request msg_;
};

class Init_RecognitionProcessing_SendGoal_Request_goal_id
{
public:
  Init_RecognitionProcessing_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_SendGoal_Request_goal goal_id(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecognitionProcessing_SendGoal_Request_goal(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Request>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_SendGoal_Request_goal_id();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_SendGoal_Response_stamp
{
public:
  explicit Init_RecognitionProcessing_SendGoal_Response_stamp(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response stamp(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response msg_;
};

class Init_RecognitionProcessing_SendGoal_Response_accepted
{
public:
  Init_RecognitionProcessing_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_SendGoal_Response_stamp accepted(::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RecognitionProcessing_SendGoal_Response_stamp(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_SendGoal_Response>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_SendGoal_Response_accepted();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_GetResult_Request_goal_id
{
public:
  Init_RecognitionProcessing_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request goal_id(::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Request>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_GetResult_Request_goal_id();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_GetResult_Response_result
{
public:
  explicit Init_RecognitionProcessing_GetResult_Response_result(::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response result(::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response msg_;
};

class Init_RecognitionProcessing_GetResult_Response_status
{
public:
  Init_RecognitionProcessing_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_GetResult_Response_result status(::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RecognitionProcessing_GetResult_Response_result(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_GetResult_Response>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_GetResult_Response_status();
}

}  // namespace happymimi_recognition_msgs2


namespace happymimi_recognition_msgs2
{

namespace action
{

namespace builder
{

class Init_RecognitionProcessing_FeedbackMessage_feedback
{
public:
  explicit Init_RecognitionProcessing_FeedbackMessage_feedback(::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage feedback(::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage msg_;
};

class Init_RecognitionProcessing_FeedbackMessage_goal_id
{
public:
  Init_RecognitionProcessing_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecognitionProcessing_FeedbackMessage_feedback goal_id(::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecognitionProcessing_FeedbackMessage_feedback(msg_);
  }

private:
  ::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::happymimi_recognition_msgs2::action::RecognitionProcessing_FeedbackMessage>()
{
  return happymimi_recognition_msgs2::action::builder::Init_RecognitionProcessing_FeedbackMessage_goal_id();
}

}  // namespace happymimi_recognition_msgs2

#endif  // HAPPYMIMI_RECOGNITION_MSGS2__ACTION__DETAIL__RECOGNITION_PROCESSING__BUILDER_HPP_
