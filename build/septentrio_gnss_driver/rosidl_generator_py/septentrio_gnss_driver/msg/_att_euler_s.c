// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/AttEuler.idl
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
#include "septentrio_gnss_driver/msg/detail/att_euler__struct.h"
#include "septentrio_gnss_driver/msg/detail/att_euler__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__att_euler__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("septentrio_gnss_driver.msg._att_euler.AttEuler", full_classname_dest, 46) == 0);
  }
  septentrio_gnss_driver__msg__AttEuler * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // block_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "block_header");
    if (!field) {
      return false;
    }
    if (!septentrio_gnss_driver__msg__block_header__convert_from_py(field, &ros_message->block_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nr_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_sv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__att_euler__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AttEuler */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._att_euler");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AttEuler");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__AttEuler * ros_message = (septentrio_gnss_driver__msg__AttEuler *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block_header
    PyObject * field = NULL;
    field = septentrio_gnss_driver__msg__block_header__convert_to_py(&ros_message->block_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "block_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nr_sv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nr_sv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr_sv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
