// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from loki_msgs:msg/ControllerData.idl
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
#include "loki_msgs/msg/detail/controller_data__struct.h"
#include "loki_msgs/msg/detail/controller_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "loki_msgs/msg/detail/motor_state__functions.h"
// end nested array functions include
bool loki_msgs__msg__controller_config__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * loki_msgs__msg__controller_config__convert_to_py(void * raw_ros_message);
bool loki_msgs__msg__controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * loki_msgs__msg__controller_state__convert_to_py(void * raw_ros_message);
bool loki_msgs__msg__motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * loki_msgs__msg__motor_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__msg__controller_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("loki_msgs.msg._controller_data.ControllerData", full_classname_dest, 45) == 0);
  }
  loki_msgs__msg__ControllerData * ros_message = _ros_message;
  {  // controller_config
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_config");
    if (!field) {
      return false;
    }
    if (!loki_msgs__msg__controller_config__convert_from_py(field, &ros_message->controller_config)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // controller_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_state");
    if (!field) {
      return false;
    }
    if (!loki_msgs__msg__controller_state__convert_from_py(field, &ros_message->controller_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // motor_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_state");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'motor_state'");
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
    if (!loki_msgs__msg__MotorState__Sequence__init(&(ros_message->motor_state), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create loki_msgs__msg__MotorState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    loki_msgs__msg__MotorState * dest = ros_message->motor_state.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!loki_msgs__msg__motor_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * loki_msgs__msg__controller_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControllerData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.msg._controller_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControllerData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__msg__ControllerData * ros_message = (loki_msgs__msg__ControllerData *)raw_ros_message;
  {  // controller_config
    PyObject * field = NULL;
    field = loki_msgs__msg__controller_config__convert_to_py(&ros_message->controller_config);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_config", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_state
    PyObject * field = NULL;
    field = loki_msgs__msg__controller_state__convert_to_py(&ros_message->controller_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_state
    PyObject * field = NULL;
    size_t size = ros_message->motor_state.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    loki_msgs__msg__MotorState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->motor_state.data[i]);
      PyObject * pyitem = loki_msgs__msg__motor_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
