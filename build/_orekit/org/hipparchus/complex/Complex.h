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
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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
          mid_init$_10f281d777284cea,
          mid_init$_ab23f4ae0fb33968,
          mid_abs_921a2f30ecc499e5,
          mid_acos_921a2f30ecc499e5,
          mid_acosh_921a2f30ecc499e5,
          mid_add_4e63ff3bda7c322e,
          mid_add_66023ddbfb4db1a7,
          mid_asin_921a2f30ecc499e5,
          mid_asinh_921a2f30ecc499e5,
          mid_atan_921a2f30ecc499e5,
          mid_atan2_4e63ff3bda7c322e,
          mid_atanh_921a2f30ecc499e5,
          mid_cbrt_921a2f30ecc499e5,
          mid_ceil_921a2f30ecc499e5,
          mid_compareTo_e8a4259e80bac3dc,
          mid_conjugate_921a2f30ecc499e5,
          mid_copySign_4e63ff3bda7c322e,
          mid_copySign_66023ddbfb4db1a7,
          mid_cos_921a2f30ecc499e5,
          mid_cosh_921a2f30ecc499e5,
          mid_divide_4e63ff3bda7c322e,
          mid_divide_66023ddbfb4db1a7,
          mid_equals_221e8e85cb385209,
          mid_equals_1c8187c7f90e54f3,
          mid_equals_c9e48b77087b3986,
          mid_equals_f5292f716bdfed1f,
          mid_equalsWithRelativeTolerance_c9e48b77087b3986,
          mid_exp_921a2f30ecc499e5,
          mid_expm1_921a2f30ecc499e5,
          mid_floor_921a2f30ecc499e5,
          mid_getArgument_557b8123390d8d0c,
          mid_getField_d1dc7459146fba31,
          mid_getImaginary_557b8123390d8d0c,
          mid_getImaginaryPart_557b8123390d8d0c,
          mid_getPi_921a2f30ecc499e5,
          mid_getReal_557b8123390d8d0c,
          mid_getRealPart_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_4e63ff3bda7c322e,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isMathematicalInteger_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_isReal_89b302893bdbe1f1,
          mid_isZero_89b302893bdbe1f1,
          mid_linearCombination_5622c83424d0d8db,
          mid_linearCombination_2c5ed9ccbaf18fdd,
          mid_linearCombination_7d14c7027947a4b0,
          mid_linearCombination_0fc0afd3fc520a12,
          mid_linearCombination_15a046d16a2afc6b,
          mid_linearCombination_d45e1b090a76eb94,
          mid_linearCombination_3459ff13f45baf14,
          mid_linearCombination_077768f5b5b6d641,
          mid_log_921a2f30ecc499e5,
          mid_log10_921a2f30ecc499e5,
          mid_log1p_921a2f30ecc499e5,
          mid_multiply_4e63ff3bda7c322e,
          mid_multiply_66023ddbfb4db1a7,
          mid_multiply_49c3af23f72848c1,
          mid_multiplyMinusI_921a2f30ecc499e5,
          mid_multiplyPlusI_921a2f30ecc499e5,
          mid_negate_921a2f30ecc499e5,
          mid_newInstance_66023ddbfb4db1a7,
          mid_norm_557b8123390d8d0c,
          mid_nthRoot_da0a0ad213c4fa7f,
          mid_pow_4e63ff3bda7c322e,
          mid_pow_66023ddbfb4db1a7,
          mid_pow_49c3af23f72848c1,
          mid_reciprocal_921a2f30ecc499e5,
          mid_remainder_4e63ff3bda7c322e,
          mid_remainder_66023ddbfb4db1a7,
          mid_rint_921a2f30ecc499e5,
          mid_rootN_49c3af23f72848c1,
          mid_scalb_49c3af23f72848c1,
          mid_sign_921a2f30ecc499e5,
          mid_sin_921a2f30ecc499e5,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_921a2f30ecc499e5,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_921a2f30ecc499e5,
          mid_sqrt1z_921a2f30ecc499e5,
          mid_subtract_4e63ff3bda7c322e,
          mid_subtract_66023ddbfb4db1a7,
          mid_tan_921a2f30ecc499e5,
          mid_tanh_921a2f30ecc499e5,
          mid_toDegrees_921a2f30ecc499e5,
          mid_toRadians_921a2f30ecc499e5,
          mid_toString_3cffd47377eca18a,
          mid_ulp_921a2f30ecc499e5,
          mid_valueOf_66023ddbfb4db1a7,
          mid_valueOf_00e4ffdd403af412,
          mid_createComplex_00e4ffdd403af412,
          mid_readResolve_e661fe3ba2fafb22,
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
