#ifndef org_hipparchus_complex_Complex_H
#define org_hipparchus_complex_Complex_H

#include "java/lang/Object.h"

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
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class CalculusFieldElement;
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
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_13edac039e8cc967,
          mid_abs_847706ebd9444ecb,
          mid_acos_847706ebd9444ecb,
          mid_acosh_847706ebd9444ecb,
          mid_add_48ac0ef047162b30,
          mid_add_89b4417f39f77363,
          mid_asin_847706ebd9444ecb,
          mid_asinh_847706ebd9444ecb,
          mid_atan_847706ebd9444ecb,
          mid_atan2_48ac0ef047162b30,
          mid_atanh_847706ebd9444ecb,
          mid_cbrt_847706ebd9444ecb,
          mid_ceil_847706ebd9444ecb,
          mid_compareTo_a8ec45e4f53695b4,
          mid_conjugate_847706ebd9444ecb,
          mid_copySign_48ac0ef047162b30,
          mid_copySign_89b4417f39f77363,
          mid_cos_847706ebd9444ecb,
          mid_cosh_847706ebd9444ecb,
          mid_divide_48ac0ef047162b30,
          mid_divide_89b4417f39f77363,
          mid_equals_72faff9b05f5ed5e,
          mid_equals_32043b8b8fa00039,
          mid_equals_e037ae7697a7a9da,
          mid_equals_9830c70292e6ba83,
          mid_equalsWithRelativeTolerance_e037ae7697a7a9da,
          mid_exp_847706ebd9444ecb,
          mid_expm1_847706ebd9444ecb,
          mid_floor_847706ebd9444ecb,
          mid_getArgument_9981f74b2d109da6,
          mid_getField_4c88b6ea55d5fcec,
          mid_getImaginary_9981f74b2d109da6,
          mid_getImaginaryPart_9981f74b2d109da6,
          mid_getPi_847706ebd9444ecb,
          mid_getReal_9981f74b2d109da6,
          mid_getRealPart_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_48ac0ef047162b30,
          mid_isInfinite_eee3de00fe971136,
          mid_isMathematicalInteger_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_isReal_eee3de00fe971136,
          mid_isZero_eee3de00fe971136,
          mid_linearCombination_0bc667d534c4fcca,
          mid_linearCombination_aa882037f664468a,
          mid_linearCombination_68c85ce87a0825b2,
          mid_linearCombination_b3c9b33fab4fa541,
          mid_linearCombination_f26d1bae0407a834,
          mid_linearCombination_f0804d4bd6ca6b25,
          mid_linearCombination_6a4823b53cb9c1c5,
          mid_linearCombination_c58b5260c8660dc8,
          mid_log_847706ebd9444ecb,
          mid_log10_847706ebd9444ecb,
          mid_log1p_847706ebd9444ecb,
          mid_multiply_48ac0ef047162b30,
          mid_multiply_89b4417f39f77363,
          mid_multiply_1e8f748d6dce69c5,
          mid_multiplyMinusI_847706ebd9444ecb,
          mid_multiplyPlusI_847706ebd9444ecb,
          mid_negate_847706ebd9444ecb,
          mid_newInstance_89b4417f39f77363,
          mid_norm_9981f74b2d109da6,
          mid_nthRoot_11883c1c01a1aa4c,
          mid_pow_48ac0ef047162b30,
          mid_pow_89b4417f39f77363,
          mid_pow_1e8f748d6dce69c5,
          mid_reciprocal_847706ebd9444ecb,
          mid_remainder_48ac0ef047162b30,
          mid_remainder_89b4417f39f77363,
          mid_rint_847706ebd9444ecb,
          mid_rootN_1e8f748d6dce69c5,
          mid_scalb_1e8f748d6dce69c5,
          mid_sign_847706ebd9444ecb,
          mid_sin_847706ebd9444ecb,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_847706ebd9444ecb,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_847706ebd9444ecb,
          mid_sqrt1z_847706ebd9444ecb,
          mid_subtract_48ac0ef047162b30,
          mid_subtract_89b4417f39f77363,
          mid_tan_847706ebd9444ecb,
          mid_tanh_847706ebd9444ecb,
          mid_toDegrees_847706ebd9444ecb,
          mid_toRadians_847706ebd9444ecb,
          mid_toString_d2c8eb4129821f0e,
          mid_ulp_847706ebd9444ecb,
          mid_valueOf_89b4417f39f77363,
          mid_valueOf_4e58ab40c2f85d5e,
          mid_createComplex_4e58ab40c2f85d5e,
          mid_readResolve_704a5bee58538972,
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
