// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/MotCot.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__MOT_COT__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__MOT_COT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__MotCot_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__MotCot_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotCot_Request_
{
  using Type = MotCot_Request_<ContainerAllocator>;

  explicit MotCot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0l;
      this->setup_id = 0l;
      this->setup_value = 0l;
    }
  }

  explicit MotCot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0l;
      this->setup_id = 0l;
      this->setup_value = 0l;
    }
  }

  // field types and members
  using _can_id_type =
    int32_t;
  _can_id_type can_id;
  using _setup_id_type =
    int32_t;
  _setup_id_type setup_id;
  using _setup_value_type =
    int32_t;
  _setup_value_type setup_value;

  // setters for named parameter idiom
  Type & set__can_id(
    const int32_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__setup_id(
    const int32_t & _arg)
  {
    this->setup_id = _arg;
    return *this;
  }
  Type & set__setup_value(
    const int32_t & _arg)
  {
    this->setup_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::MotCot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::MotCot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::MotCot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::MotCot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__MotCot_Request
    std::shared_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__MotCot_Request
    std::shared_ptr<loki_msgs::srv::MotCot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotCot_Request_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->setup_id != other.setup_id) {
      return false;
    }
    if (this->setup_value != other.setup_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotCot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotCot_Request_

// alias to use template instance with default allocator
using MotCot_Request =
  loki_msgs::srv::MotCot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__MotCot_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__MotCot_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotCot_Response_
{
  using Type = MotCot_Response_<ContainerAllocator>;

  explicit MotCot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setup = false;
    }
  }

  explicit MotCot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setup = false;
    }
  }

  // field types and members
  using _setup_type =
    bool;
  _setup_type setup;

  // setters for named parameter idiom
  Type & set__setup(
    const bool & _arg)
  {
    this->setup = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::MotCot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::MotCot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::MotCot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::MotCot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__MotCot_Response
    std::shared_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__MotCot_Response
    std::shared_ptr<loki_msgs::srv::MotCot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotCot_Response_ & other) const
  {
    if (this->setup != other.setup) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotCot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotCot_Response_

// alias to use template instance with default allocator
using MotCot_Response =
  loki_msgs::srv::MotCot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct MotCot
{
  using Request = loki_msgs::srv::MotCot_Request;
  using Response = loki_msgs::srv::MotCot_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__MOT_COT__STRUCT_HPP_
