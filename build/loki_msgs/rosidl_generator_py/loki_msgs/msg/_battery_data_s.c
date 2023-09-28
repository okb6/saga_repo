// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from loki_msgs:msg/BatteryData.idl
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
#include "loki_msgs/msg/detail/battery_data__struct.h"
#include "loki_msgs/msg/detail/battery_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool loki_msgs__msg__battery_alarms__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * loki_msgs__msg__battery_alarms__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__msg__battery_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("loki_msgs.msg._battery_data.BatteryData", full_classname_dest, 39) == 0);
  }
  loki_msgs__msg__BatteryData * ros_message = _ros_message;
  {  // battery_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_id = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_state = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temperatures
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperatures");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->temperatures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->temperatures.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'temperatures'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->temperatures), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->temperatures.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // battery_alarms
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_alarms");
    if (!field) {
      return false;
    }
    if (!loki_msgs__msg__battery_alarms__convert_from_py(field, &ros_message->battery_alarms)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // charge_fet_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_fet_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charge_fet_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // discharge_fet_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharge_fet_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->discharge_fet_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state_of_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_of_charge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_of_charge = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // state_of_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_of_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_of_health = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_count = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_capacity = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * loki_msgs__msg__battery_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BatteryData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.msg._battery_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__msg__BatteryData * ros_message = (loki_msgs__msg__BatteryData *)raw_ros_message;
  {  // battery_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperatures
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "temperatures");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->temperatures.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->temperatures.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->temperatures.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // battery_alarms
    PyObject * field = NULL;
    field = loki_msgs__msg__battery_alarms__convert_to_py(&ros_message->battery_alarms);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_alarms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_fet_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charge_fet_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_fet_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharge_fet_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->discharge_fet_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharge_fet_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_of_charge
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state_of_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_of_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_of_health
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state_of_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_of_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->battery_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
