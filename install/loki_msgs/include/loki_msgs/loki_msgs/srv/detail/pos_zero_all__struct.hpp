// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/PosZeroAll.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__PosZeroAll_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__PosZeroAll_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PosZeroAll_Request_
{
  using Type = PosZeroAll_Request_<ContainerAllocator>;

  explicit PosZeroAll_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zeroall = false;
    }
  }

  explicit PosZeroAll_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zeroall = false;
    }
  }

  // field types and members
  using _zeroall_type =
    bool;
  _zeroall_type zeroall;

  // setters for named parameter idiom
  Type & set__zeroall(
    const bool & _arg)
  {
    this->zeroall = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__PosZeroAll_Request
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__PosZeroAll_Request
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosZeroAll_Request_ & other) const
  {
    if (this->zeroall != other.zeroall) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosZeroAll_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosZeroAll_Request_

// alias to use template instance with default allocator
using PosZeroAll_Request =
  loki_msgs::srv::PosZeroAll_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__PosZeroAll_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__PosZeroAll_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PosZeroAll_Response_
{
  using Type = PosZeroAll_Response_<ContainerAllocator>;

  explicit PosZeroAll_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PosZeroAll_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__PosZeroAll_Response
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__PosZeroAll_Response
    std::shared_ptr<loki_msgs::srv::PosZeroAll_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosZeroAll_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosZeroAll_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosZeroAll_Response_

// alias to use template instance with default allocator
using PosZeroAll_Response =
  loki_msgs::srv::PosZeroAll_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct PosZeroAll
{
  using Request = loki_msgs::srv::PosZeroAll_Request;
  using Response = loki_msgs::srv::PosZeroAll_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__POS_ZERO_ALL__STRUCT_HPP_
