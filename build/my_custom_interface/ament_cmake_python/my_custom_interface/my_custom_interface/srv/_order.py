# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_custom_interface:srv/ORDER.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ORDER_Request(type):
    """Metaclass of message 'ORDER_Request'."""

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
                'my_custom_interface.srv.ORDER_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__order__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__order__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__order__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__order__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__order__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ORDER_Request(metaclass=Metaclass_ORDER_Request):
    """Message class 'ORDER_Request'."""

    __slots__ = [
        '_chocolate',
        '_mint',
        '_strawberry',
        '_table_number',
    ]

    _fields_and_field_types = {
        'chocolate': 'int8',
        'mint': 'int8',
        'strawberry': 'int8',
        'table_number': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chocolate = kwargs.get('chocolate', int())
        self.mint = kwargs.get('mint', int())
        self.strawberry = kwargs.get('strawberry', int())
        self.table_number = kwargs.get('table_number', int())

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
        if self.chocolate != other.chocolate:
            return False
        if self.mint != other.mint:
            return False
        if self.strawberry != other.strawberry:
            return False
        if self.table_number != other.table_number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chocolate(self):
        """Message field 'chocolate'."""
        return self._chocolate

    @chocolate.setter
    def chocolate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chocolate' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'chocolate' field must be an integer in [-128, 127]"
        self._chocolate = value

    @builtins.property
    def mint(self):
        """Message field 'mint'."""
        return self._mint

    @mint.setter
    def mint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mint' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mint' field must be an integer in [-128, 127]"
        self._mint = value

    @builtins.property
    def strawberry(self):
        """Message field 'strawberry'."""
        return self._strawberry

    @strawberry.setter
    def strawberry(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strawberry' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'strawberry' field must be an integer in [-128, 127]"
        self._strawberry = value

    @builtins.property
    def table_number(self):
        """Message field 'table_number'."""
        return self._table_number

    @table_number.setter
    def table_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'table_number' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'table_number' field must be an integer in [-128, 127]"
        self._table_number = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ORDER_Response(type):
    """Metaclass of message 'ORDER_Response'."""

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
                'my_custom_interface.srv.ORDER_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__order__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__order__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__order__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__order__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__order__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ORDER_Response(metaclass=Metaclass_ORDER_Response):
    """Message class 'ORDER_Response'."""

    __slots__ = [
        '_answer',
    ]

    _fields_and_field_types = {
        'answer': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.answer = kwargs.get('answer', int())

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
        if self.answer != other.answer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def answer(self):
        """Message field 'answer'."""
        return self._answer

    @answer.setter
    def answer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'answer' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'answer' field must be an integer in [-128, 127]"
        self._answer = value


class Metaclass_ORDER(type):
    """Metaclass of service 'ORDER'."""

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
                'my_custom_interface.srv.ORDER')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__order

            from my_custom_interface.srv import _order
            if _order.Metaclass_ORDER_Request._TYPE_SUPPORT is None:
                _order.Metaclass_ORDER_Request.__import_type_support__()
            if _order.Metaclass_ORDER_Response._TYPE_SUPPORT is None:
                _order.Metaclass_ORDER_Response.__import_type_support__()


class ORDER(metaclass=Metaclass_ORDER):
    from my_custom_interface.srv._order import ORDER_Request as Request
    from my_custom_interface.srv._order import ORDER_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
