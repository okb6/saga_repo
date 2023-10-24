// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__BUILDER_HPP_
#define LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "loki_msgs/msg/detail/battery_alarms__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace loki_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryAlarms_pack_voltage_sensing_fault
{
public:
  explicit Init_BatteryAlarms_pack_voltage_sensing_fault(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  ::loki_msgs::msg::BatteryAlarms pack_voltage_sensing_fault(::loki_msgs::msg::BatteryAlarms::_pack_voltage_sensing_fault_type arg)
  {
    msg_.pack_voltage_sensing_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_under_voltage_fault
{
public:
  explicit Init_BatteryAlarms_under_voltage_fault(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_pack_voltage_sensing_fault under_voltage_fault(::loki_msgs::msg::BatteryAlarms::_under_voltage_fault_type arg)
  {
    msg_.under_voltage_fault = std::move(arg);
    return Init_BatteryAlarms_pack_voltage_sensing_fault(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_over_voltage_fault
{
public:
  explicit Init_BatteryAlarms_over_voltage_fault(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_under_voltage_fault over_voltage_fault(::loki_msgs::msg::BatteryAlarms::_over_voltage_fault_type arg)
  {
    msg_.over_voltage_fault = std::move(arg);
    return Init_BatteryAlarms_under_voltage_fault(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_temperature_sensing_fault
{
public:
  explicit Init_BatteryAlarms_temperature_sensing_fault(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_over_voltage_fault temperature_sensing_fault(::loki_msgs::msg::BatteryAlarms::_temperature_sensing_fault_type arg)
  {
    msg_.temperature_sensing_fault = std::move(arg);
    return Init_BatteryAlarms_over_voltage_fault(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_short_circuit_discharge
{
public:
  explicit Init_BatteryAlarms_short_circuit_discharge(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_temperature_sensing_fault short_circuit_discharge(::loki_msgs::msg::BatteryAlarms::_short_circuit_discharge_type arg)
  {
    msg_.short_circuit_discharge = std::move(arg);
    return Init_BatteryAlarms_temperature_sensing_fault(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_bms_fail
{
public:
  explicit Init_BatteryAlarms_bms_fail(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_short_circuit_discharge bms_fail(::loki_msgs::msg::BatteryAlarms::_bms_fail_type arg)
  {
    msg_.bms_fail = std::move(arg);
    return Init_BatteryAlarms_short_circuit_discharge(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_cell_voltage_sensing_fault
{
public:
  explicit Init_BatteryAlarms_cell_voltage_sensing_fault(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_bms_fail cell_voltage_sensing_fault(::loki_msgs::msg::BatteryAlarms::_cell_voltage_sensing_fault_type arg)
  {
    msg_.cell_voltage_sensing_fault = std::move(arg);
    return Init_BatteryAlarms_bms_fail(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_can_communication_fail
{
public:
  explicit Init_BatteryAlarms_can_communication_fail(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_cell_voltage_sensing_fault can_communication_fail(::loki_msgs::msg::BatteryAlarms::_can_communication_fail_type arg)
  {
    msg_.can_communication_fail = std::move(arg);
    return Init_BatteryAlarms_cell_voltage_sensing_fault(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_over_discharge_current
{
public:
  explicit Init_BatteryAlarms_over_discharge_current(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_can_communication_fail over_discharge_current(::loki_msgs::msg::BatteryAlarms::_over_discharge_current_type arg)
  {
    msg_.over_discharge_current = std::move(arg);
    return Init_BatteryAlarms_can_communication_fail(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_over_charge_current
{
public:
  explicit Init_BatteryAlarms_over_charge_current(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_over_discharge_current over_charge_current(::loki_msgs::msg::BatteryAlarms::_over_charge_current_type arg)
  {
    msg_.over_charge_current = std::move(arg);
    return Init_BatteryAlarms_over_discharge_current(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_under_temperature_protection
{
public:
  explicit Init_BatteryAlarms_under_temperature_protection(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_over_charge_current under_temperature_protection(::loki_msgs::msg::BatteryAlarms::_under_temperature_protection_type arg)
  {
    msg_.under_temperature_protection = std::move(arg);
    return Init_BatteryAlarms_over_charge_current(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_over_temperature_protection
{
public:
  explicit Init_BatteryAlarms_over_temperature_protection(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_under_temperature_protection over_temperature_protection(::loki_msgs::msg::BatteryAlarms::_over_temperature_protection_type arg)
  {
    msg_.over_temperature_protection = std::move(arg);
    return Init_BatteryAlarms_under_temperature_protection(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_under_voltage_protection
{
public:
  explicit Init_BatteryAlarms_under_voltage_protection(::loki_msgs::msg::BatteryAlarms & msg)
  : msg_(msg)
  {}
  Init_BatteryAlarms_over_temperature_protection under_voltage_protection(::loki_msgs::msg::BatteryAlarms::_under_voltage_protection_type arg)
  {
    msg_.under_voltage_protection = std::move(arg);
    return Init_BatteryAlarms_over_temperature_protection(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

class Init_BatteryAlarms_over_voltage_protection
{
public:
  Init_BatteryAlarms_over_voltage_protection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryAlarms_under_voltage_protection over_voltage_protection(::loki_msgs::msg::BatteryAlarms::_over_voltage_protection_type arg)
  {
    msg_.over_voltage_protection = std::move(arg);
    return Init_BatteryAlarms_under_voltage_protection(msg_);
  }

private:
  ::loki_msgs::msg::BatteryAlarms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::loki_msgs::msg::BatteryAlarms>()
{
  return loki_msgs::msg::builder::Init_BatteryAlarms_over_voltage_protection();
}

}  // namespace loki_msgs

#endif  // LOKI_MSGS__MSG__DETAIL__BATTERY_ALARMS__BUILDER_HPP_
