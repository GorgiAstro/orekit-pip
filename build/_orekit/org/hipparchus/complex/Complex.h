#ifndef org_hipparchus_complex_Complex_H
#define org_hipparchus_complex_Complex_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace hipparchus {
    namespace complex {
      class ComplexField;
      class Complex;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class Complex : public ::java::lang::Object {
       public:
        enum {
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_1d715fa3b7b756e1,
          mid_abs_8278e96d3787b980,
          mid_acos_8278e96d3787b980,
          mid_acosh_8278e96d3787b980,
          mid_add_b074c62aaddfbbb2,
          mid_add_4dfff6d1ce38e85b,
          mid_asin_8278e96d3787b980,
          mid_asinh_8278e96d3787b980,
          mid_atan_8278e96d3787b980,
          mid_atan2_b074c62aaddfbbb2,
          mid_atanh_8278e96d3787b980,
          mid_cbrt_8278e96d3787b980,
          mid_ceil_8278e96d3787b980,
          mid_compareTo_68c283ffd44764bc,
          mid_conjugate_8278e96d3787b980,
          mid_copySign_b074c62aaddfbbb2,
          mid_copySign_4dfff6d1ce38e85b,
          mid_cos_8278e96d3787b980,
          mid_cosh_8278e96d3787b980,
          mid_divide_b074c62aaddfbbb2,
          mid_divide_4dfff6d1ce38e85b,
          mid_equals_229c87223f486349,
          mid_equals_d4a497a5f0ea4dae,
          mid_equals_6b867caf03ce5a76,
          mid_equals_c521148f5a1e8729,
          mid_equalsWithRelativeTolerance_6b867caf03ce5a76,
          mid_exp_8278e96d3787b980,
          mid_expm1_8278e96d3787b980,
          mid_floor_8278e96d3787b980,
          mid_getArgument_456d9a2f64d6b28d,
          mid_getField_3cb90e62d7040545,
          mid_getImaginary_456d9a2f64d6b28d,
          mid_getImaginaryPart_456d9a2f64d6b28d,
          mid_getPi_8278e96d3787b980,
          mid_getReal_456d9a2f64d6b28d,
          mid_getRealPart_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_b074c62aaddfbbb2,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isMathematicalInteger_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_isReal_e470b6d9e0d979db,
          mid_isZero_e470b6d9e0d979db,
          mid_linearCombination_2c319bae11bd93df,
          mid_linearCombination_a8d9a7d3fbb2d8eb,
          mid_linearCombination_e56cc6846d200191,
          mid_linearCombination_4aa118580a77cd9e,
          mid_linearCombination_f1ef3700eb5013ff,
          mid_linearCombination_e73e169906a4f317,
          mid_linearCombination_aa7d437b73616dd9,
          mid_linearCombination_82f969a1e9dd08d9,
          mid_log_8278e96d3787b980,
          mid_log10_8278e96d3787b980,
          mid_log1p_8278e96d3787b980,
          mid_multiply_b074c62aaddfbbb2,
          mid_multiply_4dfff6d1ce38e85b,
          mid_multiply_6274be11ed0ee172,
          mid_multiplyMinusI_8278e96d3787b980,
          mid_multiplyPlusI_8278e96d3787b980,
          mid_negate_8278e96d3787b980,
          mid_newInstance_4dfff6d1ce38e85b,
          mid_norm_456d9a2f64d6b28d,
          mid_nthRoot_0096b74d5921c439,
          mid_pow_b074c62aaddfbbb2,
          mid_pow_4dfff6d1ce38e85b,
          mid_pow_6274be11ed0ee172,
          mid_reciprocal_8278e96d3787b980,
          mid_remainder_b074c62aaddfbbb2,
          mid_remainder_4dfff6d1ce38e85b,
          mid_rint_8278e96d3787b980,
          mid_rootN_6274be11ed0ee172,
          mid_scalb_6274be11ed0ee172,
          mid_sign_8278e96d3787b980,
          mid_sin_8278e96d3787b980,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_8278e96d3787b980,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_8278e96d3787b980,
          mid_sqrt1z_8278e96d3787b980,
          mid_subtract_b074c62aaddfbbb2,
          mid_subtract_4dfff6d1ce38e85b,
          mid_tan_8278e96d3787b980,
          mid_tanh_8278e96d3787b980,
          mid_toDegrees_8278e96d3787b980,
          mid_toRadians_8278e96d3787b980,
          mid_toString_0090f7797e403f43,
          mid_ulp_8278e96d3787b980,
          mid_valueOf_4dfff6d1ce38e85b,
          mid_valueOf_4a983b2ed426e60d,
          mid_createComplex_4a983b2ed426e60d,
          mid_readResolve_dfd7647d9110ac9f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Complex(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Complex(const Complex& obj) : ::java::lang::Object(obj) {}

        static Complex *I;
        static Complex *INF;
        static Complex *MINUS_I;
        static Complex *MINUS_ONE;
        static Complex *NaN;
        static Complex *ONE;
        static Complex *PI;
        static Complex *ZERO;

        Complex(jdouble);
        Complex(jdouble, jdouble);

        Complex abs() const;
        Complex acos() const;
        Complex acosh() const;
        Complex add(const Complex &) const;
        Complex add(jdouble) const;
        Complex asin() const;
        Complex asinh() const;
        Complex atan() const;
        Complex atan2(const Complex &) const;
        Complex atanh() const;
        Complex cbrt() const;
        Complex ceil() const;
        jint compareTo(const Complex &) const;
        Complex conjugate() const;
        Complex copySign(const Complex &) const;
        Complex copySign(jdouble) const;
        Complex cos() const;
        Complex cosh() const;
        Complex divide(const Complex &) const;
        Complex divide(jdouble) const;
        jboolean equals(const ::java::lang::Object &) const;
        static jboolean equals(const Complex &, const Complex &);
        static jboolean equals(const Complex &, const Complex &, jdouble);
        static jboolean equals(const Complex &, const Complex &, jint);
        static jboolean equalsWithRelativeTolerance(const Complex &, const Complex &, jdouble);
        Complex exp() const;
        Complex expm1() const;
        Complex floor() const;
        jdouble getArgument() const;
        ::org::hipparchus::complex::ComplexField getField() const;
        jdouble getImaginary() const;
        jdouble getImaginaryPart() const;
        Complex getPi() const;
        jdouble getReal() const;
        jdouble getRealPart() const;
        jint hashCode() const;
        Complex hypot(const Complex &) const;
        jboolean isInfinite() const;
        jboolean isMathematicalInteger() const;
        jboolean isNaN() const;
        jboolean isReal() const;
        jboolean isZero() const;
        Complex linearCombination(const JArray< jdouble > &, const JArray< Complex > &) const;
        Complex linearCombination(const JArray< Complex > &, const JArray< Complex > &) const;
        Complex linearCombination(const Complex &, const Complex &, const Complex &, const Complex &) const;
        Complex linearCombination(jdouble, const Complex &, jdouble, const Complex &) const;
        Complex linearCombination(const Complex &, const Complex &, const Complex &, const Complex &, const Complex &, const Complex &) const;
        Complex linearCombination(jdouble, const Complex &, jdouble, const Complex &, jdouble, const Complex &) const;
        Complex linearCombination(const Complex &, const Complex &, const Complex &, const Complex &, const Complex &, const Complex &, const Complex &, const Complex &) const;
        Complex linearCombination(jdouble, const Complex &, jdouble, const Complex &, jdouble, const Complex &, jdouble, const Complex &) const;
        Complex log() const;
        Complex log10() const;
        Complex log1p() const;
        Complex multiply(const Complex &) const;
        Complex multiply(jdouble) const;
        Complex multiply(jint) const;
        Complex multiplyMinusI() const;
        Complex multiplyPlusI() const;
        Complex negate() const;
        Complex newInstance(jdouble) const;
        jdouble norm() const;
        ::java::util::List nthRoot(jint) const;
        Complex pow(const Complex &) const;
        Complex pow(jdouble) const;
        Complex pow(jint) const;
        Complex reciprocal() const;
        Complex remainder(const Complex &) const;
        Complex remainder(jdouble) const;
        Complex rint() const;
        Complex rootN(jint) const;
        Complex scalb(jint) const;
        Complex sign() const;
        Complex sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        Complex sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        Complex sqrt() const;
        Complex sqrt1z() const;
        Complex subtract(const Complex &) const;
        Complex subtract(jdouble) const;
        Complex tan() const;
        Complex tanh() const;
        Complex toDegrees() const;
        Complex toRadians() const;
        ::java::lang::String toString() const;
        Complex ulp() const;
        static Complex valueOf(jdouble);
        static Complex valueOf(jdouble, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(Complex);
      extern PyTypeObject *PY_TYPE(Complex);

      class t_Complex {
      public:
        PyObject_HEAD
        Complex object;
        static PyObject *wrap_Object(const Complex&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
