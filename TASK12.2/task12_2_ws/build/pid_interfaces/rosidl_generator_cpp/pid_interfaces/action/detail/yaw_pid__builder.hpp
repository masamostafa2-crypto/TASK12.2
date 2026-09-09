// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pid_interfaces:action/YawPid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pid_interfaces/action/yaw_pid.hpp"


#ifndef PID_INTERFACES__ACTION__DETAIL__YAW_PID__BUILDER_HPP_
#define PID_INTERFACES__ACTION__DETAIL__YAW_PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pid_interfaces/action/detail/yaw_pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_Goal_target_yaw
{
public:
  Init_YawPid_Goal_target_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::YawPid_Goal target_yaw(::pid_interfaces::action::YawPid_Goal::_target_yaw_type arg)
  {
    msg_.target_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_Goal>()
{
  return pid_interfaces::action::builder::Init_YawPid_Goal_target_yaw();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_Result_angle_turned
{
public:
  explicit Init_YawPid_Result_angle_turned(::pid_interfaces::action::YawPid_Result & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_Result angle_turned(::pid_interfaces::action::YawPid_Result::_angle_turned_type arg)
  {
    msg_.angle_turned = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_Result msg_;
};

class Init_YawPid_Result_message
{
public:
  explicit Init_YawPid_Result_message(::pid_interfaces::action::YawPid_Result & msg)
  : msg_(msg)
  {}
  Init_YawPid_Result_angle_turned message(::pid_interfaces::action::YawPid_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_YawPid_Result_angle_turned(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_Result msg_;
};

class Init_YawPid_Result_success
{
public:
  Init_YawPid_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_Result_message success(::pid_interfaces::action::YawPid_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_YawPid_Result_message(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_Result>()
{
  return pid_interfaces::action::builder::Init_YawPid_Result_success();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_Feedback_current_yaw
{
public:
  Init_YawPid_Feedback_current_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::YawPid_Feedback current_yaw(::pid_interfaces::action::YawPid_Feedback::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_Feedback>()
{
  return pid_interfaces::action::builder::Init_YawPid_Feedback_current_yaw();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_SendGoal_Request_goal
{
public:
  explicit Init_YawPid_SendGoal_Request_goal(::pid_interfaces::action::YawPid_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_SendGoal_Request goal(::pid_interfaces::action::YawPid_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Request msg_;
};

class Init_YawPid_SendGoal_Request_goal_id
{
public:
  Init_YawPid_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_SendGoal_Request_goal goal_id(::pid_interfaces::action::YawPid_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_YawPid_SendGoal_Request_goal(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_SendGoal_Request>()
{
  return pid_interfaces::action::builder::Init_YawPid_SendGoal_Request_goal_id();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_SendGoal_Response_stamp
{
public:
  explicit Init_YawPid_SendGoal_Response_stamp(::pid_interfaces::action::YawPid_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_SendGoal_Response stamp(::pid_interfaces::action::YawPid_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Response msg_;
};

class Init_YawPid_SendGoal_Response_accepted
{
public:
  Init_YawPid_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_SendGoal_Response_stamp accepted(::pid_interfaces::action::YawPid_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_YawPid_SendGoal_Response_stamp(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_SendGoal_Response>()
{
  return pid_interfaces::action::builder::Init_YawPid_SendGoal_Response_accepted();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_SendGoal_Event_response
{
public:
  explicit Init_YawPid_SendGoal_Event_response(::pid_interfaces::action::YawPid_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_SendGoal_Event response(::pid_interfaces::action::YawPid_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Event msg_;
};

class Init_YawPid_SendGoal_Event_request
{
public:
  explicit Init_YawPid_SendGoal_Event_request(::pid_interfaces::action::YawPid_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_YawPid_SendGoal_Event_response request(::pid_interfaces::action::YawPid_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_YawPid_SendGoal_Event_response(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Event msg_;
};

class Init_YawPid_SendGoal_Event_info
{
public:
  Init_YawPid_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_SendGoal_Event_request info(::pid_interfaces::action::YawPid_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_YawPid_SendGoal_Event_request(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_SendGoal_Event>()
{
  return pid_interfaces::action::builder::Init_YawPid_SendGoal_Event_info();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_GetResult_Request_goal_id
{
public:
  Init_YawPid_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::YawPid_GetResult_Request goal_id(::pid_interfaces::action::YawPid_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_GetResult_Request>()
{
  return pid_interfaces::action::builder::Init_YawPid_GetResult_Request_goal_id();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_GetResult_Response_result
{
public:
  explicit Init_YawPid_GetResult_Response_result(::pid_interfaces::action::YawPid_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_GetResult_Response result(::pid_interfaces::action::YawPid_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Response msg_;
};

class Init_YawPid_GetResult_Response_status
{
public:
  Init_YawPid_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_GetResult_Response_result status(::pid_interfaces::action::YawPid_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_YawPid_GetResult_Response_result(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_GetResult_Response>()
{
  return pid_interfaces::action::builder::Init_YawPid_GetResult_Response_status();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_GetResult_Event_response
{
public:
  explicit Init_YawPid_GetResult_Event_response(::pid_interfaces::action::YawPid_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_GetResult_Event response(::pid_interfaces::action::YawPid_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Event msg_;
};

class Init_YawPid_GetResult_Event_request
{
public:
  explicit Init_YawPid_GetResult_Event_request(::pid_interfaces::action::YawPid_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_YawPid_GetResult_Event_response request(::pid_interfaces::action::YawPid_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_YawPid_GetResult_Event_response(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Event msg_;
};

class Init_YawPid_GetResult_Event_info
{
public:
  Init_YawPid_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_GetResult_Event_request info(::pid_interfaces::action::YawPid_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_YawPid_GetResult_Event_request(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_GetResult_Event>()
{
  return pid_interfaces::action::builder::Init_YawPid_GetResult_Event_info();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_YawPid_FeedbackMessage_feedback
{
public:
  explicit Init_YawPid_FeedbackMessage_feedback(::pid_interfaces::action::YawPid_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::YawPid_FeedbackMessage feedback(::pid_interfaces::action::YawPid_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_FeedbackMessage msg_;
};

class Init_YawPid_FeedbackMessage_goal_id
{
public:
  Init_YawPid_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawPid_FeedbackMessage_feedback goal_id(::pid_interfaces::action::YawPid_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_YawPid_FeedbackMessage_feedback(msg_);
  }

private:
  ::pid_interfaces::action::YawPid_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::YawPid_FeedbackMessage>()
{
  return pid_interfaces::action::builder::Init_YawPid_FeedbackMessage_goal_id();
}

}  // namespace pid_interfaces

#endif  // PID_INTERFACES__ACTION__DETAIL__YAW_PID__BUILDER_HPP_
