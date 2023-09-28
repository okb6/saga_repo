// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/SetBools.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__SET_BOOLS__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__SET_BOOLS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__SetBools_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__SetBools_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBools_Request_
{
  using Type = SetBools_Request_<ContainerAllocator>;

  explicit SetBools_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_service_id = 0l;
      this->value = 0l;
      this->success = false;
      this->message = "";
    }
  }

  explicit SetBools_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unique_service_id = 0l;
      this->value = 0l;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _unique_service_id_type =
    int32_t;
  _unique_service_id_type unique_service_id;
  using _value_type =
    int32_t;
  _value_type value;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__unique_service_id(
    const int32_t & _arg)
  {
    this->unique_service_id = _arg;
    return *this;
  }
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::SetBools_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::SetBools_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SetBools_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SetBools_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__SetBools_Request
    std::shared_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__SetBools_Request
    std::shared_ptr<loki_msgs::srv::SetBools_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBools_Request_ & other) const
  {
    if (this->unique_service_id != other.unique_service_id) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBools_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBools_Request_

// alias to use template instance with default allocator
using SetBools_Request =
  loki_msgs::srv::SetBools_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__SetBools_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__SetBools_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBools_Response_
{
  using Type = SetBools_Response_<ContainerAllocator>;

  explicit SetBools_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetBools_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::SetBools_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::SetBools_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SetBools_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::SetBools_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__SetBools_Response
    std::shared_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__SetBools_Response
    std::shared_ptr<loki_msgs::srv::SetBools_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBools_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBools_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBools_Response_

// alias to use template instance with default allocator
using SetBools_Response =
  loki_msgs::srv::SetBools_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct SetBools
{
  using Request = loki_msgs::srv::SetBools_Request;
  using Response = loki_msgs::srv::SetBools_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__SET_BOOLS__STRUCT_HPP_
