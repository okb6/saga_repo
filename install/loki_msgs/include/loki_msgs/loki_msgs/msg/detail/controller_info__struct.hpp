// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ControllerInfo.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__ControllerInfo __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ControllerInfo __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerInfo_
{
  using Type = ControllerInfo_<ContainerAllocator>;

  explicit ControllerInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControllerInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _drive_directions_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _drive_directions_type drive_directions;
  using _home_counts_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _home_counts_type home_counts;

  // setters for named parameter idiom
  Type & set__drive_directions(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->drive_directions = _arg;
    return *this;
  }
  Type & set__home_counts(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->home_counts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ControllerInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ControllerInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ControllerInfo
    std::shared_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ControllerInfo
    std::shared_ptr<loki_msgs::msg::ControllerInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerInfo_ & other) const
  {
    if (this->drive_directions != other.drive_directions) {
      return false;
    }
    if (this->home_counts != other.home_counts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerInfo_

// alias to use template instance with default allocator
using ControllerInfo =
  loki_msgs::msg::ControllerInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_INFO__STRUCT_HPP_
