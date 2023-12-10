#ifndef org_hipparchus_complex_Complex_H
#define org_hipparchus_complex_Complex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace complex {
      class Complex;
      class ComplexField;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class Complex : public ::java::lang::Object {
       public:
        enum {
          mid_init$_17db3a65980d3441,
          mid_init$_8f2e782d5278b131,
          mid_abs_a6784e0b89dedf02,
          mid_acos_a6784e0b89dedf02,
          mid_acosh_a6784e0b89dedf02,
          mid_add_db05c4121ab4cf9b,
          mid_add_f404cec7be8f51e5,
          mid_asin_a6784e0b89dedf02,
          mid_asinh_a6784e0b89dedf02,
          mid_atan_a6784e0b89dedf02,
          mid_atan2_db05c4121ab4cf9b,
          mid_atanh_a6784e0b89dedf02,
          mid_cbrt_a6784e0b89dedf02,
          mid_ceil_a6784e0b89dedf02,
          mid_compareTo_fae750cc0e19576c,
          mid_conjugate_a6784e0b89dedf02,
          mid_copySign_db05c4121ab4cf9b,
          mid_copySign_f404cec7be8f51e5,
          mid_cos_a6784e0b89dedf02,
          mid_cosh_a6784e0b89dedf02,
          mid_divide_db05c4121ab4cf9b,
          mid_divide_f404cec7be8f51e5,
          mid_equals_65c7d273e80d497a,
          mid_equals_18cffd5529c0b318,
          mid_equals_1977686a9a85c063,
          mid_equals_ce480e84fb1bfdfe,
          mid_equalsWithRelativeTolerance_1977686a9a85c063,
          mid_exp_a6784e0b89dedf02,
          mid_expm1_a6784e0b89dedf02,
          mid_floor_a6784e0b89dedf02,
          mid_getArgument_dff5885c2c873297,
          mid_getField_f304aeb797b96d24,
          mid_getImaginary_dff5885c2c873297,
          mid_getImaginaryPart_dff5885c2c873297,
          mid_getPi_a6784e0b89dedf02,
          mid_getReal_dff5885c2c873297,
          mid_getRealPart_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_db05c4121ab4cf9b,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isMathematicalInteger_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_isReal_b108b35ef48e27bd,
          mid_isZero_b108b35ef48e27bd,
          mid_linearCombination_113b783bb5f6aa6a,
          mid_linearCombination_768c966419db50f1,
          mid_linearCombination_e4b62d9a92e5b076,
          mid_linearCombination_3284425167f1af30,
          mid_linearCombination_9a02c530712f3724,
          mid_linearCombination_b8e2a7ca27846946,
          mid_linearCombination_734aa9c379e40267,
          mid_linearCombination_d32979eadaaef3e4,
          mid_log_a6784e0b89dedf02,
          mid_log10_a6784e0b89dedf02,
          mid_log1p_a6784e0b89dedf02,
          mid_multiply_db05c4121ab4cf9b,
          mid_multiply_f404cec7be8f51e5,
          mid_multiply_7ff716ce003a9897,
          mid_multiplyMinusI_a6784e0b89dedf02,
          mid_multiplyPlusI_a6784e0b89dedf02,
          mid_negate_a6784e0b89dedf02,
          mid_newInstance_f404cec7be8f51e5,
          mid_norm_dff5885c2c873297,
          mid_nthRoot_9c3e1c79a080a476,
          mid_pow_db05c4121ab4cf9b,
          mid_pow_f404cec7be8f51e5,
          mid_pow_7ff716ce003a9897,
          mid_reciprocal_a6784e0b89dedf02,
          mid_remainder_db05c4121ab4cf9b,
          mid_remainder_f404cec7be8f51e5,
          mid_rint_a6784e0b89dedf02,
          mid_rootN_7ff716ce003a9897,
          mid_scalb_7ff716ce003a9897,
          mid_sign_a6784e0b89dedf02,
          mid_sin_a6784e0b89dedf02,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_a6784e0b89dedf02,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_a6784e0b89dedf02,
          mid_sqrt1z_a6784e0b89dedf02,
          mid_subtract_db05c4121ab4cf9b,
          mid_subtract_f404cec7be8f51e5,
          mid_tan_a6784e0b89dedf02,
          mid_tanh_a6784e0b89dedf02,
          mid_toDegrees_a6784e0b89dedf02,
          mid_toRadians_a6784e0b89dedf02,
          mid_toString_11b109bd155ca898,
          mid_ulp_a6784e0b89dedf02,
          mid_valueOf_f404cec7be8f51e5,
          mid_valueOf_b9232ea66d045a31,
          mid_createComplex_b9232ea66d045a31,
          mid_readResolve_4d26fd885228c716,
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
