// Generated by gencpp from file gabut/mode.msg
// DO NOT EDIT!


#ifndef GABUT_MESSAGE_MODE_H
#define GABUT_MESSAGE_MODE_H


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
struct mode_
{
  typedef mode_<ContainerAllocator> Type;

  mode_()
    : rc_number(0)  {
    }
  mode_(const ContainerAllocator& _alloc)
    : rc_number(0)  {
  (void)_alloc;
    }



   typedef int16_t _rc_number_type;
  _rc_number_type rc_number;





  typedef boost::shared_ptr< ::gabut::mode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gabut::mode_<ContainerAllocator> const> ConstPtr;

}; // struct mode_

typedef ::gabut::mode_<std::allocator<void> > mode;

typedef boost::shared_ptr< ::gabut::mode > modePtr;
typedef boost::shared_ptr< ::gabut::mode const> modeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gabut::mode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gabut::mode_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::gabut::mode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gabut::mode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::mode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gabut::mode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::mode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gabut::mode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gabut::mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2244ae5f9aac7ce5c8daccbb71337be0";
  }

  static const char* value(const ::gabut::mode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2244ae5f9aac7ce5ULL;
  static const uint64_t static_value2 = 0xc8daccbb71337be0ULL;
};

template<class ContainerAllocator>
struct DataType< ::gabut::mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gabut/mode";
  }

  static const char* value(const ::gabut::mode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gabut::mode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 rc_number\n\
";
  }

  static const char* value(const ::gabut::mode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gabut::mode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rc_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gabut::mode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gabut::mode_<ContainerAllocator>& v)
  {
    s << indent << "rc_number: ";
    Printer<int16_t>::stream(s, indent + "  ", v.rc_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GABUT_MESSAGE_MODE_H
