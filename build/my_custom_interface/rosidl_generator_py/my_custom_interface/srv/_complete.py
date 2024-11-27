# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_custom_interface:srv/COMPLETE.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_COMPLETE_Request(type):
    """Metaclass of message 'COMPLETE_Request'."""

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
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.COMPLETE_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__complete__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__complete__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__complete__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__complete__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__complete__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class COMPLETE_Request(metaclass=Metaclass_COMPLETE_Request):
    """Message class 'COMPLETE_Request'."""

    __slots__ = [
        '_a',
    ]

    _fields_and_field_types = {
        'a': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', str())

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
        if self.a != other.a:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'a' field must be of type 'str'"
        self._a = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_COMPLETE_Response(type):
    """Metaclass of message 'COMPLETE_Response'."""

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
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.COMPLETE_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__complete__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__complete__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__complete__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__complete__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__complete__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class COMPLETE_Response(metaclass=Metaclass_COMPLETE_Response):
    """Message class 'COMPLETE_Response'."""

    __slots__ = [
        '_good',
    ]

    _fields_and_field_types = {
        'good': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.good = kwargs.get('good', str())

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
        if self.good != other.good:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def good(self):
        """Message field 'good'."""
        return self._good

    @good.setter
    def good(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'good' field must be of type 'str'"
        self._good = value


class Metaclass_COMPLETE(type):
    """Metaclass of service 'COMPLETE'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_custom_interface.srv.COMPLETE')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__complete

            from my_custom_interface.srv import _complete
            if _complete.Metaclass_COMPLETE_Request._TYPE_SUPPORT is None:
                _complete.Metaclass_COMPLETE_Request.__import_type_support__()
            if _complete.Metaclass_COMPLETE_Response._TYPE_SUPPORT is None:
                _complete.Metaclass_COMPLETE_Response.__import_type_support__()


class COMPLETE(metaclass=Metaclass_COMPLETE):
    from my_custom_interface.srv._complete import COMPLETE_Request as Request
    from my_custom_interface.srv._complete import COMPLETE_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
