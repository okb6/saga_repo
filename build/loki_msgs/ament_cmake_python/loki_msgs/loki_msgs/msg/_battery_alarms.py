# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/BatteryAlarms.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryAlarms(type):
    """Metaclass of message 'BatteryAlarms'."""

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
                'loki_msgs.msg.BatteryAlarms')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_alarms
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_alarms
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_alarms
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_alarms
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_alarms

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryAlarms(metaclass=Metaclass_BatteryAlarms):
    """Message class 'BatteryAlarms'."""

    __slots__ = [
        '_over_voltage_protection',
        '_under_voltage_protection',
        '_over_temperature_protection',
        '_under_temperature_protection',
        '_over_charge_current',
        '_over_discharge_current',
        '_can_communication_fail',
        '_cell_voltage_sensing_fault',
        '_bms_fail',
        '_short_circuit_discharge',
        '_temperature_sensing_fault',
        '_over_voltage_fault',
        '_under_voltage_fault',
        '_pack_voltage_sensing_fault',
    ]

    _fields_and_field_types = {
        'over_voltage_protection': 'boolean',
        'under_voltage_protection': 'boolean',
        'over_temperature_protection': 'boolean',
        'under_temperature_protection': 'boolean',
        'over_charge_current': 'boolean',
        'over_discharge_current': 'boolean',
        'can_communication_fail': 'boolean',
        'cell_voltage_sensing_fault': 'boolean',
        'bms_fail': 'boolean',
        'short_circuit_discharge': 'boolean',
        'temperature_sensing_fault': 'boolean',
        'over_voltage_fault': 'boolean',
        'under_voltage_fault': 'boolean',
        'pack_voltage_sensing_fault': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.over_voltage_protection = kwargs.get('over_voltage_protection', bool())
        self.under_voltage_protection = kwargs.get('under_voltage_protection', bool())
        self.over_temperature_protection = kwargs.get('over_temperature_protection', bool())
        self.under_temperature_protection = kwargs.get('under_temperature_protection', bool())
        self.over_charge_current = kwargs.get('over_charge_current', bool())
        self.over_discharge_current = kwargs.get('over_discharge_current', bool())
        self.can_communication_fail = kwargs.get('can_communication_fail', bool())
        self.cell_voltage_sensing_fault = kwargs.get('cell_voltage_sensing_fault', bool())
        self.bms_fail = kwargs.get('bms_fail', bool())
        self.short_circuit_discharge = kwargs.get('short_circuit_discharge', bool())
        self.temperature_sensing_fault = kwargs.get('temperature_sensing_fault', bool())
        self.over_voltage_fault = kwargs.get('over_voltage_fault', bool())
        self.under_voltage_fault = kwargs.get('under_voltage_fault', bool())
        self.pack_voltage_sensing_fault = kwargs.get('pack_voltage_sensing_fault', bool())

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
        if self.over_voltage_protection != other.over_voltage_protection:
            return False
        if self.under_voltage_protection != other.under_voltage_protection:
            return False
        if self.over_temperature_protection != other.over_temperature_protection:
            return False
        if self.under_temperature_protection != other.under_temperature_protection:
            return False
        if self.over_charge_current != other.over_charge_current:
            return False
        if self.over_discharge_current != other.over_discharge_current:
            return False
        if self.can_communication_fail != other.can_communication_fail:
            return False
        if self.cell_voltage_sensing_fault != other.cell_voltage_sensing_fault:
            return False
        if self.bms_fail != other.bms_fail:
            return False
        if self.short_circuit_discharge != other.short_circuit_discharge:
            return False
        if self.temperature_sensing_fault != other.temperature_sensing_fault:
            return False
        if self.over_voltage_fault != other.over_voltage_fault:
            return False
        if self.under_voltage_fault != other.under_voltage_fault:
            return False
        if self.pack_voltage_sensing_fault != other.pack_voltage_sensing_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def over_voltage_protection(self):
        """Message field 'over_voltage_protection'."""
        return self._over_voltage_protection

    @over_voltage_protection.setter
    def over_voltage_protection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'over_voltage_protection' field must be of type 'bool'"
        self._over_voltage_protection = value

    @builtins.property
    def under_voltage_protection(self):
        """Message field 'under_voltage_protection'."""
        return self._under_voltage_protection

    @under_voltage_protection.setter
    def under_voltage_protection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'under_voltage_protection' field must be of type 'bool'"
        self._under_voltage_protection = value

    @builtins.property
    def over_temperature_protection(self):
        """Message field 'over_temperature_protection'."""
        return self._over_temperature_protection

    @over_temperature_protection.setter
    def over_temperature_protection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'over_temperature_protection' field must be of type 'bool'"
        self._over_temperature_protection = value

    @builtins.property
    def under_temperature_protection(self):
        """Message field 'under_temperature_protection'."""
        return self._under_temperature_protection

    @under_temperature_protection.setter
    def under_temperature_protection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'under_temperature_protection' field must be of type 'bool'"
        self._under_temperature_protection = value

    @builtins.property
    def over_charge_current(self):
        """Message field 'over_charge_current'."""
        return self._over_charge_current

    @over_charge_current.setter
    def over_charge_current(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'over_charge_current' field must be of type 'bool'"
        self._over_charge_current = value

    @builtins.property
    def over_discharge_current(self):
        """Message field 'over_discharge_current'."""
        return self._over_discharge_current

    @over_discharge_current.setter
    def over_discharge_current(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'over_discharge_current' field must be of type 'bool'"
        self._over_discharge_current = value

    @builtins.property
    def can_communication_fail(self):
        """Message field 'can_communication_fail'."""
        return self._can_communication_fail

    @can_communication_fail.setter
    def can_communication_fail(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_communication_fail' field must be of type 'bool'"
        self._can_communication_fail = value

    @builtins.property
    def cell_voltage_sensing_fault(self):
        """Message field 'cell_voltage_sensing_fault'."""
        return self._cell_voltage_sensing_fault

    @cell_voltage_sensing_fault.setter
    def cell_voltage_sensing_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'cell_voltage_sensing_fault' field must be of type 'bool'"
        self._cell_voltage_sensing_fault = value

    @builtins.property
    def bms_fail(self):
        """Message field 'bms_fail'."""
        return self._bms_fail

    @bms_fail.setter
    def bms_fail(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bms_fail' field must be of type 'bool'"
        self._bms_fail = value

    @builtins.property
    def short_circuit_discharge(self):
        """Message field 'short_circuit_discharge'."""
        return self._short_circuit_discharge

    @short_circuit_discharge.setter
    def short_circuit_discharge(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'short_circuit_discharge' field must be of type 'bool'"
        self._short_circuit_discharge = value

    @builtins.property
    def temperature_sensing_fault(self):
        """Message field 'temperature_sensing_fault'."""
        return self._temperature_sensing_fault

    @temperature_sensing_fault.setter
    def temperature_sensing_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'temperature_sensing_fault' field must be of type 'bool'"
        self._temperature_sensing_fault = value

    @builtins.property
    def over_voltage_fault(self):
        """Message field 'over_voltage_fault'."""
        return self._over_voltage_fault

    @over_voltage_fault.setter
    def over_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'over_voltage_fault' field must be of type 'bool'"
        self._over_voltage_fault = value

    @builtins.property
    def under_voltage_fault(self):
        """Message field 'under_voltage_fault'."""
        return self._under_voltage_fault

    @under_voltage_fault.setter
    def under_voltage_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'under_voltage_fault' field must be of type 'bool'"
        self._under_voltage_fault = value

    @builtins.property
    def pack_voltage_sensing_fault(self):
        """Message field 'pack_voltage_sensing_fault'."""
        return self._pack_voltage_sensing_fault

    @pack_voltage_sensing_fault.setter
    def pack_voltage_sensing_fault(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pack_voltage_sensing_fault' field must be of type 'bool'"
        self._pack_voltage_sensing_fault = value
