// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/DriveInverted.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__DriveInverted __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__DriveInverted __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveInverted_
{
  using Type = DriveInverted_<ContainerAllocator>;

  explicit DriveInverted_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drive = false;
    }
  }

  explicit DriveInverted_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drive = false;
    }
  }

  // field types and members
  using _drive_type =
    bool;
  _drive_type drive;

  // setters for named parameter idiom
  Type & set__drive(
    const bool & _arg)
  {
    this->drive = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::DriveInverted_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::DriveInverted_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::DriveInverted_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::DriveInverted_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__DriveInverted
    std::shared_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__DriveInverted
    std::shared_ptr<loki_msgs::msg::DriveInverted_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveInverted_ & other) const
  {
    if (this->drive != other.drive) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveInverted_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveInverted_

// alias to use template instance with default allocator
using DriveInverted =
  loki_msgs::msg::DriveInverted_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_INVERTED__STRUCT_HPP_
