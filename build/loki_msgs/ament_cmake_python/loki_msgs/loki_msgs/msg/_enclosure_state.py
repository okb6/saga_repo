# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/EnclosureState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'digital_pin_numbers'
# Member 'analog_pin_numbers'
# Member 'analog_pin_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnclosureState(type):
    """Metaclass of message 'EnclosureState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WAS_NEVER_ONLINE': -3,
        'LAST_WAS_UNKNOWN': -2,
        'LAST_WAS_ERROR': -1,
        'WAS_ONLINE': 0,
        'IS_ONLINE': 1,
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
                'loki_msgs.msg.EnclosureState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__enclosure_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__enclosure_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__enclosure_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__enclosure_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__enclosure_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WAS_NEVER_ONLINE': cls.__constants['WAS_NEVER_ONLINE'],
            'LAST_WAS_UNKNOWN': cls.__constants['LAST_WAS_UNKNOWN'],
            'LAST_WAS_ERROR': cls.__constants['LAST_WAS_ERROR'],
            'WAS_ONLINE': cls.__constants['WAS_ONLINE'],
            'IS_ONLINE': cls.__constants['IS_ONLINE'],
        }

    @property
    def WAS_NEVER_ONLINE(self):
        """Message constant 'WAS_NEVER_ONLINE'."""
        return Metaclass_EnclosureState.__constants['WAS_NEVER_ONLINE']

    @property
    def LAST_WAS_UNKNOWN(self):
        """Message constant 'LAST_WAS_UNKNOWN'."""
        return Metaclass_EnclosureState.__constants['LAST_WAS_UNKNOWN']

    @property
    def LAST_WAS_ERROR(self):
        """Message constant 'LAST_WAS_ERROR'."""
        return Metaclass_EnclosureState.__constants['LAST_WAS_ERROR']

    @property
    def WAS_ONLINE(self):
        """Message constant 'WAS_ONLINE'."""
        return Metaclass_EnclosureState.__constants['WAS_ONLINE']

    @property
    def IS_ONLINE(self):
        """Message constant 'IS_ONLINE'."""
        return Metaclass_EnclosureState.__constants['IS_ONLINE']


class EnclosureState(metaclass=Metaclass_EnclosureState):
    """
    Message class 'EnclosureState'.

    Constants:
      WAS_NEVER_ONLINE
      LAST_WAS_UNKNOWN
      LAST_WAS_ERROR
      WAS_ONLINE
      IS_ONLINE
    """

    __slots__ = [
        '_communication_state',
        '_esd_ok',
        '_contactors_on',
        '_motor_power_control_on',
        '_rl3_on',
        '_rl5_on',
        '_digital_pin_numbers',
        '_digital_pin_values',
        '_analog_pin_numbers',
        '_analog_pin_values',
    ]

    _fields_and_field_types = {
        'communication_state': 'int16',
        'esd_ok': 'boolean',
        'contactors_on': 'boolean',
        'motor_power_control_on': 'boolean',
        'rl3_on': 'boolean',
        'rl5_on': 'boolean',
        'digital_pin_numbers': 'sequence<int32>',
        'digital_pin_values': 'sequence<boolean>',
        'analog_pin_numbers': 'sequence<int32>',
        'analog_pin_values': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.communication_state = kwargs.get('communication_state', int())
        self.esd_ok = kwargs.get('esd_ok', bool())
        self.contactors_on = kwargs.get('contactors_on', bool())
        self.motor_power_control_on = kwargs.get('motor_power_control_on', bool())
        self.rl3_on = kwargs.get('rl3_on', bool())
        self.rl5_on = kwargs.get('rl5_on', bool())
        self.digital_pin_numbers = array.array('i', kwargs.get('digital_pin_numbers', []))
        self.digital_pin_values = kwargs.get('digital_pin_values', [])
        self.analog_pin_numbers = array.array('i', kwargs.get('analog_pin_numbers', []))
        self.analog_pin_values = array.array('i', kwargs.get('analog_pin_values', []))

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
        if self.communication_state != other.communication_state:
            return False
        if self.esd_ok != other.esd_ok:
            return False
        if self.contactors_on != other.contactors_on:
            return False
        if self.motor_power_control_on != other.motor_power_control_on:
            return False
        if self.rl3_on != other.rl3_on:
            return False
        if self.rl5_on != other.rl5_on:
            return False
        if self.digital_pin_numbers != other.digital_pin_numbers:
            return False
        if self.digital_pin_values != other.digital_pin_values:
            return False
        if self.analog_pin_numbers != other.analog_pin_numbers:
            return False
        if self.analog_pin_values != other.analog_pin_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def communication_state(self):
        """Message field 'communication_state'."""
        return self._communication_state

    @communication_state.setter
    def communication_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'communication_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'communication_state' field must be an integer in [-32768, 32767]"
        self._communication_state = value

    @builtins.property
    def esd_ok(self):
        """Message field 'esd_ok'."""
        return self._esd_ok

    @esd_ok.setter
    def esd_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'esd_ok' field must be of type 'bool'"
        self._esd_ok = value

    @builtins.property
    def contactors_on(self):
        """Message field 'contactors_on'."""
        return self._contactors_on

    @contactors_on.setter
    def contactors_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'contactors_on' field must be of type 'bool'"
        self._contactors_on = value

    @builtins.property
    def motor_power_control_on(self):
        """Message field 'motor_power_control_on'."""
        return self._motor_power_control_on

    @motor_power_control_on.setter
    def motor_power_control_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motor_power_control_on' field must be of type 'bool'"
        self._motor_power_control_on = value

    @builtins.property
    def rl3_on(self):
        """Message field 'rl3_on'."""
        return self._rl3_on

    @rl3_on.setter
    def rl3_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rl3_on' field must be of type 'bool'"
        self._rl3_on = value

    @builtins.property
    def rl5_on(self):
        """Message field 'rl5_on'."""
        return self._rl5_on

    @rl5_on.setter
    def rl5_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rl5_on' field must be of type 'bool'"
        self._rl5_on = value

    @builtins.property
    def digital_pin_numbers(self):
        """Message field 'digital_pin_numbers'."""
        return self._digital_pin_numbers

    @digital_pin_numbers.setter
    def digital_pin_numbers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'digital_pin_numbers' array.array() must have the type code of 'i'"
            self._digital_pin_numbers = value
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
                "The 'digital_pin_numbers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._digital_pin_numbers = array.array('i', value)

    @builtins.property
    def digital_pin_values(self):
        """Message field 'digital_pin_values'."""
        return self._digital_pin_values

    @digital_pin_values.setter
    def digital_pin_values(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'digital_pin_values' field must be a set or sequence and each value of type 'bool'"
        self._digital_pin_values = value

    @builtins.property
    def analog_pin_numbers(self):
        """Message field 'analog_pin_numbers'."""
        return self._analog_pin_numbers

    @analog_pin_numbers.setter
    def analog_pin_numbers(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'analog_pin_numbers' array.array() must have the type code of 'i'"
            self._analog_pin_numbers = value
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
                "The 'analog_pin_numbers' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._analog_pin_numbers = array.array('i', value)

    @builtins.property
    def analog_pin_values(self):
        """Message field 'analog_pin_values'."""
        return self._analog_pin_values

    @analog_pin_values.setter
    def analog_pin_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'analog_pin_values' array.array() must have the type code of 'i'"
            self._analog_pin_values = value
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
                "The 'analog_pin_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._analog_pin_values = array.array('i', value)
