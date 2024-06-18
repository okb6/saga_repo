// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/DriveParam.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__DriveParam __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__DriveParam __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveParam_
{
  using Type = DriveParam_<ContainerAllocator>;

  explicit DriveParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->type = "";
      this->value = 0.0;
    }
  }

  explicit DriveParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->type = "";
      this->value = 0.0;
    }
  }

  // field types and members
  using _index_type =
    int32_t;
  _index_type index;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__index(
    const int32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::DriveParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::DriveParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::DriveParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::DriveParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__DriveParam
    std::shared_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__DriveParam
    std::shared_ptr<loki_msgs::msg::DriveParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveParam_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveParam_

// alias to use template instance with default allocator
using DriveParam =
  loki_msgs::msg::DriveParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__DRIVE_PARAM__STRUCT_HPP_
