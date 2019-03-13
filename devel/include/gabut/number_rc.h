// Generated by gencpp from file gabut/number_rc.msg
// DO NOT EDIT!


#ifndef GABUT_MESSAGE_NUMBER_RC_H
#define GABUT_MESSAGE_NUMBER_RC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gabut
{
template <class ContainerAllocator>
struct number_rc_
{
  typedef number_rc_<ContainerAllocator> Type;

  number_rc_()
    : rc_number(0)  {
    }
  number_rc_(const ContainerAllocator& _alloc)
    : rc_number(0)  {
  (void)_alloc;
    }



   typedef int16_t _rc_number_type;
  _rc_number_type rc_number;





  typedef boost::shared_ptr< ::gabut::number_rc_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gabut::number_rc_<ContainerAllocator> const> ConstPtr;

}; // struct number_rc_

typedef ::gabut::number_rc_<std::allocator<void> > number_rc;

typedef boost::shared_ptr< ::gabut::number_rc > number_rcPtr;
typedef boost::shared_ptr< ::gabut::number_rc const> number_rcConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gabut::number_rc_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gabut::number_rc_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gabut

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg'], 'gabut': ['/home/mfikih15/Documents/ROV/src/gabut/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gabut::number_rc_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gabut::number_rc_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::number_rc_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::number_rc_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::number_rc_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::number_rc_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gabut::number_rc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2244ae5f9aac7ce5c8daccbb71337be0";
  }

  static const char* value(const ::gabut::number_rc_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2244ae5f9aac7ce5ULL;
  static const uint64_t static_value2 = 0xc8daccbb71337be0ULL;
};

template<class ContainerAllocator>
struct DataType< ::gabut::number_rc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gabut/number_rc";
  }

  static const char* value(const ::gabut::number_rc_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gabut::number_rc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 rc_number\n\
";
  }

  static const char* value(const ::gabut::number_rc_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gabut::number_rc_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rc_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct number_rc_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gabut::number_rc_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gabut::number_rc_<ContainerAllocator>& v)
  {
    s << indent << "rc_number: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rc_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GABUT_MESSAGE_NUMBER_RC_H
