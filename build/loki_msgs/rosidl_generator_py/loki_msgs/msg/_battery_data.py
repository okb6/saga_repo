# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:msg/BatteryData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'temperatures'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryData(type):
    """Metaclass of message 'BatteryData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_OFFLINE': -99,
        'STATUS_ONLINE': -98,
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
                'loki_msgs.msg.BatteryData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_data

            from loki_msgs.msg import BatteryAlarms
            if BatteryAlarms.__class__._TYPE_SUPPORT is None:
                BatteryAlarms.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_OFFLINE': cls.__constants['STATUS_OFFLINE'],
            'STATUS_ONLINE': cls.__constants['STATUS_ONLINE'],
        }

    @property
    def STATUS_OFFLINE(self):
        """Message constant 'STATUS_OFFLINE'."""
        return Metaclass_BatteryData.__constants['STATUS_OFFLINE']

    @property
    def STATUS_ONLINE(self):
        """Message constant 'STATUS_ONLINE'."""
        return Metaclass_BatteryData.__constants['STATUS_ONLINE']


class BatteryData(metaclass=Metaclass_BatteryData):
    """
    Message class 'BatteryData'.

    Constants:
      STATUS_OFFLINE
      STATUS_ONLINE
    """

    __slots__ = [
        '_battery_id',
        '_battery_state',
        '_temperatures',
        '_battery_alarms',
        '_charge_fet_on',
        '_discharge_fet_on',
        '_battery_voltage',
        '_battery_current',
        '_state_of_charge',
        '_state_of_health',
        '_cycle_count',
        '_battery_capacity',
    ]

    _fields_and_field_types = {
        'battery_id': 'int16',
        'battery_state': 'int16',
        'temperatures': 'sequence<double>',
        'battery_alarms': 'loki_msgs/BatteryAlarms',
        'charge_fet_on': 'boolean',
        'discharge_fet_on': 'boolean',
        'battery_voltage': 'double',
        'battery_current': 'double',
        'state_of_charge': 'int16',
        'state_of_health': 'int16',
        'cycle_count': 'int16',
        'battery_capacity': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['loki_msgs', 'msg'], 'BatteryAlarms'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_id = kwargs.get('battery_id', int())
        self.battery_state = kwargs.get('battery_state', int())
        self.temperatures = array.array('d', kwargs.get('temperatures', []))
        from loki_msgs.msg import BatteryAlarms
        self.battery_alarms = kwargs.get('battery_alarms', BatteryAlarms())
        self.charge_fet_on = kwargs.get('charge_fet_on', bool())
        self.discharge_fet_on = kwargs.get('discharge_fet_on', bool())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.battery_current = kwargs.get('battery_current', float())
        self.state_of_charge = kwargs.get('state_of_charge', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.battery_capacity = kwargs.get('battery_capacity', int())

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
        if self.battery_id != other.battery_id:
            return False
        if self.battery_state != other.battery_state:
            return False
        if self.temperatures != other.temperatures:
            return False
        if self.battery_alarms != other.battery_alarms:
            return False
        if self.charge_fet_on != other.charge_fet_on:
            return False
        if self.discharge_fet_on != other.discharge_fet_on:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.battery_current != other.battery_current:
            return False
        if self.state_of_charge != other.state_of_charge:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.battery_capacity != other.battery_capacity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_id(self):
        """Message field 'battery_id'."""
        return self._battery_id

    @battery_id.setter
    def battery_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'battery_id' field must be an integer in [-32768, 32767]"
        self._battery_id = value

    @builtins.property
    def battery_state(self):
        """Message field 'battery_state'."""
        return self._battery_state

    @battery_state.setter
    def battery_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'battery_state' field must be an integer in [-32768, 32767]"
        self._battery_state = value

    @builtins.property
    def temperatures(self):
        """Message field 'temperatures'."""
        return self._temperatures

    @temperatures.setter
    def temperatures(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'temperatures' array.array() must have the type code of 'd'"
            self._temperatures = value
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
                "The 'temperatures' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._temperatures = array.array('d', value)

    @builtins.property
    def battery_alarms(self):
        """Message field 'battery_alarms'."""
        return self._battery_alarms

    @battery_alarms.setter
    def battery_alarms(self, value):
        if __debug__:
            from loki_msgs.msg import BatteryAlarms
            assert \
                isinstance(value, BatteryAlarms), \
                "The 'battery_alarms' field must be a sub message of type 'BatteryAlarms'"
        self._battery_alarms = value

    @builtins.property
    def charge_fet_on(self):
        """Message field 'charge_fet_on'."""
        return self._charge_fet_on

    @charge_fet_on.setter
    def charge_fet_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charge_fet_on' field must be of type 'bool'"
        self._charge_fet_on = value

    @builtins.property
    def discharge_fet_on(self):
        """Message field 'discharge_fet_on'."""
        return self._discharge_fet_on

    @discharge_fet_on.setter
    def discharge_fet_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'discharge_fet_on' field must be of type 'bool'"
        self._discharge_fet_on = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_voltage = value

    @builtins.property
    def battery_current(self):
        """Message field 'battery_current'."""
        return self._battery_current

    @battery_current.setter
    def battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_current = value

    @builtins.property
    def state_of_charge(self):
        """Message field 'state_of_charge'."""
        return self._state_of_charge

    @state_of_charge.setter
    def state_of_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_charge' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'state_of_charge' field must be an integer in [-32768, 32767]"
        self._state_of_charge = value

    @builtins.property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'state_of_health' field must be an integer in [-32768, 32767]"
        self._state_of_health = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cycle_count' field must be an integer in [-32768, 32767]"
        self._cycle_count = value

    @builtins.property
    def battery_capacity(self):
        """Message field 'battery_capacity'."""
        return self._battery_capacity

    @battery_capacity.setter
    def battery_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_capacity' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'battery_capacity' field must be an integer in [-32768, 32767]"
        self._battery_capacity = value
