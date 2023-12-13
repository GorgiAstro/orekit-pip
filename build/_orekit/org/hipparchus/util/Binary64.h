#ifndef org_hipparchus_util_Binary64_H
#define org_hipparchus_util_Binary64_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class Binary64;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_8ba9fe7a847cecad,
          mid_abs_08945ef61eb92dcf,
          mid_acos_08945ef61eb92dcf,
          mid_acosh_08945ef61eb92dcf,
          mid_add_b2e3f0d81354ebf5,
          mid_add_5feb6ca04f03c84e,
          mid_asin_08945ef61eb92dcf,
          mid_asinh_08945ef61eb92dcf,
          mid_atan_08945ef61eb92dcf,
          mid_atan2_b2e3f0d81354ebf5,
          mid_atanh_08945ef61eb92dcf,
          mid_byteValue_82ba37184c5152a3,
          mid_cbrt_08945ef61eb92dcf,
          mid_ceil_08945ef61eb92dcf,
          mid_compareTo_f7ae5b52be80885c,
          mid_copySign_b2e3f0d81354ebf5,
          mid_copySign_5feb6ca04f03c84e,
          mid_cos_08945ef61eb92dcf,
          mid_cosh_08945ef61eb92dcf,
          mid_divide_b2e3f0d81354ebf5,
          mid_divide_5feb6ca04f03c84e,
          mid_doubleValue_b74f83833fdad017,
          mid_equals_460c5e2d9d51c6cc,
          mid_exp_08945ef61eb92dcf,
          mid_expm1_08945ef61eb92dcf,
          mid_floatValue_1fb1bf0772ae5db7,
          mid_floor_08945ef61eb92dcf,
          mid_getField_04d1f63e17d5c5d4,
          mid_getPi_08945ef61eb92dcf,
          mid_getReal_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_b2e3f0d81354ebf5,
          mid_intValue_55546ef6a647f39b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_isZero_9ab94ac1dc23b105,
          mid_linearCombination_d9cbe309752671b2,
          mid_linearCombination_bee3e3a7388fa091,
          mid_linearCombination_b2ec8914a1925d84,
          mid_linearCombination_ee4e81d4c14bea8f,
          mid_linearCombination_9692d0b334031822,
          mid_linearCombination_5685ff926b80598f,
          mid_linearCombination_da9a0600a76d7448,
          mid_linearCombination_11eae0d76e710d8d,
          mid_log_08945ef61eb92dcf,
          mid_log10_08945ef61eb92dcf,
          mid_log1p_08945ef61eb92dcf,
          mid_longValue_6c0ce7e438e5ded4,
          mid_multiply_b2e3f0d81354ebf5,
          mid_multiply_5feb6ca04f03c84e,
          mid_multiply_9b1d59637c097695,
          mid_negate_08945ef61eb92dcf,
          mid_newInstance_5feb6ca04f03c84e,
          mid_pow_b2e3f0d81354ebf5,
          mid_pow_5feb6ca04f03c84e,
          mid_pow_9b1d59637c097695,
          mid_reciprocal_08945ef61eb92dcf,
          mid_remainder_b2e3f0d81354ebf5,
          mid_remainder_5feb6ca04f03c84e,
          mid_rint_08945ef61eb92dcf,
          mid_rootN_9b1d59637c097695,
          mid_scalb_9b1d59637c097695,
          mid_shortValue_02a2271f89f4492b,
          mid_sign_08945ef61eb92dcf,
          mid_sin_08945ef61eb92dcf,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_08945ef61eb92dcf,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_08945ef61eb92dcf,
          mid_subtract_b2e3f0d81354ebf5,
          mid_subtract_5feb6ca04f03c84e,
          mid_tan_08945ef61eb92dcf,
          mid_tanh_08945ef61eb92dcf,
          mid_toDegrees_08945ef61eb92dcf,
          mid_toRadians_08945ef61eb92dcf,
          mid_toString_1c1fa1e935d6cdcf,
          mid_ulp_08945ef61eb92dcf,
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
