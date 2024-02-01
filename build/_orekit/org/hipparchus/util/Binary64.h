#ifndef org_hipparchus_util_Binary64_H
#define org_hipparchus_util_Binary64_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Binary64;
      class FieldSinhCosh;
      class FieldSinCos;
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
          mid_init$_1ad26e8c8c0cd65b,
          mid_abs_8fcc6c2abdbc3ba7,
          mid_acos_8fcc6c2abdbc3ba7,
          mid_acosh_8fcc6c2abdbc3ba7,
          mid_add_76168256092fdd9b,
          mid_add_b9ec16195ba9efb8,
          mid_asin_8fcc6c2abdbc3ba7,
          mid_asinh_8fcc6c2abdbc3ba7,
          mid_atan_8fcc6c2abdbc3ba7,
          mid_atan2_76168256092fdd9b,
          mid_atanh_8fcc6c2abdbc3ba7,
          mid_byteValue_5bc9c54e4a4e6e3f,
          mid_cbrt_8fcc6c2abdbc3ba7,
          mid_ceil_8fcc6c2abdbc3ba7,
          mid_compareTo_67c4a67ce13a19a7,
          mid_copySign_76168256092fdd9b,
          mid_copySign_b9ec16195ba9efb8,
          mid_cos_8fcc6c2abdbc3ba7,
          mid_cosh_8fcc6c2abdbc3ba7,
          mid_divide_76168256092fdd9b,
          mid_divide_b9ec16195ba9efb8,
          mid_doubleValue_9981f74b2d109da6,
          mid_equals_72faff9b05f5ed5e,
          mid_exp_8fcc6c2abdbc3ba7,
          mid_expm1_8fcc6c2abdbc3ba7,
          mid_floatValue_0e3b995f823d65ff,
          mid_floor_8fcc6c2abdbc3ba7,
          mid_getField_577649682b9910c1,
          mid_getPi_8fcc6c2abdbc3ba7,
          mid_getReal_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_76168256092fdd9b,
          mid_intValue_d6ab429752e7c267,
          mid_isInfinite_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_isZero_eee3de00fe971136,
          mid_linearCombination_31eede5a9e207c26,
          mid_linearCombination_a26db9d949765b6e,
          mid_linearCombination_8236fa68fda0c542,
          mid_linearCombination_b1bc4355487c8bea,
          mid_linearCombination_c61172707f0d3812,
          mid_linearCombination_56007c6e7f46e161,
          mid_linearCombination_327c1262125a2b00,
          mid_linearCombination_247e0cf34c4742e7,
          mid_log_8fcc6c2abdbc3ba7,
          mid_log10_8fcc6c2abdbc3ba7,
          mid_log1p_8fcc6c2abdbc3ba7,
          mid_longValue_42c72b98e3c2e08a,
          mid_multiply_76168256092fdd9b,
          mid_multiply_b9ec16195ba9efb8,
          mid_multiply_9eae667e534a2534,
          mid_negate_8fcc6c2abdbc3ba7,
          mid_newInstance_b9ec16195ba9efb8,
          mid_pow_76168256092fdd9b,
          mid_pow_b9ec16195ba9efb8,
          mid_pow_9eae667e534a2534,
          mid_reciprocal_8fcc6c2abdbc3ba7,
          mid_remainder_76168256092fdd9b,
          mid_remainder_b9ec16195ba9efb8,
          mid_rint_8fcc6c2abdbc3ba7,
          mid_rootN_9eae667e534a2534,
          mid_scalb_9eae667e534a2534,
          mid_shortValue_5067fec74ceda473,
          mid_sign_8fcc6c2abdbc3ba7,
          mid_sin_8fcc6c2abdbc3ba7,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_8fcc6c2abdbc3ba7,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_8fcc6c2abdbc3ba7,
          mid_subtract_76168256092fdd9b,
          mid_subtract_b9ec16195ba9efb8,
          mid_tan_8fcc6c2abdbc3ba7,
          mid_tanh_8fcc6c2abdbc3ba7,
          mid_toDegrees_8fcc6c2abdbc3ba7,
          mid_toRadians_8fcc6c2abdbc3ba7,
          mid_toString_d2c8eb4129821f0e,
          mid_ulp_8fcc6c2abdbc3ba7,
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
