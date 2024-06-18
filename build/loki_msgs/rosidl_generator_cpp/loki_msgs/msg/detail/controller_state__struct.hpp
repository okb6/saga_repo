// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ControllerState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status_flags'
#include "loki_msgs/msg/detail/controller_status_flag__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__ControllerState __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ControllerState __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerState_
{
  using Type = ControllerState_<ContainerAllocator>;

  explicit ControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_mode = 0;
      this->battery_volts = 0.0f;
      this->battery_amps = 0.0f;
    }
  }

  explicit ControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->controller_mode = 0;
      this->battery_volts = 0.0f;
      this->battery_amps = 0.0f;
    }
  }

  // field types and members
  using _controller_mode_type =
    int8_t;
  _controller_mode_type controller_mode;
  using _battery_volts_type =
    float;
  _battery_volts_type battery_volts;
  using _battery_amps_type =
    float;
  _battery_amps_type battery_amps;
  using _temps_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _temps_type temps;
  using _status_flags_type =
    std::vector<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>>;
  _status_flags_type status_flags;

  // setters for named parameter idiom
  Type & set__controller_mode(
    const int8_t & _arg)
  {
    this->controller_mode = _arg;
    return *this;
  }
  Type & set__battery_volts(
    const float & _arg)
  {
    this->battery_volts = _arg;
    return *this;
  }
  Type & set__battery_amps(
    const float & _arg)
  {
    this->battery_amps = _arg;
    return *this;
  }
  Type & set__temps(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->temps = _arg;
    return *this;
  }
  Type & set__status_flags(
    const std::vector<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>> & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ControllerState
    std::shared_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ControllerState
    std::shared_ptr<loki_msgs::msg::ControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerState_ & other) const
  {
    if (this->controller_mode != other.controller_mode) {
      return false;
    }
    if (this->battery_volts != other.battery_volts) {
      return false;
    }
    if (this->battery_amps != other.battery_amps) {
      return false;
    }
    if (this->temps != other.temps) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerState_

// alias to use template instance with default allocator
using ControllerState =
  loki_msgs::msg::ControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATE__STRUCT_HPP_
