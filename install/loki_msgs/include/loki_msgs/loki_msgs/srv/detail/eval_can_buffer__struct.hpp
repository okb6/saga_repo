// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/EvalCanBuffer.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
#include "loki_msgs/msg/detail/can_frame__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__EvalCanBuffer_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__EvalCanBuffer_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvalCanBuffer_Request_
{
  using Type = EvalCanBuffer_Request_<ContainerAllocator>;

  explicit EvalCanBuffer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EvalCanBuffer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _can_msgs_base_type =
    std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>>;
  _can_msgs_base_type can_msgs_base;
  using _can_msgs_device_type =
    std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>>;
  _can_msgs_device_type can_msgs_device;

  // setters for named parameter idiom
  Type & set__can_msgs_base(
    const std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>> & _arg)
  {
    this->can_msgs_base = _arg;
    return *this;
  }
  Type & set__can_msgs_device(
    const std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>> & _arg)
  {
    this->can_msgs_device = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__EvalCanBuffer_Request
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__EvalCanBuffer_Request
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvalCanBuffer_Request_ & other) const
  {
    if (this->can_msgs_base != other.can_msgs_base) {
      return false;
    }
    if (this->can_msgs_device != other.can_msgs_device) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvalCanBuffer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvalCanBuffer_Request_

// alias to use template instance with default allocator
using EvalCanBuffer_Request =
  loki_msgs::srv::EvalCanBuffer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


// Include directives for member types
// Member 'can_msgs_base'
// Member 'can_msgs_device'
// already included above
// #include "loki_msgs/msg/detail/can_frame__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__EvalCanBuffer_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__EvalCanBuffer_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EvalCanBuffer_Response_
{
  using Type = EvalCanBuffer_Response_<ContainerAllocator>;

  explicit EvalCanBuffer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EvalCanBuffer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _can_msgs_base_type =
    std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>>;
  _can_msgs_base_type can_msgs_base;
  using _can_msgs_device_type =
    std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>>;
  _can_msgs_device_type can_msgs_device;

  // setters for named parameter idiom
  Type & set__can_msgs_base(
    const std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>> & _arg)
  {
    this->can_msgs_base = _arg;
    return *this;
  }
  Type & set__can_msgs_device(
    const std::vector<loki_msgs::msg::CANFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::CANFrame_<ContainerAllocator>>> & _arg)
  {
    this->can_msgs_device = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__EvalCanBuffer_Response
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__EvalCanBuffer_Response
    std::shared_ptr<loki_msgs::srv::EvalCanBuffer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EvalCanBuffer_Response_ & other) const
  {
    if (this->can_msgs_base != other.can_msgs_base) {
      return false;
    }
    if (this->can_msgs_device != other.can_msgs_device) {
      return false;
    }
    return true;
  }
  bool operator!=(const EvalCanBuffer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EvalCanBuffer_Response_

// alias to use template instance with default allocator
using EvalCanBuffer_Response =
  loki_msgs::srv::EvalCanBuffer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct EvalCanBuffer
{
  using Request = loki_msgs::srv::EvalCanBuffer_Request;
  using Response = loki_msgs::srv::EvalCanBuffer_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__EVAL_CAN_BUFFER__STRUCT_HPP_
