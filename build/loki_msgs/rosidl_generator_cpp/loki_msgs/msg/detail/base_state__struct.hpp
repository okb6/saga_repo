// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/BaseState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__BaseState __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__BaseState __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseState_
{
  using Type = BaseState_<ContainerAllocator>;

  explicit BaseState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drive_mode = 0;
    }
  }

  explicit BaseState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drive_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drive_mode_type =
    int16_t;
  _drive_mode_type drive_mode;
  using _prop_speed_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _prop_speed_type prop_speed;
  using _prop_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _prop_pos_type prop_pos;
  using _steer_speed_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_speed_type steer_speed;
  using _steer_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_pos_type steer_pos;
  using _steer_max_speed_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _steer_max_speed_type steer_max_speed;
  using _channel_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _channel_type channel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drive_mode(
    const int16_t & _arg)
  {
    this->drive_mode = _arg;
    return *this;
  }
  Type & set__prop_speed(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->prop_speed = _arg;
    return *this;
  }
  Type & set__prop_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->prop_pos = _arg;
    return *this;
  }
  Type & set__steer_speed(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_speed = _arg;
    return *this;
  }
  Type & set__steer_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_pos = _arg;
    return *this;
  }
  Type & set__steer_max_speed(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->steer_max_speed = _arg;
    return *this;
  }
  Type & set__channel(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->channel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::BaseState_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::BaseState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::BaseState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::BaseState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BaseState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BaseState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BaseState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BaseState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::BaseState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::BaseState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__BaseState
    std::shared_ptr<loki_msgs::msg::BaseState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__BaseState
    std::shared_ptr<loki_msgs::msg::BaseState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drive_mode != other.drive_mode) {
      return false;
    }
    if (this->prop_speed != other.prop_speed) {
      return false;
    }
    if (this->prop_pos != other.prop_pos) {
      return false;
    }
    if (this->steer_speed != other.steer_speed) {
      return false;
    }
    if (this->steer_pos != other.steer_pos) {
      return false;
    }
    if (this->steer_max_speed != other.steer_max_speed) {
      return false;
    }
    if (this->channel != other.channel) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseState_

// alias to use template instance with default allocator
using BaseState =
  loki_msgs::msg::BaseState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BASE_STATE__STRUCT_HPP_
