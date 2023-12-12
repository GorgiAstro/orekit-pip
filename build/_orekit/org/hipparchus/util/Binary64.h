#ifndef org_hipparchus_util_Binary64_H
#define org_hipparchus_util_Binary64_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class Binary64;
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Binary64 : public ::java::lang::Number {
       public:
        enum {
          mid_init$_10f281d777284cea,
          mid_abs_2ca6539856dec86f,
          mid_acos_2ca6539856dec86f,
          mid_acosh_2ca6539856dec86f,
          mid_add_ef5ca0a4483420e5,
          mid_add_ab2c7224a6bdab9c,
          mid_asin_2ca6539856dec86f,
          mid_asinh_2ca6539856dec86f,
          mid_atan_2ca6539856dec86f,
          mid_atan2_ef5ca0a4483420e5,
          mid_atanh_2ca6539856dec86f,
          mid_byteValue_acadfed42a0dbd0d,
          mid_cbrt_2ca6539856dec86f,
          mid_ceil_2ca6539856dec86f,
          mid_compareTo_67a4d668525f869a,
          mid_copySign_ef5ca0a4483420e5,
          mid_copySign_ab2c7224a6bdab9c,
          mid_cos_2ca6539856dec86f,
          mid_cosh_2ca6539856dec86f,
          mid_divide_ef5ca0a4483420e5,
          mid_divide_ab2c7224a6bdab9c,
          mid_doubleValue_557b8123390d8d0c,
          mid_equals_221e8e85cb385209,
          mid_exp_2ca6539856dec86f,
          mid_expm1_2ca6539856dec86f,
          mid_floatValue_04fe014f7609dc26,
          mid_floor_2ca6539856dec86f,
          mid_getField_20f98801541dcec1,
          mid_getPi_2ca6539856dec86f,
          mid_getReal_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_ef5ca0a4483420e5,
          mid_intValue_412668abc8d889e9,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_isZero_89b302893bdbe1f1,
          mid_linearCombination_7ab285ad5966413b,
          mid_linearCombination_39e6d185b6b6b86d,
          mid_linearCombination_9c881be78a00ab28,
          mid_linearCombination_0514bd18ee18d65e,
          mid_linearCombination_d1e60602e804c7c6,
          mid_linearCombination_9aaf381aef8ad32b,
          mid_linearCombination_8e3245438f13438c,
          mid_linearCombination_28cb0ce4595b180a,
          mid_log_2ca6539856dec86f,
          mid_log10_2ca6539856dec86f,
          mid_log1p_2ca6539856dec86f,
          mid_longValue_9e26256fb0d384a2,
          mid_multiply_ef5ca0a4483420e5,
          mid_multiply_ab2c7224a6bdab9c,
          mid_multiply_4168d4dc99739cfe,
          mid_negate_2ca6539856dec86f,
          mid_newInstance_ab2c7224a6bdab9c,
          mid_pow_ef5ca0a4483420e5,
          mid_pow_ab2c7224a6bdab9c,
          mid_pow_4168d4dc99739cfe,
          mid_reciprocal_2ca6539856dec86f,
          mid_remainder_ef5ca0a4483420e5,
          mid_remainder_ab2c7224a6bdab9c,
          mid_rint_2ca6539856dec86f,
          mid_rootN_4168d4dc99739cfe,
          mid_scalb_4168d4dc99739cfe,
          mid_shortValue_2554afc868a7ba2a,
          mid_sign_2ca6539856dec86f,
          mid_sin_2ca6539856dec86f,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_2ca6539856dec86f,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_2ca6539856dec86f,
          mid_subtract_ef5ca0a4483420e5,
          mid_subtract_ab2c7224a6bdab9c,
          mid_tan_2ca6539856dec86f,
          mid_tanh_2ca6539856dec86f,
          mid_toDegrees_2ca6539856dec86f,
          mid_toRadians_2ca6539856dec86f,
          mid_toString_3cffd47377eca18a,
          mid_ulp_2ca6539856dec86f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Binary64(jobject obj) : ::java::lang::Number(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Binary64(const Binary64& obj) : ::java::lang::Number(obj) {}

        static Binary64 *NAN$;
        static Binary64 *NEGATIVE_INFINITY;
        static Binary64 *ONE;
        static Binary64 *PI;
        static Binary64 *POSITIVE_INFINITY;
        static Binary64 *ZERO;

        Binary64(jdouble);

        Binary64 abs() const;
        Binary64 acos() const;
        Binary64 acosh() const;
        Binary64 add(const Binary64 &) const;
        Binary64 add(jdouble) const;
        Binary64 asin() const;
        Binary64 asinh() const;
        Binary64 atan() const;
        Binary64 atan2(const Binary64 &) const;
        Binary64 atanh() const;
        jbyte byteValue() const;
        Binary64 cbrt() const;
        Binary64 ceil() const;
        jint compareTo(const Binary64 &) const;
        Binary64 copySign(const Binary64 &) const;
        Binary64 copySign(jdouble) const;
        Binary64 cos() const;
        Binary64 cosh() const;
        Binary64 divide(const Binary64 &) const;
        Binary64 divide(jdouble) const;
        jdouble doubleValue() const;
        jboolean equals(const ::java::lang::Object &) const;
        Binary64 exp() const;
        Binary64 expm1() const;
        jfloat floatValue() const;
        Binary64 floor() const;
        ::org::hipparchus::Field getField() const;
        Binary64 getPi() const;
        jdouble getReal() const;
        jint hashCode() const;
        Binary64 hypot(const Binary64 &) const;
        jint intValue() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        jboolean isZero() const;
        Binary64 linearCombination(const JArray< jdouble > &, const JArray< Binary64 > &) const;
        Binary64 linearCombination(const JArray< Binary64 > &, const JArray< Binary64 > &) const;
        Binary64 linearCombination(const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &) const;
        Binary64 linearCombination(jdouble, const Binary64 &, jdouble, const Binary64 &) const;
        Binary64 linearCombination(const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &) const;
        Binary64 linearCombination(jdouble, const Binary64 &, jdouble, const Binary64 &, jdouble, const Binary64 &) const;
        Binary64 linearCombination(const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &, const Binary64 &) const;
        Binary64 linearCombination(jdouble, const Binary64 &, jdouble, const Binary64 &, jdouble, const Binary64 &, jdouble, const Binary64 &) const;
        Binary64 log() const;
        Binary64 log10() const;
        Binary64 log1p() const;
        jlong longValue() const;
        Binary64 multiply(const Binary64 &) const;
        Binary64 multiply(jdouble) const;
        Binary64 multiply(jint) const;
        Binary64 negate() const;
        Binary64 newInstance(jdouble) const;
        Binary64 pow(const Binary64 &) const;
        Binary64 pow(jdouble) const;
        Binary64 pow(jint) const;
        Binary64 reciprocal() const;
        Binary64 remainder(const Binary64 &) const;
        Binary64 remainder(jdouble) const;
        Binary64 rint() const;
        Binary64 rootN(jint) const;
        Binary64 scalb(jint) const;
        jshort shortValue() const;
        Binary64 sign() const;
        Binary64 sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        Binary64 sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        Binary64 sqrt() const;
        Binary64 subtract(const Binary64 &) const;
        Binary64 subtract(jdouble) const;
        Binary64 tan() const;
        Binary64 tanh() const;
        Binary64 toDegrees() const;
        Binary64 toRadians() const;
        ::java::lang::String toString() const;
        Binary64 ulp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Binary64);
      extern PyTypeObject *PY_TYPE(Binary64);

      class t_Binary64 {
      public:
        PyObject_HEAD
        Binary64 object;
        static PyObject *wrap_Object(const Binary64&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
