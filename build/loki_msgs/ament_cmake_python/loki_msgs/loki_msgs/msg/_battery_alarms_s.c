// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from loki_msgs:msg/BatteryAlarms.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "loki_msgs/msg/detail/battery_alarms__struct.h"
#include "loki_msgs/msg/detail/battery_alarms__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__msg__battery_alarms__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("loki_msgs.msg._battery_alarms.BatteryAlarms", full_classname_dest, 43) == 0);
  }
  loki_msgs__msg__BatteryAlarms * ros_message = _ros_message;
  {  // over_voltage_protection
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_voltage_protection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_voltage_protection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // under_voltage_protection
    PyObject * field = PyObject_GetAttrString(_pymsg, "under_voltage_protection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->under_voltage_protection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // over_temperature_protection
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_temperature_protection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_temperature_protection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // under_temperature_protection
    PyObject * field = PyObject_GetAttrString(_pymsg, "under_temperature_protection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->under_temperature_protection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // over_charge_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_charge_current");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_charge_current = (Py_True == field);
    Py_DECREF(field);
  }
  {  // over_discharge_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_discharge_current");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_discharge_current = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_communication_fail
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_communication_fail");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_communication_fail = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cell_voltage_sensing_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_voltage_sensing_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cell_voltage_sensing_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bms_fail
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_fail");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bms_fail = (Py_True == field);
    Py_DECREF(field);
  }
  {  // short_circuit_discharge
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_circuit_discharge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->short_circuit_discharge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature_sensing_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_sensing_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->temperature_sensing_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // over_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->over_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // under_voltage_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "under_voltage_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->under_voltage_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pack_voltage_sensing_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "pack_voltage_sensing_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pack_voltage_sensing_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * loki_msgs__msg__battery_alarms__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BatteryAlarms */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.msg._battery_alarms");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryAlarms");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__msg__BatteryAlarms * ros_message = (loki_msgs__msg__BatteryAlarms *)raw_ros_message;
  {  // over_voltage_protection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_voltage_protection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_voltage_protection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // under_voltage_protection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->under_voltage_protection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "under_voltage_protection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_temperature_protection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_temperature_protection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_temperature_protection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // under_temperature_protection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->under_temperature_protection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "under_temperature_protection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_charge_current
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_charge_current ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_charge_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_discharge_current
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_discharge_current ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_discharge_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_communication_fail
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_communication_fail ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_communication_fail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_voltage_sensing_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cell_voltage_sensing_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_voltage_sensing_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_fail
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bms_fail ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_fail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_circuit_discharge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->short_circuit_discharge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_circuit_discharge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_sensing_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->temperature_sensing_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_sensing_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->over_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // under_voltage_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->under_voltage_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "under_voltage_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pack_voltage_sensing_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pack_voltage_sensing_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pack_voltage_sensing_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
