// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_interface:action/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__BUILDER_HPP_
#define MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_interface/action/detail/calculator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_Goal_op
{
public:
  explicit Init_Calculator_Goal_op(::my_custom_interface::action::Calculator_Goal & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::action::Calculator_Goal op(::my_custom_interface::action::Calculator_Goal::_op_type arg)
  {
    msg_.op = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_Goal msg_;
};

class Init_Calculator_Goal_num_b
{
public:
  explicit Init_Calculator_Goal_num_b(::my_custom_interface::action::Calculator_Goal & msg)
  : msg_(msg)
  {}
  Init_Calculator_Goal_op num_b(::my_custom_interface::action::Calculator_Goal::_num_b_type arg)
  {
    msg_.num_b = std::move(arg);
    return Init_Calculator_Goal_op(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_Goal msg_;
};

class Init_Calculator_Goal_num_a
{
public:
  Init_Calculator_Goal_num_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_Goal_num_b num_a(::my_custom_interface::action::Calculator_Goal::_num_a_type arg)
  {
    msg_.num_a = std::move(arg);
    return Init_Calculator_Goal_num_b(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_Goal>()
{
  return my_custom_interface::action::builder::Init_Calculator_Goal_num_a();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_Result_answer
{
public:
  Init_Calculator_Result_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::action::Calculator_Result answer(::my_custom_interface::action::Calculator_Result::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_Result>()
{
  return my_custom_interface::action::builder::Init_Calculator_Result_answer();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_Feedback_loading_count
{
public:
  Init_Calculator_Feedback_loading_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::action::Calculator_Feedback loading_count(::my_custom_interface::action::Calculator_Feedback::_loading_count_type arg)
  {
    msg_.loading_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_Feedback>()
{
  return my_custom_interface::action::builder::Init_Calculator_Feedback_loading_count();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_SendGoal_Request_goal
{
public:
  explicit Init_Calculator_SendGoal_Request_goal(::my_custom_interface::action::Calculator_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::action::Calculator_SendGoal_Request goal(::my_custom_interface::action::Calculator_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_SendGoal_Request msg_;
};

class Init_Calculator_SendGoal_Request_goal_id
{
public:
  Init_Calculator_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_SendGoal_Request_goal goal_id(::my_custom_interface::action::Calculator_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Calculator_SendGoal_Request_goal(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_SendGoal_Request>()
{
  return my_custom_interface::action::builder::Init_Calculator_SendGoal_Request_goal_id();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_SendGoal_Response_stamp
{
public:
  explicit Init_Calculator_SendGoal_Response_stamp(::my_custom_interface::action::Calculator_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::action::Calculator_SendGoal_Response stamp(::my_custom_interface::action::Calculator_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_SendGoal_Response msg_;
};

class Init_Calculator_SendGoal_Response_accepted
{
public:
  Init_Calculator_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_SendGoal_Response_stamp accepted(::my_custom_interface::action::Calculator_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Calculator_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_SendGoal_Response>()
{
  return my_custom_interface::action::builder::Init_Calculator_SendGoal_Response_accepted();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_GetResult_Request_goal_id
{
public:
  Init_Calculator_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_interface::action::Calculator_GetResult_Request goal_id(::my_custom_interface::action::Calculator_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_GetResult_Request>()
{
  return my_custom_interface::action::builder::Init_Calculator_GetResult_Request_goal_id();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_GetResult_Response_result
{
public:
  explicit Init_Calculator_GetResult_Response_result(::my_custom_interface::action::Calculator_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::action::Calculator_GetResult_Response result(::my_custom_interface::action::Calculator_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_GetResult_Response msg_;
};

class Init_Calculator_GetResult_Response_status
{
public:
  Init_Calculator_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_GetResult_Response_result status(::my_custom_interface::action::Calculator_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Calculator_GetResult_Response_result(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_GetResult_Response>()
{
  return my_custom_interface::action::builder::Init_Calculator_GetResult_Response_status();
}

}  // namespace my_custom_interface


namespace my_custom_interface
{

namespace action
{

namespace builder
{

class Init_Calculator_FeedbackMessage_feedback
{
public:
  explicit Init_Calculator_FeedbackMessage_feedback(::my_custom_interface::action::Calculator_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_custom_interface::action::Calculator_FeedbackMessage feedback(::my_custom_interface::action::Calculator_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_FeedbackMessage msg_;
};

class Init_Calculator_FeedbackMessage_goal_id
{
public:
  Init_Calculator_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calculator_FeedbackMessage_feedback goal_id(::my_custom_interface::action::Calculator_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Calculator_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_custom_interface::action::Calculator_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_interface::action::Calculator_FeedbackMessage>()
{
  return my_custom_interface::action::builder::Init_Calculator_FeedbackMessage_goal_id();
}

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__BUILDER_HPP_
