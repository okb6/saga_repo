// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/DriveParams.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "loki_msgs/msg/detail/drive_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__DriveParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__DriveParams_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DriveParams_Request_
{
  using Type = DriveParams_Request_<ContainerAllocator>;

  explicit DriveParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0l;
    }
  }

  explicit DriveParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0l;
    }
  }

  // field types and members
  using _params_type =
    std::vector<loki_msgs::msg::DriveParam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::DriveParam_<ContainerAllocator>>>;
  _params_type params;
  using _can_id_type =
    int32_t;
  _can_id_type can_id;

  // setters for named parameter idiom
  Type & set__params(
    const std::vector<loki_msgs::msg::DriveParam_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<loki_msgs::msg::DriveParam_<ContainerAllocator>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__can_id(
    const int32_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::DriveParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::DriveParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DriveParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DriveParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__DriveParams_Request
    std::shared_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__DriveParams_Request
    std::shared_ptr<loki_msgs::srv::DriveParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveParams_Request_ & other) const
  {
    if (this->params != other.params) {
      return false;
    }
    if (this->can_id != other.can_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveParams_Request_

// alias to use template instance with default allocator
using DriveParams_Request =
  loki_msgs::srv::DriveParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__DriveParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__DriveParams_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DriveParams_Response_
{
  using Type = DriveParams_Response_<ContainerAllocator>;

  explicit DriveParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->status = 0l;
    }
  }

  explicit DriveParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    loki_msgs::srv::DriveParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::DriveParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DriveParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DriveParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__DriveParams_Response
    std::shared_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__DriveParams_Response
    std::shared_ptr<loki_msgs::srv::DriveParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveParams_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveParams_Response_

// alias to use template instance with default allocator
using DriveParams_Response =
  loki_msgs::srv::DriveParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct DriveParams
{
  using Request = loki_msgs::srv::DriveParams_Request;
  using Response = loki_msgs::srv::DriveParams_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__DRIVE_PARAMS__STRUCT_HPP_
