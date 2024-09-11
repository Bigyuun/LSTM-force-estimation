// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_interfaces:srv/MoveMotorDirect.idl
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
#include "custom_interfaces/srv/detail/move_motor_direct__struct.h"
#include "custom_interfaces/srv/detail/move_motor_direct__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__move_motor_direct__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("custom_interfaces.srv._move_motor_direct.MoveMotorDirect_Request", full_classname_dest, 64) == 0);
  }
  custom_interfaces__srv__MoveMotorDirect_Request * ros_message = _ros_message;
  {  // index_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "index_motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index_motor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_velocity_profile
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_velocity_profile");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_velocity_profile = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__move_motor_direct__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveMotorDirect_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._move_motor_direct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveMotorDirect_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__MoveMotorDirect_Request * ros_message = (custom_interfaces__srv__MoveMotorDirect_Request *)raw_ros_message;
  {  // index_motor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->index_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_velocity_profile
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_velocity_profile);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_velocity_profile", field);
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
// #include "custom_interfaces/srv/detail/move_motor_direct__struct.h"
// already included above
// #include "custom_interfaces/srv/detail/move_motor_direct__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_interfaces__srv__move_motor_direct__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("custom_interfaces.srv._move_motor_direct.MoveMotorDirect_Response", full_classname_dest, 65) == 0);
  }
  custom_interfaces__srv__MoveMotorDirect_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_interfaces__srv__move_motor_direct__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveMotorDirect_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_interfaces.srv._move_motor_direct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveMotorDirect_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_interfaces__srv__MoveMotorDirect_Response * ros_message = (custom_interfaces__srv__MoveMotorDirect_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
