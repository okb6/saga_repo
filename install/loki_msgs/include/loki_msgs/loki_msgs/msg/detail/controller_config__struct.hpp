// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/ControllerConfig.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__ControllerConfig __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__ControllerConfig __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerConfig_
{
  using Type = ControllerConfig_<ContainerAllocator>;

  explicit ControllerConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->version = "";
      this->can_id = 0;
      this->drive_direction = 0;
      this->home_speed = 0;
      this->home_count = 0l;
    }
  }

  explicit ControllerConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc),
    version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = "";
      this->version = "";
      this->can_id = 0;
      this->drive_direction = 0;
      this->home_speed = 0;
      this->home_count = 0l;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_type version;
  using _can_id_type =
    int16_t;
  _can_id_type can_id;
  using _drive_direction_type =
    int8_t;
  _drive_direction_type drive_direction;
  using _home_speed_type =
    int16_t;
  _home_speed_type home_speed;
  using _home_count_type =
    int32_t;
  _home_count_type home_count;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__can_id(
    const int16_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__drive_direction(
    const int8_t & _arg)
  {
    this->drive_direction = _arg;
    return *this;
  }
  Type & set__home_speed(
    const int16_t & _arg)
  {
    this->home_speed = _arg;
    return *this;
  }
  Type & set__home_count(
    const int32_t & _arg)
  {
    this->home_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::ControllerConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::ControllerConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::ControllerConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__ControllerConfig
    std::shared_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__ControllerConfig
    std::shared_ptr<loki_msgs::msg::ControllerConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerConfig_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->drive_direction != other.drive_direction) {
      return false;
    }
    if (this->home_speed != other.home_speed) {
      return false;
    }
    if (this->home_count != other.home_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerConfig_

// alias to use template instance with default allocator
using ControllerConfig =
  loki_msgs::msg::ControllerConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__CONTROLLER_CONFIG__STRUCT_HPP_
