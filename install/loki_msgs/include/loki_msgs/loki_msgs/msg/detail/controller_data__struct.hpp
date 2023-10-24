// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'controller_config'
#include "loki_msgs/msg/detail/controller_config__struct.hpp"
// Member 'controller_state'
#include "loki_msgs/msg/detail/controller_state__struct.hpp"
// Member 'motor_state'
#include "loki_msgs/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__ControllerData __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ControllerData __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerData_
{
  using Type = ControllerData_<ContainerAllocator>;

  explicit ControllerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : controller_config(_init),
    controller_state(_init)
  {
    (void)_init;
  }

  explicit ControllerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : controller_config(_alloc, _init),
    controller_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _controller_config_type =
    loki_msgs::msg::ControllerConfig_<ContainerAllocator>;
  _controller_config_type controller_config;
  using _controller_state_type =
    loki_msgs::msg::ControllerState_<ContainerAllocator>;
  _controller_state_type controller_state;
  using _motor_state_type =
    std::vector<loki_msgs::msg::MotorState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::MotorState_<ContainerAllocator>>>;
  _motor_state_type motor_state;

  // setters for named parameter idiom
  Type & set__controller_config(
    const loki_msgs::msg::ControllerConfig_<ContainerAllocator> & _arg)
  {
    this->controller_config = _arg;
    return *this;
  }
  Type & set__controller_state(
    const loki_msgs::msg::ControllerState_<ContainerAllocator> & _arg)
  {
    this->controller_state = _arg;
    return *this;
  }
  Type & set__motor_state(
    const std::vector<loki_msgs::msg::MotorState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::MotorState_<ContainerAllocator>>> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ControllerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ControllerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ControllerData
    std::shared_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ControllerData
    std::shared_ptr<loki_msgs::msg::ControllerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerData_ & other) const
  {
    if (this->controller_config != other.controller_config) {
      return false;
    }
    if (this->controller_state != other.controller_state) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerData_

// alias to use template instance with default allocator
using ControllerData =
  loki_msgs::msg::ControllerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_HPP_
