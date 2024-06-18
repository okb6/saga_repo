# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/ControllerData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerData(type):
    """Metaclass of message 'ControllerData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('loki_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'loki_msgs.msg.ControllerData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_data

            from loki_msgs.msg import ControllerConfig
            if ControllerConfig.__class__._TYPE_SUPPORT is None:
                ControllerConfig.__class__.__import_type_support__()

            from loki_msgs.msg import ControllerState
            if ControllerState.__class__._TYPE_SUPPORT is None:
                ControllerState.__class__.__import_type_support__()

            from loki_msgs.msg import MotorState
            if MotorState.__class__._TYPE_SUPPORT is None:
                MotorState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerData(metaclass=Metaclass_ControllerData):
    """Message class 'ControllerData'."""

    __slots__ = [
        '_controller_config',
        '_controller_state',
        '_motor_state',
    ]

    _fields_and_field_types = {
        'controller_config': 'loki_msgs/ControllerConfig',
        'controller_state': 'loki_msgs/ControllerState',
        'motor_state': 'sequence<loki_msgs/MotorState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'ControllerConfig'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'ControllerState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'MotorState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from loki_msgs.msg import ControllerConfig
        self.controller_config = kwargs.get('controller_config', ControllerConfig())
        from loki_msgs.msg import ControllerState
        self.controller_state = kwargs.get('controller_state', ControllerState())
        self.motor_state = kwargs.get('motor_state', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.controller_config != other.controller_config:
            return False
        if self.controller_state != other.controller_state:
            return False
        if self.motor_state != other.motor_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def controller_config(self):
        """Message field 'controller_config'."""
        return self._controller_config

    @controller_config.setter
    def controller_config(self, value):
        if __debug__:
            from loki_msgs.msg import ControllerConfig
            assert \
                isinstance(value, ControllerConfig), \
                "The 'controller_config' field must be a sub message of type 'ControllerConfig'"
        self._controller_config = value

    @builtins.property
    def controller_state(self):
        """Message field 'controller_state'."""
        return self._controller_state

    @controller_state.setter
    def controller_state(self, value):
        if __debug__:
            from loki_msgs.msg import ControllerState
            assert \
                isinstance(value, ControllerState), \
                "The 'controller_state' field must be a sub message of type 'ControllerState'"
        self._controller_state = value

    @builtins.property
    def motor_state(self):
        """Message field 'motor_state'."""
        return self._motor_state

    @motor_state.setter
    def motor_state(self, value):
        if __debug__:
            from loki_msgs.msg import MotorState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MotorState) for v in value) and
                 True), \
                "The 'motor_state' field must be a set or sequence and each value of type 'MotorState'"
        self._motor_state = value
