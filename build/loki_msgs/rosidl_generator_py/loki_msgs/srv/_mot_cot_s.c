// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from loki_msgs:srv/MotCot.idl
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
#include "loki_msgs/srv/detail/mot_cot__struct.h"
#include "loki_msgs/srv/detail/mot_cot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__srv__mot_cot__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("loki_msgs.srv._mot_cot.MotCot_Request", full_classname_dest, 37) == 0);
  }
  loki_msgs__srv__MotCot_Request * ros_message = _ros_message;
  {  // can_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // setup_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "setup_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->setup_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // setup_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "setup_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->setup_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * loki_msgs__srv__mot_cot__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotCot_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.srv._mot_cot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotCot_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__srv__MotCot_Request * ros_message = (loki_msgs__srv__MotCot_Request *)raw_ros_message;
  {  // can_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setup_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->setup_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "setup_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setup_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->setup_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "setup_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "loki_msgs/srv/detail/mot_cot__struct.h"
// already included above
// #include "loki_msgs/srv/detail/mot_cot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool loki_msgs__srv__mot_cot__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("loki_msgs.srv._mot_cot.MotCot_Response", full_classname_dest, 38) == 0);
  }
  loki_msgs__srv__MotCot_Response * ros_message = _ros_message;
  {  // setup
    PyObject * field = PyObject_GetAttrString(_pymsg, "setup");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->setup = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * loki_msgs__srv__mot_cot__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotCot_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("loki_msgs.srv._mot_cot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotCot_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  loki_msgs__srv__MotCot_Response * ros_message = (loki_msgs__srv__MotCot_Response *)raw_ros_message;
  {  // setup
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->setup ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "setup", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
