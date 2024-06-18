# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/ControllerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'temps'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerState(type):
    """Metaclass of message 'ControllerState'."""

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
                'loki_msgs.msg.ControllerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_state

            from loki_msgs.msg import ControllerStatusFlag
            if ControllerStatusFlag.__class__._TYPE_SUPPORT is None:
                ControllerStatusFlag.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerState(metaclass=Metaclass_ControllerState):
    """Message class 'ControllerState'."""

    __slots__ = [
        '_controller_mode',
        '_battery_volts',
        '_battery_amps',
        '_temps',
        '_status_flags',
    ]

    _fields_and_field_types = {
        'controller_mode': 'int8',
        'battery_volts': 'float',
        'battery_amps': 'float',
        'temps': 'sequence<int16>',
        'status_flags': 'sequence<loki_msgs/ControllerStatusFlag>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'ControllerStatusFlag')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.controller_mode = kwargs.get('controller_mode', int())
        self.battery_volts = kwargs.get('battery_volts', float())
        self.battery_amps = kwargs.get('battery_amps', float())
        self.temps = array.array('h', kwargs.get('temps', []))
        self.status_flags = kwargs.get('status_flags', [])

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
        if self.controller_mode != other.controller_mode:
            return False
        if self.battery_volts != other.battery_volts:
            return False
        if self.battery_amps != other.battery_amps:
            return False
        if self.temps != other.temps:
            return False
        if self.status_flags != other.status_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def controller_mode(self):
        """Message field 'controller_mode'."""
        return self._controller_mode

    @controller_mode.setter
    def controller_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'controller_mode' field must be an integer in [-128, 127]"
        self._controller_mode = value

    @builtins.property
    def battery_volts(self):
        """Message field 'battery_volts'."""
        return self._battery_volts

    @battery_volts.setter
    def battery_volts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_volts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_volts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_volts = value

    @builtins.property
    def battery_amps(self):
        """Message field 'battery_amps'."""
        return self._battery_amps

    @battery_amps.setter
    def battery_amps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_amps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_amps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_amps = value

    @builtins.property
    def temps(self):
        """Message field 'temps'."""
        return self._temps

    @temps.setter
    def temps(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'temps' array.array() must have the type code of 'h'"
            self._temps = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'temps' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._temps = array.array('h', value)

    @builtins.property
    def status_flags(self):
        """Message field 'status_flags'."""
        return self._status_flags

    @status_flags.setter
    def status_flags(self, value):
        if __debug__:
            from loki_msgs.msg import ControllerStatusFlag
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
                 all(isinstance(v, ControllerStatusFlag) for v in value) and
                 True), \
                "The 'status_flags' field must be a set or sequence and each value of type 'ControllerStatusFlag'"
        self._status_flags = value
