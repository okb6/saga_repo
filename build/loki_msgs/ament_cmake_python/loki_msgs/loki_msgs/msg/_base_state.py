# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/BaseState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'prop_speed'
# Member 'prop_pos'
# Member 'steer_speed'
# Member 'steer_pos'
# Member 'steer_max_speed'
# Member 'channel'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseState(type):
    """Metaclass of message 'BaseState'."""

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
                'loki_msgs.msg.BaseState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseState(metaclass=Metaclass_BaseState):
    """Message class 'BaseState'."""

    __slots__ = [
        '_header',
        '_drive_mode',
        '_prop_speed',
        '_prop_pos',
        '_steer_speed',
        '_steer_pos',
        '_steer_max_speed',
        '_channel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'drive_mode': 'int16',
        'prop_speed': 'sequence<double>',
        'prop_pos': 'sequence<double>',
        'steer_speed': 'sequence<double>',
        'steer_pos': 'sequence<double>',
        'steer_max_speed': 'sequence<double>',
        'channel': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.drive_mode = kwargs.get('drive_mode', int())
        self.prop_speed = array.array('d', kwargs.get('prop_speed', []))
        self.prop_pos = array.array('d', kwargs.get('prop_pos', []))
        self.steer_speed = array.array('d', kwargs.get('steer_speed', []))
        self.steer_pos = array.array('d', kwargs.get('steer_pos', []))
        self.steer_max_speed = array.array('d', kwargs.get('steer_max_speed', []))
        self.channel = array.array('i', kwargs.get('channel', []))

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
        if self.header != other.header:
            return False
        if self.drive_mode != other.drive_mode:
            return False
        if self.prop_speed != other.prop_speed:
            return False
        if self.prop_pos != other.prop_pos:
            return False
        if self.steer_speed != other.steer_speed:
            return False
        if self.steer_pos != other.steer_pos:
            return False
        if self.steer_max_speed != other.steer_max_speed:
            return False
        if self.channel != other.channel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def drive_mode(self):
        """Message field 'drive_mode'."""
        return self._drive_mode

    @drive_mode.setter
    def drive_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drive_mode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'drive_mode' field must be an integer in [-32768, 32767]"
        self._drive_mode = value

    @builtins.property
    def prop_speed(self):
        """Message field 'prop_speed'."""
        return self._prop_speed

    @prop_speed.setter
    def prop_speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'prop_speed' array.array() must have the type code of 'd'"
            self._prop_speed = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'prop_speed' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._prop_speed = array.array('d', value)

    @builtins.property
    def prop_pos(self):
        """Message field 'prop_pos'."""
        return self._prop_pos

    @prop_pos.setter
    def prop_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'prop_pos' array.array() must have the type code of 'd'"
            self._prop_pos = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'prop_pos' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._prop_pos = array.array('d', value)

    @builtins.property
    def steer_speed(self):
        """Message field 'steer_speed'."""
        return self._steer_speed

    @steer_speed.setter
    def steer_speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'steer_speed' array.array() must have the type code of 'd'"
            self._steer_speed = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'steer_speed' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._steer_speed = array.array('d', value)

    @builtins.property
    def steer_pos(self):
        """Message field 'steer_pos'."""
        return self._steer_pos

    @steer_pos.setter
    def steer_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'steer_pos' array.array() must have the type code of 'd'"
            self._steer_pos = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'steer_pos' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._steer_pos = array.array('d', value)

    @builtins.property
    def steer_max_speed(self):
        """Message field 'steer_max_speed'."""
        return self._steer_max_speed

    @steer_max_speed.setter
    def steer_max_speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'steer_max_speed' array.array() must have the type code of 'd'"
            self._steer_max_speed = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'steer_max_speed' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._steer_max_speed = array.array('d', value)

    @builtins.property
    def channel(self):
        """Message field 'channel'."""
        return self._channel

    @channel.setter
    def channel(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'channel' array.array() must have the type code of 'i'"
            self._channel = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'channel' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._channel = array.array('i', value)
