// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/EnclosureState.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__EnclosureState __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__EnclosureState __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnclosureState_
{
  using Type = EnclosureState_<ContainerAllocator>;

  explicit EnclosureState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->communication_state = 0;
      this->esd_ok = false;
      this->contactors_on = false;
      this->motor_power_control_on = false;
      this->rl3_on = false;
      this->rl5_on = false;
    }
  }

  explicit EnclosureState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->communication_state = 0;
      this->esd_ok = false;
      this->contactors_on = false;
      this->motor_power_control_on = false;
      this->rl3_on = false;
      this->rl5_on = false;
    }
  }

  // field types and members
  using _communication_state_type =
    int16_t;
  _communication_state_type communication_state;
  using _esd_ok_type =
    bool;
  _esd_ok_type esd_ok;
  using _contactors_on_type =
    bool;
  _contactors_on_type contactors_on;
  using _motor_power_control_on_type =
    bool;
  _motor_power_control_on_type motor_power_control_on;
  using _rl3_on_type =
    bool;
  _rl3_on_type rl3_on;
  using _rl5_on_type =
    bool;
  _rl5_on_type rl5_on;
  using _digital_pin_numbers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _digital_pin_numbers_type digital_pin_numbers;
  using _digital_pin_values_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _digital_pin_values_type digital_pin_values;
  using _analog_pin_numbers_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _analog_pin_numbers_type analog_pin_numbers;
  using _analog_pin_values_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _analog_pin_values_type analog_pin_values;

  // setters for named parameter idiom
  Type & set__communication_state(
    const int16_t & _arg)
  {
    this->communication_state = _arg;
    return *this;
  }
  Type & set__esd_ok(
    const bool & _arg)
  {
    this->esd_ok = _arg;
    return *this;
  }
  Type & set__contactors_on(
    const bool & _arg)
  {
    this->contactors_on = _arg;
    return *this;
  }
  Type & set__motor_power_control_on(
    const bool & _arg)
  {
    this->motor_power_control_on = _arg;
    return *this;
  }
  Type & set__rl3_on(
    const bool & _arg)
  {
    this->rl3_on = _arg;
    return *this;
  }
  Type & set__rl5_on(
    const bool & _arg)
  {
    this->rl5_on = _arg;
    return *this;
  }
  Type & set__digital_pin_numbers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->digital_pin_numbers = _arg;
    return *this;
  }
  Type & set__digital_pin_values(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->digital_pin_values = _arg;
    return *this;
  }
  Type & set__analog_pin_numbers(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->analog_pin_numbers = _arg;
    return *this;
  }
  Type & set__analog_pin_values(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->analog_pin_values = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t WAS_NEVER_ONLINE =
    -3;
  static constexpr int16_t LAST_WAS_UNKNOWN =
    -2;
  static constexpr int16_t LAST_WAS_ERROR =
    -1;
  static constexpr int16_t WAS_ONLINE =
    0;
  static constexpr int16_t IS_ONLINE =
    1;

  // pointer types
  using RawPtr =
    loki_msgs::msg::EnclosureState_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::EnclosureState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::EnclosureState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::EnclosureState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__EnclosureState
    std::shared_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__EnclosureState
    std::shared_ptr<loki_msgs::msg::EnclosureState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnclosureState_ & other) const
  {
    if (this->communication_state != other.communication_state) {
      return false;
    }
    if (this->esd_ok != other.esd_ok) {
      return false;
    }
    if (this->contactors_on != other.contactors_on) {
      return false;
    }
    if (this->motor_power_control_on != other.motor_power_control_on) {
      return false;
    }
    if (this->rl3_on != other.rl3_on) {
      return false;
    }
    if (this->rl5_on != other.rl5_on) {
      return false;
    }
    if (this->digital_pin_numbers != other.digital_pin_numbers) {
      return false;
    }
    if (this->digital_pin_values != other.digital_pin_values) {
      return false;
    }
    if (this->analog_pin_numbers != other.analog_pin_numbers) {
      return false;
    }
    if (this->analog_pin_values != other.analog_pin_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnclosureState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnclosureState_

// alias to use template instance with default allocator
using EnclosureState =
  loki_msgs::msg::EnclosureState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EnclosureState_<ContainerAllocator>::WAS_NEVER_ONLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EnclosureState_<ContainerAllocator>::LAST_WAS_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EnclosureState_<ContainerAllocator>::LAST_WAS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EnclosureState_<ContainerAllocator>::WAS_ONLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EnclosureState_<ContainerAllocator>::IS_ONLINE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__ENCLOSURE_STATE__STRUCT_HPP_
