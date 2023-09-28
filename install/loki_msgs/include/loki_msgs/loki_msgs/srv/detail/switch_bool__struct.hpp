// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/SwitchBool.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__SwitchBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__SwitchBool_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchBool_Request_
{
  using Type = SwitchBool_Request_<ContainerAllocator>;

  explicit SwitchBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on = false;
    }
  }

  explicit SwitchBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on = false;
    }
  }

  // field types and members
  using _on_type =
    bool;
  _on_type on;

  // setters for named parameter idiom
  Type & set__on(
    const bool & _arg)
  {
    this->on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__SwitchBool_Request
    std::shared_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__SwitchBool_Request
    std::shared_ptr<loki_msgs::srv::SwitchBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchBool_Request_ & other) const
  {
    if (this->on != other.on) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchBool_Request_

// alias to use template instance with default allocator
using SwitchBool_Request =
  loki_msgs::srv::SwitchBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__SwitchBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__SwitchBool_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SwitchBool_Response_
{
  using Type = SwitchBool_Response_<ContainerAllocator>;

  explicit SwitchBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->status = 0l;
    }
  }

  explicit SwitchBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->status = 0l;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _status_type =
    int32_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__SwitchBool_Response
    std::shared_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__SwitchBool_Response
    std::shared_ptr<loki_msgs::srv::SwitchBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SwitchBool_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SwitchBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SwitchBool_Response_

// alias to use template instance with default allocator
using SwitchBool_Response =
  loki_msgs::srv::SwitchBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct SwitchBool
{
  using Request = loki_msgs::srv::SwitchBool_Request;
  using Response = loki_msgs::srv::SwitchBool_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__SWITCH_BOOL__STRUCT_HPP_
