// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/BatteryVars.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__BatteryVars_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__BatteryVars_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryVars_Request_
{
  using Type = BatteryVars_Request_<ContainerAllocator>;

  explicit BatteryVars_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt = 0l;
    }
  }

  explicit BatteryVars_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batt = 0l;
    }
  }

  // field types and members
  using _batt_type =
    int32_t;
  _batt_type batt;

  // setters for named parameter idiom
  Type & set__batt(
    const int32_t & _arg)
  {
    this->batt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__BatteryVars_Request
    std::shared_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__BatteryVars_Request
    std::shared_ptr<loki_msgs::srv::BatteryVars_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryVars_Request_ & other) const
  {
    if (this->batt != other.batt) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryVars_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryVars_Request_

// alias to use template instance with default allocator
using BatteryVars_Request =
  loki_msgs::srv::BatteryVars_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__BatteryVars_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__BatteryVars_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryVars_Response_
{
  using Type = BatteryVars_Response_<ContainerAllocator>;

  explicit BatteryVars_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit BatteryVars_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__BatteryVars_Response
    std::shared_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__BatteryVars_Response
    std::shared_ptr<loki_msgs::srv::BatteryVars_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryVars_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryVars_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryVars_Response_

// alias to use template instance with default allocator
using BatteryVars_Response =
  loki_msgs::srv::BatteryVars_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct BatteryVars
{
  using Request = loki_msgs::srv::BatteryVars_Request;
  using Response = loki_msgs::srv::BatteryVars_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__BATTERY_VARS__STRUCT_HPP_
