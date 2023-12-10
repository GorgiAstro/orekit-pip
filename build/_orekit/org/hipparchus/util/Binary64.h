#ifndef org_hipparchus_util_Binary64_H
#define org_hipparchus_util_Binary64_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class Binary64;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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
          mid_init$_17db3a65980d3441,
          mid_abs_b1b326d1f24984aa,
          mid_acos_b1b326d1f24984aa,
          mid_acosh_b1b326d1f24984aa,
          mid_add_fd3ada9e22163ed2,
          mid_add_c7f342f12ffdb1b8,
          mid_asin_b1b326d1f24984aa,
          mid_asinh_b1b326d1f24984aa,
          mid_atan_b1b326d1f24984aa,
          mid_atan2_fd3ada9e22163ed2,
          mid_atanh_b1b326d1f24984aa,
          mid_byteValue_42a1555092006f7f,
          mid_cbrt_b1b326d1f24984aa,
          mid_ceil_b1b326d1f24984aa,
          mid_compareTo_b73e664205df6c87,
          mid_copySign_fd3ada9e22163ed2,
          mid_copySign_c7f342f12ffdb1b8,
          mid_cos_b1b326d1f24984aa,
          mid_cosh_b1b326d1f24984aa,
          mid_divide_fd3ada9e22163ed2,
          mid_divide_c7f342f12ffdb1b8,
          mid_doubleValue_dff5885c2c873297,
          mid_equals_65c7d273e80d497a,
          mid_exp_b1b326d1f24984aa,
          mid_expm1_b1b326d1f24984aa,
          mid_floatValue_5adccb493ada08e8,
          mid_floor_b1b326d1f24984aa,
          mid_getField_5b28be2d3632a5dc,
          mid_getPi_b1b326d1f24984aa,
          mid_getReal_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_fd3ada9e22163ed2,
          mid_intValue_570ce0828f81a2c1,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_isZero_b108b35ef48e27bd,
          mid_linearCombination_d7c1eb031570e06c,
          mid_linearCombination_75733fda778472a9,
          mid_linearCombination_27281f07f3573574,
          mid_linearCombination_e0a5f1014b6897c7,
          mid_linearCombination_5985060391f68c35,
          mid_linearCombination_23279bc45168ec81,
          mid_linearCombination_57f8f419cce19255,
          mid_linearCombination_168fcd08f12a64b5,
          mid_log_b1b326d1f24984aa,
          mid_log10_b1b326d1f24984aa,
          mid_log1p_b1b326d1f24984aa,
          mid_longValue_492808a339bfa35f,
          mid_multiply_fd3ada9e22163ed2,
          mid_multiply_c7f342f12ffdb1b8,
          mid_multiply_b0d233d92cd310d6,
          mid_negate_b1b326d1f24984aa,
          mid_newInstance_c7f342f12ffdb1b8,
          mid_pow_fd3ada9e22163ed2,
          mid_pow_c7f342f12ffdb1b8,
          mid_pow_b0d233d92cd310d6,
          mid_reciprocal_b1b326d1f24984aa,
          mid_remainder_fd3ada9e22163ed2,
          mid_remainder_c7f342f12ffdb1b8,
          mid_rint_b1b326d1f24984aa,
          mid_rootN_b0d233d92cd310d6,
          mid_scalb_b0d233d92cd310d6,
          mid_shortValue_b5dd6688e7dce57d,
          mid_sign_b1b326d1f24984aa,
          mid_sin_b1b326d1f24984aa,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_b1b326d1f24984aa,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_b1b326d1f24984aa,
          mid_subtract_fd3ada9e22163ed2,
          mid_subtract_c7f342f12ffdb1b8,
          mid_tan_b1b326d1f24984aa,
          mid_tanh_b1b326d1f24984aa,
          mid_toDegrees_b1b326d1f24984aa,
          mid_toRadians_b1b326d1f24984aa,
          mid_toString_11b109bd155ca898,
          mid_ulp_b1b326d1f24984aa,
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
