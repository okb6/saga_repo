// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from loki_msgs:msg/ControllerState.idl
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
#include "loki_msgs/msg/detail/controller_state__struct.h"
#include "loki_msgs/msg/detail/controller_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "loki_msgs/msg/detail/controller_status_flag__functions.h"
// end nested array functions include
bool loki_msgs__msg__controller_status_flag__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * loki_msgs__msg__controller_status_flag__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__msg__controller_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("loki_msgs.msg._controller_state.ControllerState", full_classname_dest, 47) == 0);
  }
  loki_msgs__msg__ControllerState * ros_message = _ros_message;
  {  // controller_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->controller_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // battery_volts
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_volts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_volts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_amps
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_amps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_amps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temps
    PyObject * field = PyObject_GetAttrString(_pymsg, "temps");
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
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->temps), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->temps.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'temps'");
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
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->temps), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->temps.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_flags");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'status_flags'");
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
    if (!loki_msgs__msg__ControllerStatusFlag__Sequence__init(&(ros_message->status_flags), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create loki_msgs__msg__ControllerStatusFlag__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    loki_msgs__msg__ControllerStatusFlag * dest = ros_message->status_flags.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!loki_msgs__msg__controller_status_flag__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * loki_msgs__msg__controller_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControllerState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.msg._controller_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControllerState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__msg__ControllerState * ros_message = (loki_msgs__msg__ControllerState *)raw_ros_message;
  {  // controller_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->controller_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_volts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_volts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_volts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_amps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_amps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_amps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temps
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "temps");
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
    if (itemsize != sizeof(int16_t)) {
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
    if (ros_message->temps.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->temps.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->temps.size * sizeof(int16_t));
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
  {  // status_flags
    PyObject * field = NULL;
    size_t size = ros_message->status_flags.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    loki_msgs__msg__ControllerStatusFlag * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->status_flags.data[i]);
      PyObject * pyitem = loki_msgs__msg__controller_status_flag__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
