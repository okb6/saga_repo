// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from septentrio_gnss_driver:msg/IMUSetup.idl
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
#include "septentrio_gnss_driver/msg/detail/imu_setup__struct.h"
#include "septentrio_gnss_driver/msg/detail/imu_setup__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool septentrio_gnss_driver__msg__block_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * septentrio_gnss_driver__msg__block_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool septentrio_gnss_driver__msg__imu_setup__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("septentrio_gnss_driver.msg._imu_setup.IMUSetup", full_classname_dest, 46) == 0);
  }
  septentrio_gnss_driver__msg__IMUSetup * ros_message = _ros_message;
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
  {  // serial_port
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_port");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_port = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ant_lever_arm_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_lever_arm_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ant_lever_arm_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ant_lever_arm_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_lever_arm_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ant_lever_arm_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ant_lever_arm_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_lever_arm_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ant_lever_arm_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * septentrio_gnss_driver__msg__imu_setup__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IMUSetup */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("septentrio_gnss_driver.msg._imu_setup");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IMUSetup");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  septentrio_gnss_driver__msg__IMUSetup * ros_message = (septentrio_gnss_driver__msg__IMUSetup *)raw_ros_message;
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
  {  // serial_port
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serial_port);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_port", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_lever_arm_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ant_lever_arm_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_lever_arm_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_lever_arm_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ant_lever_arm_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_lever_arm_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_lever_arm_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ant_lever_arm_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_lever_arm_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
