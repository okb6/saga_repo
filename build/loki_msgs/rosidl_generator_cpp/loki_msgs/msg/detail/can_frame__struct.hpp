// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/CANFrame.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__CANFrame __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__CANFrame __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CANFrame_
{
  using Type = CANFrame_<ContainerAllocator>;

  explicit CANFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->length = 0;
    }
  }

  explicit CANFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->length = 0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _length_type =
    uint8_t;
  _length_type length;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__length(
    const uint8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::CANFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::CANFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::CANFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::CANFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__CANFrame
    std::shared_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__CANFrame
    std::shared_ptr<loki_msgs::msg::CANFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CANFrame_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CANFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CANFrame_

// alias to use template instance with default allocator
using CANFrame =
  loki_msgs::msg::CANFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CAN_FRAME__STRUCT_HPP_
