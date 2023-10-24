# generated from rosidl_generator_py/resource/_idl.py.em
# with input from loki_msgs:srv/GetSetBool.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetSetBool_Request(type):
    """Metaclass of message 'GetSetBool_Request'."""

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
                'loki_msgs.srv.GetSetBool_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_set_bool__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_set_bool__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_set_bool__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_set_bool__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_set_bool__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSetBool_Request(metaclass=Metaclass_GetSetBool_Request):
    """Message class 'GetSetBool_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'set_bool_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSetBool_Response(type):
    """Metaclass of message 'GetSetBool_Response'."""

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
                'loki_msgs.srv.GetSetBool_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_set_bool__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_set_bool__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_set_bool__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_set_bool__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_set_bool__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSetBool_Response(metaclass=Metaclass_GetSetBool_Response):
    """Message class 'GetSetBool_Response'."""

    __slots__ = [
        '_set_bool_strings',
        '_set_bool_values',
    ]

    _fields_and_field_types = {
        'set_bool_strings': 'sequence<string>',
        'set_bool_values': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_bool_strings = kwargs.get('set_bool_strings', [])
        self.set_bool_values = array.array('i', kwargs.get('set_bool_values', []))

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
        if self.set_bool_strings != other.set_bool_strings:
            return False
        if self.set_bool_values != other.set_bool_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def set_bool_strings(self):
        """Message field 'set_bool_strings'."""
        return self._set_bool_strings

    @set_bool_strings.setter
    def set_bool_strings(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'set_bool_strings' field must be a set or sequence and each value of type 'str'"
        self._set_bool_strings = value

    @builtins.property
    def set_bool_values(self):
        """Message field 'set_bool_values'."""
        return self._set_bool_values

    @set_bool_values.setter
    def set_bool_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'set_bool_values' array.array() must have the type code of 'i'"
            self._set_bool_values = value
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
                "The 'set_bool_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._set_bool_values = array.array('i', value)


class Metaclass_GetSetBool(type):
    """Metaclass of service 'GetSetBool'."""

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
                'loki_msgs.srv.GetSetBool')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_set_bool

            from loki_msgs.srv import _get_set_bool
            if _get_set_bool.Metaclass_GetSetBool_Request._TYPE_SUPPORT is None:
                _get_set_bool.Metaclass_GetSetBool_Request.__import_type_support__()
            if _get_set_bool.Metaclass_GetSetBool_Response._TYPE_SUPPORT is None:
                _get_set_bool.Metaclass_GetSetBool_Response.__import_type_support__()


class GetSetBool(metaclass=Metaclass_GetSetBool):
    from loki_msgs.srv._get_set_bool import GetSetBool_Request as Request
    from loki_msgs.srv._get_set_bool import GetSetBool_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
