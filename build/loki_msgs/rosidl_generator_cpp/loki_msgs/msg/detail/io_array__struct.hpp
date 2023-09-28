// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/IOArray.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__IO_ARRAY__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__IO_ARRAY__STRUCT_HPP_

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
// Member 'io_states'
#include "loki_msgs/msg/detail/io_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__IOArray __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__IOArray __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOArray_
{
  using Type = IOArray_<ContainerAllocator>;

  explicit IOArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit IOArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _io_states_type =
    std::vector<loki_msgs::msg::IOState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::IOState_<ContainerAllocator>>>;
  _io_states_type io_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__io_states(
    const std::vector<loki_msgs::msg::IOState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::IOState_<ContainerAllocator>>> & _arg)
  {
    this->io_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::IOArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::IOArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::IOArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::IOArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::IOArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::IOArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::IOArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::IOArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::IOArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::IOArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__IOArray
    std::shared_ptr<loki_msgs::msg::IOArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__IOArray
    std::shared_ptr<loki_msgs::msg::IOArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->io_states != other.io_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOArray_

// alias to use template instance with default allocator
using IOArray =
  loki_msgs::msg::IOArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__IO_ARRAY__STRUCT_HPP_
