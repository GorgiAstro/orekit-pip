#ifndef org_hipparchus_util_Binary64_H
#define org_hipparchus_util_Binary64_H

#include "java/lang/Number.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Binary64;
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class Field;
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
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
          mid_init$_77e0f9a1f260e2e5,
          mid_abs_cd1f6a49ec3a1b51,
          mid_acos_cd1f6a49ec3a1b51,
          mid_acosh_cd1f6a49ec3a1b51,
          mid_add_7a222516a2a3837b,
          mid_add_1f77ee0c21723a22,
          mid_asin_cd1f6a49ec3a1b51,
          mid_asinh_cd1f6a49ec3a1b51,
          mid_atan_cd1f6a49ec3a1b51,
          mid_atan2_7a222516a2a3837b,
          mid_atanh_cd1f6a49ec3a1b51,
          mid_byteValue_1d06dd1980a98d13,
          mid_cbrt_cd1f6a49ec3a1b51,
          mid_ceil_cd1f6a49ec3a1b51,
          mid_compareTo_ad583666878cc7ff,
          mid_copySign_7a222516a2a3837b,
          mid_copySign_1f77ee0c21723a22,
          mid_cos_cd1f6a49ec3a1b51,
          mid_cosh_cd1f6a49ec3a1b51,
          mid_divide_7a222516a2a3837b,
          mid_divide_1f77ee0c21723a22,
          mid_doubleValue_456d9a2f64d6b28d,
          mid_equals_229c87223f486349,
          mid_exp_cd1f6a49ec3a1b51,
          mid_expm1_cd1f6a49ec3a1b51,
          mid_floatValue_966c782d3223854d,
          mid_floor_cd1f6a49ec3a1b51,
          mid_getField_70b4bbd3fa378d6b,
          mid_getPi_cd1f6a49ec3a1b51,
          mid_getReal_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_7a222516a2a3837b,
          mid_intValue_f2f64475e4580546,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_isZero_e470b6d9e0d979db,
          mid_linearCombination_c4e58f5fcef3f495,
          mid_linearCombination_f2a9b8fe681d11c7,
          mid_linearCombination_fa2bb73ad874b016,
          mid_linearCombination_caa9f884a583e650,
          mid_linearCombination_11eba44d2dcd485e,
          mid_linearCombination_a5eae51123ce07c4,
          mid_linearCombination_f418b785c843722d,
          mid_linearCombination_0c0b3fd9ffb0437e,
          mid_log_cd1f6a49ec3a1b51,
          mid_log10_cd1f6a49ec3a1b51,
          mid_log1p_cd1f6a49ec3a1b51,
          mid_longValue_a27fc9afd27e559d,
          mid_multiply_7a222516a2a3837b,
          mid_multiply_1f77ee0c21723a22,
          mid_multiply_172129e969ccb11c,
          mid_negate_cd1f6a49ec3a1b51,
          mid_newInstance_1f77ee0c21723a22,
          mid_pow_7a222516a2a3837b,
          mid_pow_1f77ee0c21723a22,
          mid_pow_172129e969ccb11c,
          mid_reciprocal_cd1f6a49ec3a1b51,
          mid_remainder_7a222516a2a3837b,
          mid_remainder_1f77ee0c21723a22,
          mid_rint_cd1f6a49ec3a1b51,
          mid_rootN_172129e969ccb11c,
          mid_scalb_172129e969ccb11c,
          mid_shortValue_f89720844d790ad7,
          mid_sign_cd1f6a49ec3a1b51,
          mid_sin_cd1f6a49ec3a1b51,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_cd1f6a49ec3a1b51,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_cd1f6a49ec3a1b51,
          mid_subtract_7a222516a2a3837b,
          mid_subtract_1f77ee0c21723a22,
          mid_tan_cd1f6a49ec3a1b51,
          mid_tanh_cd1f6a49ec3a1b51,
          mid_toDegrees_cd1f6a49ec3a1b51,
          mid_toRadians_cd1f6a49ec3a1b51,
          mid_toString_0090f7797e403f43,
          mid_ulp_cd1f6a49ec3a1b51,
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
