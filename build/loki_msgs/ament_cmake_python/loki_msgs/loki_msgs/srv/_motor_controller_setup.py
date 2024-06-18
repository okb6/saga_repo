# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/MotorControllerSetup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorControllerSetup_Request(type):
    """Metaclass of message 'MotorControllerSetup_Request'."""

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
                'loki_msgs.srv.MotorControllerSetup_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_controller_setup__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_controller_setup__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_controller_setup__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_controller_setup__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_controller_setup__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorControllerSetup_Request(metaclass=Metaclass_MotorControllerSetup_Request):
    """Message class 'MotorControllerSetup_Request'."""

    __slots__ = [
        '_can_id',
        '_setup_id',
        '_setup_value',
    ]

    _fields_and_field_types = {
        'can_id': 'int32',
        'setup_id': 'int32',
        'setup_value': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_id = kwargs.get('can_id', int())
        self.setup_id = kwargs.get('setup_id', int())
        self.setup_value = kwargs.get('setup_value', int())

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
        if self.can_id != other.can_id:
            return False
        if self.setup_id != other.setup_id:
            return False
        if self.setup_value != other.setup_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'can_id' field must be an integer in [-2147483648, 2147483647]"
        self._can_id = value

    @builtins.property
    def setup_id(self):
        """Message field 'setup_id'."""
        return self._setup_id

    @setup_id.setter
    def setup_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'setup_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'setup_id' field must be an integer in [-2147483648, 2147483647]"
        self._setup_id = value

    @builtins.property
    def setup_value(self):
        """Message field 'setup_value'."""
        return self._setup_value

    @setup_value.setter
    def setup_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'setup_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'setup_value' field must be an integer in [-2147483648, 2147483647]"
        self._setup_value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorControllerSetup_Response(type):
    """Metaclass of message 'MotorControllerSetup_Response'."""

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
                'loki_msgs.srv.MotorControllerSetup_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_controller_setup__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_controller_setup__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_controller_setup__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_controller_setup__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_controller_setup__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorControllerSetup_Response(metaclass=Metaclass_MotorControllerSetup_Response):
    """Message class 'MotorControllerSetup_Response'."""

    __slots__ = [
        '_message',
        '_status',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.status = kwargs.get('status', int())

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
        if self.message != other.message:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value


class Metaclass_MotorControllerSetup(type):
    """Metaclass of service 'MotorControllerSetup'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('loki_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'loki_msgs.srv.MotorControllerSetup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_controller_setup

            from loki_msgs.srv import _motor_controller_setup
            if _motor_controller_setup.Metaclass_MotorControllerSetup_Request._TYPE_SUPPORT is None:
                _motor_controller_setup.Metaclass_MotorControllerSetup_Request.__import_type_support__()
            if _motor_controller_setup.Metaclass_MotorControllerSetup_Response._TYPE_SUPPORT is None:
                _motor_controller_setup.Metaclass_MotorControllerSetup_Response.__import_type_support__()


class MotorControllerSetup(metaclass=Metaclass_MotorControllerSetup):
    from loki_msgs.srv._motor_controller_setup import MotorControllerSetup_Request as Request
    from loki_msgs.srv._motor_controller_setup import MotorControllerSetup_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
