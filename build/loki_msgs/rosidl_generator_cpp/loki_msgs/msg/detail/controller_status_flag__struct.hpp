// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ControllerStatusFlag.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__ControllerStatusFlag __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ControllerStatusFlag __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerStatusFlag_
{
  using Type = ControllerStatusFlag_<ContainerAllocator>;

  explicit ControllerStatusFlag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_name = "";
      this->status_value = false;
    }
  }

  explicit ControllerStatusFlag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status_name = "";
      this->status_value = false;
    }
  }

  // field types and members
  using _status_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_name_type status_name;
  using _status_value_type =
    bool;
  _status_value_type status_value;

  // setters for named parameter idiom
  Type & set__status_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_name = _arg;
    return *this;
  }
  Type & set__status_value(
    const bool & _arg)
  {
    this->status_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ControllerStatusFlag
    std::shared_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ControllerStatusFlag
    std::shared_ptr<loki_msgs::msg::ControllerStatusFlag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStatusFlag_ & other) const
  {
    if (this->status_name != other.status_name) {
      return false;
    }
    if (this->status_value != other.status_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStatusFlag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStatusFlag_

// alias to use template instance with default allocator
using ControllerStatusFlag =
  loki_msgs::msg::ControllerStatusFlag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_STATUS_FLAG__STRUCT_HPP_
