// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ThorvaldIO.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_HPP_

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
# define DEPRECATED__loki_msgs__msg__ThorvaldIO __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ThorvaldIO __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThorvaldIO_
{
  using Type = ThorvaldIO_<ContainerAllocator>;

  explicit ThorvaldIO_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ThorvaldIO_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _analogs_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _analogs_type analogs;
  using _digitals_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _digitals_type digitals;
  using _ranges_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _ranges_type ranges;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__analogs(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->analogs = _arg;
    return *this;
  }
  Type & set__digitals(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->digitals = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ThorvaldIO_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ThorvaldIO_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ThorvaldIO_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ThorvaldIO_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ThorvaldIO
    std::shared_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ThorvaldIO
    std::shared_ptr<loki_msgs::msg::ThorvaldIO_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThorvaldIO_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->analogs != other.analogs) {
      return false;
    }
    if (this->digitals != other.digitals) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThorvaldIO_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThorvaldIO_

// alias to use template instance with default allocator
using ThorvaldIO =
  loki_msgs::msg::ThorvaldIO_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__THORVALD_IO__STRUCT_HPP_
