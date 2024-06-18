// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__msg__BatteryAlarms __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__msg__BatteryAlarms __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryAlarms_
{
  using Type = BatteryAlarms_<ContainerAllocator>;

  explicit BatteryAlarms_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->over_voltage_protection = false;
      this->under_voltage_protection = false;
      this->over_temperature_protection = false;
      this->under_temperature_protection = false;
      this->over_charge_current = false;
      this->over_discharge_current = false;
      this->can_communication_fail = false;
      this->cell_voltage_sensing_fault = false;
      this->bms_fail = false;
      this->short_circuit_discharge = false;
      this->temperature_sensing_fault = false;
      this->over_voltage_fault = false;
      this->under_voltage_fault = false;
      this->pack_voltage_sensing_fault = false;
    }
  }

  explicit BatteryAlarms_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->over_voltage_protection = false;
      this->under_voltage_protection = false;
      this->over_temperature_protection = false;
      this->under_temperature_protection = false;
      this->over_charge_current = false;
      this->over_discharge_current = false;
      this->can_communication_fail = false;
      this->cell_voltage_sensing_fault = false;
      this->bms_fail = false;
      this->short_circuit_discharge = false;
      this->temperature_sensing_fault = false;
      this->over_voltage_fault = false;
      this->under_voltage_fault = false;
      this->pack_voltage_sensing_fault = false;
    }
  }

  // field types and members
  using _over_voltage_protection_type =
    bool;
  _over_voltage_protection_type over_voltage_protection;
  using _under_voltage_protection_type =
    bool;
  _under_voltage_protection_type under_voltage_protection;
  using _over_temperature_protection_type =
    bool;
  _over_temperature_protection_type over_temperature_protection;
  using _under_temperature_protection_type =
    bool;
  _under_temperature_protection_type under_temperature_protection;
  using _over_charge_current_type =
    bool;
  _over_charge_current_type over_charge_current;
  using _over_discharge_current_type =
    bool;
  _over_discharge_current_type over_discharge_current;
  using _can_communication_fail_type =
    bool;
  _can_communication_fail_type can_communication_fail;
  using _cell_voltage_sensing_fault_type =
    bool;
  _cell_voltage_sensing_fault_type cell_voltage_sensing_fault;
  using _bms_fail_type =
    bool;
  _bms_fail_type bms_fail;
  using _short_circuit_discharge_type =
    bool;
  _short_circuit_discharge_type short_circuit_discharge;
  using _temperature_sensing_fault_type =
    bool;
  _temperature_sensing_fault_type temperature_sensing_fault;
  using _over_voltage_fault_type =
    bool;
  _over_voltage_fault_type over_voltage_fault;
  using _under_voltage_fault_type =
    bool;
  _under_voltage_fault_type under_voltage_fault;
  using _pack_voltage_sensing_fault_type =
    bool;
  _pack_voltage_sensing_fault_type pack_voltage_sensing_fault;

  // setters for named parameter idiom
  Type & set__over_voltage_protection(
    const bool & _arg)
  {
    this->over_voltage_protection = _arg;
    return *this;
  }
  Type & set__under_voltage_protection(
    const bool & _arg)
  {
    this->under_voltage_protection = _arg;
    return *this;
  }
  Type & set__over_temperature_protection(
    const bool & _arg)
  {
    this->over_temperature_protection = _arg;
    return *this;
  }
  Type & set__under_temperature_protection(
    const bool & _arg)
  {
    this->under_temperature_protection = _arg;
    return *this;
  }
  Type & set__over_charge_current(
    const bool & _arg)
  {
    this->over_charge_current = _arg;
    return *this;
  }
  Type & set__over_discharge_current(
    const bool & _arg)
  {
    this->over_discharge_current = _arg;
    return *this;
  }
  Type & set__can_communication_fail(
    const bool & _arg)
  {
    this->can_communication_fail = _arg;
    return *this;
  }
  Type & set__cell_voltage_sensing_fault(
    const bool & _arg)
  {
    this->cell_voltage_sensing_fault = _arg;
    return *this;
  }
  Type & set__bms_fail(
    const bool & _arg)
  {
    this->bms_fail = _arg;
    return *this;
  }
  Type & set__short_circuit_discharge(
    const bool & _arg)
  {
    this->short_circuit_discharge = _arg;
    return *this;
  }
  Type & set__temperature_sensing_fault(
    const bool & _arg)
  {
    this->temperature_sensing_fault = _arg;
    return *this;
  }
  Type & set__over_voltage_fault(
    const bool & _arg)
  {
    this->over_voltage_fault = _arg;
    return *this;
  }
  Type & set__under_voltage_fault(
    const bool & _arg)
  {
    this->under_voltage_fault = _arg;
    return *this;
  }
  Type & set__pack_voltage_sensing_fault(
    const bool & _arg)
  {
    this->pack_voltage_sensing_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::msg::BatteryAlarms_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::msg::BatteryAlarms_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BatteryAlarms_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::msg::BatteryAlarms_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__msg__BatteryAlarms
    std::shared_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__msg__BatteryAlarms
    std::shared_ptr<loki_msgs::msg::BatteryAlarms_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryAlarms_ & other) const
  {
    if (this->over_voltage_protection != other.over_voltage_protection) {
      return false;
    }
    if (this->under_voltage_protection != other.under_voltage_protection) {
      return false;
    }
    if (this->over_temperature_protection != other.over_temperature_protection) {
      return false;
    }
    if (this->under_temperature_protection != other.under_temperature_protection) {
      return false;
    }
    if (this->over_charge_current != other.over_charge_current) {
      return false;
    }
    if (this->over_discharge_current != other.over_discharge_current) {
      return false;
    }
    if (this->can_communication_fail != other.can_communication_fail) {
      return false;
    }
    if (this->cell_voltage_sensing_fault != other.cell_voltage_sensing_fault) {
      return false;
    }
    if (this->bms_fail != other.bms_fail) {
      return false;
    }
    if (this->short_circuit_discharge != other.short_circuit_discharge) {
      return false;
    }
    if (this->temperature_sensing_fault != other.temperature_sensing_fault) {
      return false;
    }
    if (this->over_voltage_fault != other.over_voltage_fault) {
      return false;
    }
    if (this->under_voltage_fault != other.under_voltage_fault) {
      return false;
    }
    if (this->pack_voltage_sensing_fault != other.pack_voltage_sensing_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryAlarms_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryAlarms_

// alias to use template instance with default allocator
using BatteryAlarms =
  loki_msgs::msg::BatteryAlarms_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__STRUCT_HPP_
