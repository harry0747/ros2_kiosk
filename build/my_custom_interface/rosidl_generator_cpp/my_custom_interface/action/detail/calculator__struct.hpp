// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_custom_interface:action/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__STRUCT_HPP_
#define MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_Goal __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_Goal_
{
  using Type = Calculator_Goal_<ContainerAllocator>;

  explicit Calculator_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_a = 0;
      this->num_b = 0;
      this->op = "";
    }
  }

  explicit Calculator_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : op(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_a = 0;
      this->num_b = 0;
      this->op = "";
    }
  }

  // field types and members
  using _num_a_type =
    int8_t;
  _num_a_type num_a;
  using _num_b_type =
    int8_t;
  _num_b_type num_b;
  using _op_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _op_type op;

  // setters for named parameter idiom
  Type & set__num_a(
    const int8_t & _arg)
  {
    this->num_a = _arg;
    return *this;
  }
  Type & set__num_b(
    const int8_t & _arg)
  {
    this->num_b = _arg;
    return *this;
  }
  Type & set__op(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->op = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_Goal
    std::shared_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_Goal
    std::shared_ptr<my_custom_interface::action::Calculator_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Goal_ & other) const
  {
    if (this->num_a != other.num_a) {
      return false;
    }
    if (this->num_b != other.num_b) {
      return false;
    }
    if (this->op != other.op) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Goal_

// alias to use template instance with default allocator
using Calculator_Goal =
  my_custom_interface::action::Calculator_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_Result __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_Result_
{
  using Type = Calculator_Result_<ContainerAllocator>;

  explicit Calculator_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0ll;
    }
  }

  explicit Calculator_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0ll;
    }
  }

  // field types and members
  using _answer_type =
    int64_t;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const int64_t & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_Result
    std::shared_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_Result
    std::shared_ptr<my_custom_interface::action::Calculator_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Result_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Result_

// alias to use template instance with default allocator
using Calculator_Result =
  my_custom_interface::action::Calculator_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface


#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_Feedback __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_Feedback_
{
  using Type = Calculator_Feedback_<ContainerAllocator>;

  explicit Calculator_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loading_count = 0;
    }
  }

  explicit Calculator_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loading_count = 0;
    }
  }

  // field types and members
  using _loading_count_type =
    int8_t;
  _loading_count_type loading_count;

  // setters for named parameter idiom
  Type & set__loading_count(
    const int8_t & _arg)
  {
    this->loading_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_Feedback
    std::shared_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_Feedback
    std::shared_ptr<my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Feedback_ & other) const
  {
    if (this->loading_count != other.loading_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Feedback_

// alias to use template instance with default allocator
using Calculator_Feedback =
  my_custom_interface::action::Calculator_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_custom_interface/action/detail/calculator__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_SendGoal_Request_
{
  using Type = Calculator_SendGoal_Request_<ContainerAllocator>;

  explicit Calculator_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Calculator_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_custom_interface::action::Calculator_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_custom_interface::action::Calculator_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Request
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Request
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_SendGoal_Request_

// alias to use template instance with default allocator
using Calculator_SendGoal_Request =
  my_custom_interface::action::Calculator_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_SendGoal_Response_
{
  using Type = Calculator_SendGoal_Response_<ContainerAllocator>;

  explicit Calculator_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Calculator_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Response
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_SendGoal_Response
    std::shared_ptr<my_custom_interface::action::Calculator_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_SendGoal_Response_

// alias to use template instance with default allocator
using Calculator_SendGoal_Response =
  my_custom_interface::action::Calculator_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace action
{

struct Calculator_SendGoal
{
  using Request = my_custom_interface::action::Calculator_SendGoal_Request;
  using Response = my_custom_interface::action::Calculator_SendGoal_Response;
};

}  // namespace action

}  // namespace my_custom_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_GetResult_Request __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_GetResult_Request_
{
  using Type = Calculator_GetResult_Request_<ContainerAllocator>;

  explicit Calculator_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Calculator_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_GetResult_Request
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_GetResult_Request
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_GetResult_Request_

// alias to use template instance with default allocator
using Calculator_GetResult_Request =
  my_custom_interface::action::Calculator_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "my_custom_interface/action/detail/calculator__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_GetResult_Response __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_GetResult_Response_
{
  using Type = Calculator_GetResult_Response_<ContainerAllocator>;

  explicit Calculator_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Calculator_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_custom_interface::action::Calculator_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_custom_interface::action::Calculator_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_GetResult_Response
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_GetResult_Response
    std::shared_ptr<my_custom_interface::action::Calculator_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_GetResult_Response_

// alias to use template instance with default allocator
using Calculator_GetResult_Response =
  my_custom_interface::action::Calculator_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface

namespace my_custom_interface
{

namespace action
{

struct Calculator_GetResult
{
  using Request = my_custom_interface::action::Calculator_GetResult_Request;
  using Response = my_custom_interface::action::Calculator_GetResult_Response;
};

}  // namespace action

}  // namespace my_custom_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_custom_interface/action/detail/calculator__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_custom_interface__action__Calculator_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_custom_interface__action__Calculator_FeedbackMessage __declspec(deprecated)
#endif

namespace my_custom_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Calculator_FeedbackMessage_
{
  using Type = Calculator_FeedbackMessage_<ContainerAllocator>;

  explicit Calculator_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Calculator_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_custom_interface::action::Calculator_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_custom_interface::action::Calculator_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_custom_interface__action__Calculator_FeedbackMessage
    std::shared_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_custom_interface__action__Calculator_FeedbackMessage
    std::shared_ptr<my_custom_interface::action::Calculator_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_FeedbackMessage_

// alias to use template instance with default allocator
using Calculator_FeedbackMessage =
  my_custom_interface::action::Calculator_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_custom_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_custom_interface
{

namespace action
{

struct Calculator
{
  /// The goal message defined in the action definition.
  using Goal = my_custom_interface::action::Calculator_Goal;
  /// The result message defined in the action definition.
  using Result = my_custom_interface::action::Calculator_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_custom_interface::action::Calculator_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_custom_interface::action::Calculator_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_custom_interface::action::Calculator_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_custom_interface::action::Calculator_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Calculator Calculator;

}  // namespace action

}  // namespace my_custom_interface

#endif  // MY_CUSTOM_INTERFACE__ACTION__DETAIL__CALCULATOR__STRUCT_HPP_
