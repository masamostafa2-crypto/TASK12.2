// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pid_interfaces:action/LinearPid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pid_interfaces/action/linear_pid.hpp"


#ifndef PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__BUILDER_HPP_
#define PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pid_interfaces/action/detail/linear_pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_Goal_target_distance
{
public:
  Init_LinearPid_Goal_target_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::LinearPid_Goal target_distance(::pid_interfaces::action::LinearPid_Goal::_target_distance_type arg)
  {
    msg_.target_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_Goal>()
{
  return pid_interfaces::action::builder::Init_LinearPid_Goal_target_distance();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_Result_distance_travelled
{
public:
  explicit Init_LinearPid_Result_distance_travelled(::pid_interfaces::action::LinearPid_Result & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_Result distance_travelled(::pid_interfaces::action::LinearPid_Result::_distance_travelled_type arg)
  {
    msg_.distance_travelled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_Result msg_;
};

class Init_LinearPid_Result_message
{
public:
  explicit Init_LinearPid_Result_message(::pid_interfaces::action::LinearPid_Result & msg)
  : msg_(msg)
  {}
  Init_LinearPid_Result_distance_travelled message(::pid_interfaces::action::LinearPid_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LinearPid_Result_distance_travelled(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_Result msg_;
};

class Init_LinearPid_Result_success
{
public:
  Init_LinearPid_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_Result_message success(::pid_interfaces::action::LinearPid_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LinearPid_Result_message(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_Result>()
{
  return pid_interfaces::action::builder::Init_LinearPid_Result_success();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_Feedback_current_distance
{
public:
  Init_LinearPid_Feedback_current_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::LinearPid_Feedback current_distance(::pid_interfaces::action::LinearPid_Feedback::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_Feedback>()
{
  return pid_interfaces::action::builder::Init_LinearPid_Feedback_current_distance();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_SendGoal_Request_goal
{
public:
  explicit Init_LinearPid_SendGoal_Request_goal(::pid_interfaces::action::LinearPid_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_SendGoal_Request goal(::pid_interfaces::action::LinearPid_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Request msg_;
};

class Init_LinearPid_SendGoal_Request_goal_id
{
public:
  Init_LinearPid_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_SendGoal_Request_goal goal_id(::pid_interfaces::action::LinearPid_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearPid_SendGoal_Request_goal(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_SendGoal_Request>()
{
  return pid_interfaces::action::builder::Init_LinearPid_SendGoal_Request_goal_id();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_SendGoal_Response_stamp
{
public:
  explicit Init_LinearPid_SendGoal_Response_stamp(::pid_interfaces::action::LinearPid_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_SendGoal_Response stamp(::pid_interfaces::action::LinearPid_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Response msg_;
};

class Init_LinearPid_SendGoal_Response_accepted
{
public:
  Init_LinearPid_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_SendGoal_Response_stamp accepted(::pid_interfaces::action::LinearPid_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LinearPid_SendGoal_Response_stamp(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_SendGoal_Response>()
{
  return pid_interfaces::action::builder::Init_LinearPid_SendGoal_Response_accepted();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_SendGoal_Event_response
{
public:
  explicit Init_LinearPid_SendGoal_Event_response(::pid_interfaces::action::LinearPid_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_SendGoal_Event response(::pid_interfaces::action::LinearPid_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Event msg_;
};

class Init_LinearPid_SendGoal_Event_request
{
public:
  explicit Init_LinearPid_SendGoal_Event_request(::pid_interfaces::action::LinearPid_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_LinearPid_SendGoal_Event_response request(::pid_interfaces::action::LinearPid_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LinearPid_SendGoal_Event_response(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Event msg_;
};

class Init_LinearPid_SendGoal_Event_info
{
public:
  Init_LinearPid_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_SendGoal_Event_request info(::pid_interfaces::action::LinearPid_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LinearPid_SendGoal_Event_request(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_SendGoal_Event>()
{
  return pid_interfaces::action::builder::Init_LinearPid_SendGoal_Event_info();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_GetResult_Request_goal_id
{
public:
  Init_LinearPid_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pid_interfaces::action::LinearPid_GetResult_Request goal_id(::pid_interfaces::action::LinearPid_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_GetResult_Request>()
{
  return pid_interfaces::action::builder::Init_LinearPid_GetResult_Request_goal_id();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_GetResult_Response_result
{
public:
  explicit Init_LinearPid_GetResult_Response_result(::pid_interfaces::action::LinearPid_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_GetResult_Response result(::pid_interfaces::action::LinearPid_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Response msg_;
};

class Init_LinearPid_GetResult_Response_status
{
public:
  Init_LinearPid_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_GetResult_Response_result status(::pid_interfaces::action::LinearPid_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LinearPid_GetResult_Response_result(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_GetResult_Response>()
{
  return pid_interfaces::action::builder::Init_LinearPid_GetResult_Response_status();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_GetResult_Event_response
{
public:
  explicit Init_LinearPid_GetResult_Event_response(::pid_interfaces::action::LinearPid_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_GetResult_Event response(::pid_interfaces::action::LinearPid_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Event msg_;
};

class Init_LinearPid_GetResult_Event_request
{
public:
  explicit Init_LinearPid_GetResult_Event_request(::pid_interfaces::action::LinearPid_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_LinearPid_GetResult_Event_response request(::pid_interfaces::action::LinearPid_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LinearPid_GetResult_Event_response(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Event msg_;
};

class Init_LinearPid_GetResult_Event_info
{
public:
  Init_LinearPid_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_GetResult_Event_request info(::pid_interfaces::action::LinearPid_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LinearPid_GetResult_Event_request(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_GetResult_Event>()
{
  return pid_interfaces::action::builder::Init_LinearPid_GetResult_Event_info();
}

}  // namespace pid_interfaces


namespace pid_interfaces
{

namespace action
{

namespace builder
{

class Init_LinearPid_FeedbackMessage_feedback
{
public:
  explicit Init_LinearPid_FeedbackMessage_feedback(::pid_interfaces::action::LinearPid_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pid_interfaces::action::LinearPid_FeedbackMessage feedback(::pid_interfaces::action::LinearPid_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_FeedbackMessage msg_;
};

class Init_LinearPid_FeedbackMessage_goal_id
{
public:
  Init_LinearPid_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinearPid_FeedbackMessage_feedback goal_id(::pid_interfaces::action::LinearPid_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LinearPid_FeedbackMessage_feedback(msg_);
  }

private:
  ::pid_interfaces::action::LinearPid_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pid_interfaces::action::LinearPid_FeedbackMessage>()
{
  return pid_interfaces::action::builder::Init_LinearPid_FeedbackMessage_goal_id();
}

}  // namespace pid_interfaces

#endif  // PID_INTERFACES__ACTION__DETAIL__LINEAR_PID__BUILDER_HPP_
