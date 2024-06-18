// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/BatteryData.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'battery_alarms'
#include "loki_msgs/msg/detail/battery_alarms__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__BatteryData __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__BatteryData __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryData_
{
  using Type = BatteryData_<ContainerAllocator>;

  explicit BatteryData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_alarms(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_id = 0;
      this->battery_state = 0;
      this->charge_fet_on = false;
      this->discharge_fet_on = false;
      this->battery_voltage = 0.0;
      this->battery_current = 0.0;
      this->state_of_charge = 0;
      this->state_of_health = 0;
      this->cycle_count = 0;
      this->battery_capacity = 0;
    }
  }

  explicit BatteryData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_alarms(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_id = 0;
      this->battery_state = 0;
      this->charge_fet_on = false;
      this->discharge_fet_on = false;
      this->battery_voltage = 0.0;
      this->battery_current = 0.0;
      this->state_of_charge = 0;
      this->state_of_health = 0;
      this->cycle_count = 0;
      this->battery_capacity = 0;
    }
  }

  // field types and members
  using _battery_id_type =
    int16_t;
  _battery_id_type battery_id;
  using _battery_state_type =
    int16_t;
  _battery_state_type battery_state;
  using _temperatures_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _temperatures_type temperatures;
  using _battery_alarms_type =
    loki_msgs::msg::BatteryAlarms_<ContainerAllocator>;
  _battery_alarms_type battery_alarms;
  using _charge_fet_on_type =
    bool;
  _charge_fet_on_type charge_fet_on;
  using _discharge_fet_on_type =
    bool;
  _discharge_fet_on_type discharge_fet_on;
  using _battery_voltage_type =
    double;
  _battery_voltage_type battery_voltage;
  using _battery_current_type =
    double;
  _battery_current_type battery_current;
  using _state_of_charge_type =
    int16_t;
  _state_of_charge_type state_of_charge;
  using _state_of_health_type =
    int16_t;
  _state_of_health_type state_of_health;
  using _cycle_count_type =
    int16_t;
  _cycle_count_type cycle_count;
  using _battery_capacity_type =
    int16_t;
  _battery_capacity_type battery_capacity;

  // setters for named parameter idiom
  Type & set__battery_id(
    const int16_t & _arg)
  {
    this->battery_id = _arg;
    return *this;
  }
  Type & set__battery_state(
    const int16_t & _arg)
  {
    this->battery_state = _arg;
    return *this;
  }
  Type & set__temperatures(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }
  Type & set__battery_alarms(
    const loki_msgs::msg::BatteryAlarms_<ContainerAllocator> & _arg)
  {
    this->battery_alarms = _arg;
    return *this;
  }
  Type & set__charge_fet_on(
    const bool & _arg)
  {
    this->charge_fet_on = _arg;
    return *this;
  }
  Type & set__discharge_fet_on(
    const bool & _arg)
  {
    this->discharge_fet_on = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const double & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_current(
    const double & _arg)
  {
    this->battery_current = _arg;
    return *this;
  }
  Type & set__state_of_charge(
    const int16_t & _arg)
  {
    this->state_of_charge = _arg;
    return *this;
  }
  Type & set__state_of_health(
    const int16_t & _arg)
  {
    this->state_of_health = _arg;
    return *this;
  }
  Type & set__cycle_count(
    const int16_t & _arg)
  {
    this->cycle_count = _arg;
    return *this;
  }
  Type & set__battery_capacity(
    const int16_t & _arg)
  {
    this->battery_capacity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t STATUS_OFFLINE =
    -99;
  static constexpr int16_t STATUS_ONLINE =
    -98;

  // pointer types
  using RawPtr =
    loki_msgs::msg::BatteryData_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::BatteryData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BatteryData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BatteryData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__BatteryData
    std::shared_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__BatteryData
    std::shared_ptr<loki_msgs::msg::BatteryData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryData_ & other) const
  {
    if (this->battery_id != other.battery_id) {
      return false;
    }
    if (this->battery_state != other.battery_state) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    if (this->battery_alarms != other.battery_alarms) {
      return false;
    }
    if (this->charge_fet_on != other.charge_fet_on) {
      return false;
    }
    if (this->discharge_fet_on != other.discharge_fet_on) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_current != other.battery_current) {
      return false;
    }
    if (this->state_of_charge != other.state_of_charge) {
      return false;
    }
    if (this->state_of_health != other.state_of_health) {
      return false;
    }
    if (this->cycle_count != other.cycle_count) {
      return false;
    }
    if (this->battery_capacity != other.battery_capacity) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryData_

// alias to use template instance with default allocator
using BatteryData =
  loki_msgs::msg::BatteryData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t BatteryData_<ContainerAllocator>::STATUS_OFFLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t BatteryData_<ContainerAllocator>::STATUS_ONLINE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_DATA__STRUCT_HPP_
