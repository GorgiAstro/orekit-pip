#ifndef org_hipparchus_complex_Complex_H
#define org_hipparchus_complex_Complex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class CalculusFieldElement;
    namespace complex {
      class Complex;
      class ComplexField;
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
          mid_init$_8ba9fe7a847cecad,
          mid_init$_369b4c97255d5afa,
          mid_abs_2f0868cbf8c045d4,
          mid_acos_2f0868cbf8c045d4,
          mid_acosh_2f0868cbf8c045d4,
          mid_add_79e1cb20a2d72b1b,
          mid_add_ecb7aa6c69661c2d,
          mid_asin_2f0868cbf8c045d4,
          mid_asinh_2f0868cbf8c045d4,
          mid_atan_2f0868cbf8c045d4,
          mid_atan2_79e1cb20a2d72b1b,
          mid_atanh_2f0868cbf8c045d4,
          mid_cbrt_2f0868cbf8c045d4,
          mid_ceil_2f0868cbf8c045d4,
          mid_compareTo_a70b43c9dfe4a3cf,
          mid_conjugate_2f0868cbf8c045d4,
          mid_copySign_79e1cb20a2d72b1b,
          mid_copySign_ecb7aa6c69661c2d,
          mid_cos_2f0868cbf8c045d4,
          mid_cosh_2f0868cbf8c045d4,
          mid_divide_79e1cb20a2d72b1b,
          mid_divide_ecb7aa6c69661c2d,
          mid_equals_460c5e2d9d51c6cc,
          mid_equals_77d2d724d5d71872,
          mid_equals_3758db5964a6b10b,
          mid_equals_99bc12c8f70013a5,
          mid_equalsWithRelativeTolerance_3758db5964a6b10b,
          mid_exp_2f0868cbf8c045d4,
          mid_expm1_2f0868cbf8c045d4,
          mid_floor_2f0868cbf8c045d4,
          mid_getArgument_b74f83833fdad017,
          mid_getField_74589e1538dd146b,
          mid_getImaginary_b74f83833fdad017,
          mid_getImaginaryPart_b74f83833fdad017,
          mid_getPi_2f0868cbf8c045d4,
          mid_getReal_b74f83833fdad017,
          mid_getRealPart_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_79e1cb20a2d72b1b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isMathematicalInteger_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_isReal_9ab94ac1dc23b105,
          mid_isZero_9ab94ac1dc23b105,
          mid_linearCombination_0c26494d592bd8b5,
          mid_linearCombination_a5dc3f219313d09e,
          mid_linearCombination_08e384c3474bdd1c,
          mid_linearCombination_86872242b0eed80b,
          mid_linearCombination_96b75d8a2ee5e1ae,
          mid_linearCombination_96c46bce0c7550fb,
          mid_linearCombination_a50e8f12c77e88f2,
          mid_linearCombination_14c924fe18af6773,
          mid_log_2f0868cbf8c045d4,
          mid_log10_2f0868cbf8c045d4,
          mid_log1p_2f0868cbf8c045d4,
          mid_multiply_79e1cb20a2d72b1b,
          mid_multiply_ecb7aa6c69661c2d,
          mid_multiply_98a65fafe34db74b,
          mid_multiplyMinusI_2f0868cbf8c045d4,
          mid_multiplyPlusI_2f0868cbf8c045d4,
          mid_negate_2f0868cbf8c045d4,
          mid_newInstance_ecb7aa6c69661c2d,
          mid_norm_b74f83833fdad017,
          mid_nthRoot_f8cea93815fe5eaa,
          mid_pow_79e1cb20a2d72b1b,
          mid_pow_ecb7aa6c69661c2d,
          mid_pow_98a65fafe34db74b,
          mid_reciprocal_2f0868cbf8c045d4,
          mid_remainder_79e1cb20a2d72b1b,
          mid_remainder_ecb7aa6c69661c2d,
          mid_rint_2f0868cbf8c045d4,
          mid_rootN_98a65fafe34db74b,
          mid_scalb_98a65fafe34db74b,
          mid_sign_2f0868cbf8c045d4,
          mid_sin_2f0868cbf8c045d4,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_2f0868cbf8c045d4,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_2f0868cbf8c045d4,
          mid_sqrt1z_2f0868cbf8c045d4,
          mid_subtract_79e1cb20a2d72b1b,
          mid_subtract_ecb7aa6c69661c2d,
          mid_tan_2f0868cbf8c045d4,
          mid_tanh_2f0868cbf8c045d4,
          mid_toDegrees_2f0868cbf8c045d4,
          mid_toRadians_2f0868cbf8c045d4,
          mid_toString_1c1fa1e935d6cdcf,
          mid_ulp_2f0868cbf8c045d4,
          mid_valueOf_ecb7aa6c69661c2d,
          mid_valueOf_f8506c9007df888f,
          mid_createComplex_f8506c9007df888f,
          mid_readResolve_541690f9ee81d3ad,
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
