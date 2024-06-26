/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/com/volz/servo/20020.ActuatorStatus.uavcan
 */

#ifndef COM_VOLZ_SERVO_ACTUATORSTATUS_HPP_INCLUDED
#define COM_VOLZ_SERVO_ACTUATORSTATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Volz servo feedback.
#
uint8 actuator_id # Unique actuator ID (1..15)

float16 actual_position # Actual servo position in radians

uint8 current # Current: unsigned, 8-bit value, one count = 0.025 A

uint8 voltage # Supply voltage: unsigned, 8-bit value, one count = 0.2 V

uint8 motor_pwm # Motor PWM: unsigned, 8-bit value, 0 = 0% Motor power, 255 = 100% Motor Power

uint8 motor_temperature # Motor temperature: unsigned 8-bit value, 0 = -50C, 255 = sensor error, one count = one degree
******************************************************************************/

/********************* DSDL signature source definition ***********************
com.volz.servo.ActuatorStatus
saturated uint8 actuator_id
saturated float16 actual_position
saturated uint8 current
saturated uint8 voltage
saturated uint8 motor_pwm
saturated uint8 motor_temperature
******************************************************************************/

#undef actuator_id
#undef actual_position
#undef current
#undef voltage
#undef motor_pwm
#undef motor_temperature

namespace com
{
namespace volz
{
namespace servo
{

template <int _tmpl>
struct UAVCAN_EXPORT ActuatorStatus_
{
    typedef const ActuatorStatus_<_tmpl>& ParameterType;
    typedef ActuatorStatus_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > actuator_id;
        typedef ::uavcan::FloatSpec< 16, ::uavcan::CastModeSaturate > actual_position;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > current;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > voltage;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > motor_pwm;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > motor_temperature;
    };

    enum
    {
        MinBitLen
            = FieldTypes::actuator_id::MinBitLen
            + FieldTypes::actual_position::MinBitLen
            + FieldTypes::current::MinBitLen
            + FieldTypes::voltage::MinBitLen
            + FieldTypes::motor_pwm::MinBitLen
            + FieldTypes::motor_temperature::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::actuator_id::MaxBitLen
            + FieldTypes::actual_position::MaxBitLen
            + FieldTypes::current::MaxBitLen
            + FieldTypes::voltage::MaxBitLen
            + FieldTypes::motor_pwm::MaxBitLen
            + FieldTypes::motor_temperature::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::actuator_id >::Type actuator_id;
    typename ::uavcan::StorageType< typename FieldTypes::actual_position >::Type actual_position;
    typename ::uavcan::StorageType< typename FieldTypes::current >::Type current;
    typename ::uavcan::StorageType< typename FieldTypes::voltage >::Type voltage;
    typename ::uavcan::StorageType< typename FieldTypes::motor_pwm >::Type motor_pwm;
    typename ::uavcan::StorageType< typename FieldTypes::motor_temperature >::Type motor_temperature;

    ActuatorStatus_()
        : actuator_id()
        , actual_position()
        , current()
        , voltage()
        , motor_pwm()
        , motor_temperature()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<56 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 20020 };

    static const char* getDataTypeFullName()
    {
        return "com.volz.servo.ActuatorStatus";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool ActuatorStatus_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        actuator_id == rhs.actuator_id &&
        actual_position == rhs.actual_position &&
        current == rhs.current &&
        voltage == rhs.voltage &&
        motor_pwm == rhs.motor_pwm &&
        motor_temperature == rhs.motor_temperature;
}

template <int _tmpl>
bool ActuatorStatus_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(actuator_id, rhs.actuator_id) &&
        ::uavcan::areClose(actual_position, rhs.actual_position) &&
        ::uavcan::areClose(current, rhs.current) &&
        ::uavcan::areClose(voltage, rhs.voltage) &&
        ::uavcan::areClose(motor_pwm, rhs.motor_pwm) &&
        ::uavcan::areClose(motor_temperature, rhs.motor_temperature);
}

template <int _tmpl>
int ActuatorStatus_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::actuator_id::encode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::actual_position::encode(self.actual_position, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::current::encode(self.current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::voltage::encode(self.voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::motor_pwm::encode(self.motor_pwm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::motor_temperature::encode(self.motor_temperature, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int ActuatorStatus_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::actuator_id::decode(self.actuator_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::actual_position::decode(self.actual_position, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::current::decode(self.current, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::voltage::decode(self.voltage, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::motor_pwm::decode(self.motor_pwm, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::motor_temperature::decode(self.motor_temperature, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature ActuatorStatus_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x29BF0D53B4060263ULL);

    FieldTypes::actuator_id::extendDataTypeSignature(signature);
    FieldTypes::actual_position::extendDataTypeSignature(signature);
    FieldTypes::current::extendDataTypeSignature(signature);
    FieldTypes::voltage::extendDataTypeSignature(signature);
    FieldTypes::motor_pwm::extendDataTypeSignature(signature);
    FieldTypes::motor_temperature::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef ActuatorStatus_<0> ActuatorStatus;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::com::volz::servo::ActuatorStatus > _uavcan_gdtr_registrator_ActuatorStatus;

}

} // Namespace servo
} // Namespace volz
} // Namespace com

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::volz::servo::ActuatorStatus >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::volz::servo::ActuatorStatus::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::volz::servo::ActuatorStatus >::stream(Stream& s, ::com::volz::servo::ActuatorStatus::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "actuator_id: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::actuator_id >::stream(s, obj.actuator_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "actual_position: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::actual_position >::stream(s, obj.actual_position, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "current: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::current >::stream(s, obj.current, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "voltage: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::voltage >::stream(s, obj.voltage, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "motor_pwm: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::motor_pwm >::stream(s, obj.motor_pwm, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "motor_temperature: ";
    YamlStreamer< ::com::volz::servo::ActuatorStatus::FieldTypes::motor_temperature >::stream(s, obj.motor_temperature, level + 1);
}

}

namespace com
{
namespace volz
{
namespace servo
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::volz::servo::ActuatorStatus::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::volz::servo::ActuatorStatus >::stream(s, obj, 0);
    return s;
}

} // Namespace servo
} // Namespace volz
} // Namespace com

#endif // COM_VOLZ_SERVO_ACTUATORSTATUS_HPP_INCLUDED