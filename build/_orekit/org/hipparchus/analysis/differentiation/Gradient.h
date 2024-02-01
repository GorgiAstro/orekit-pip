#ifndef org_hipparchus_analysis_differentiation_Gradient_H
#define org_hipparchus_analysis_differentiation_Gradient_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class Derivative;
        class Gradient;
        class GradientField;
      }
    }
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class Gradient : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4e382a6827bb5ab6,
            mid_init$_bb630ae4b8ab9248,
            mid_abs_9d89382e9667f8f2,
            mid_acos_9d89382e9667f8f2,
            mid_acosh_9d89382e9667f8f2,
            mid_add_c787c1374ffea9a6,
            mid_add_a02745480e33af17,
            mid_asin_9d89382e9667f8f2,
            mid_asinh_9d89382e9667f8f2,
            mid_atan_9d89382e9667f8f2,
            mid_atan2_c787c1374ffea9a6,
            mid_atanh_9d89382e9667f8f2,
            mid_cbrt_9d89382e9667f8f2,
            mid_ceil_9d89382e9667f8f2,
            mid_compose_79788fd98ed5043c,
            mid_constant_3a4e4a2ef4d0cef8,
            mid_copySign_c787c1374ffea9a6,
            mid_copySign_a02745480e33af17,
            mid_cos_9d89382e9667f8f2,
            mid_cosh_9d89382e9667f8f2,
            mid_divide_c787c1374ffea9a6,
            mid_divide_a02745480e33af17,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_9d89382e9667f8f2,
            mid_expm1_9d89382e9667f8f2,
            mid_floor_9d89382e9667f8f2,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_96a7b143fbea6ef9,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getGradient_be783177b060994b,
            mid_getOrder_d6ab429752e7c267,
            mid_getPartialDerivative_7f744e43a2f098aa,
            mid_getPartialDerivative_ce4c02d583456bc9,
            mid_getPi_9d89382e9667f8f2,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_c787c1374ffea9a6,
            mid_linearCombination_99958680a052ee19,
            mid_linearCombination_cdc08de3ece5adb3,
            mid_linearCombination_5eccced812f07b95,
            mid_linearCombination_47bdf4d42c389022,
            mid_linearCombination_850c09fe98e559b7,
            mid_linearCombination_05b6d17fc9d40440,
            mid_linearCombination_bbd82dad01395811,
            mid_linearCombination_035453087584d40a,
            mid_log_9d89382e9667f8f2,
            mid_log10_9d89382e9667f8f2,
            mid_log1p_9d89382e9667f8f2,
            mid_multiply_c787c1374ffea9a6,
            mid_multiply_a02745480e33af17,
            mid_multiply_37d83d9b8cd1d783,
            mid_negate_9d89382e9667f8f2,
            mid_newInstance_a02745480e33af17,
            mid_pow_c787c1374ffea9a6,
            mid_pow_a02745480e33af17,
            mid_pow_37d83d9b8cd1d783,
            mid_pow_a7a1776857b51e19,
            mid_reciprocal_9d89382e9667f8f2,
            mid_remainder_c787c1374ffea9a6,
            mid_remainder_a02745480e33af17,
            mid_rint_9d89382e9667f8f2,
            mid_rootN_37d83d9b8cd1d783,
            mid_scalb_37d83d9b8cd1d783,
            mid_sign_9d89382e9667f8f2,
            mid_sin_9d89382e9667f8f2,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_9d89382e9667f8f2,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_9d89382e9667f8f2,
            mid_subtract_c787c1374ffea9a6,
            mid_subtract_a02745480e33af17,
            mid_tan_9d89382e9667f8f2,
            mid_tanh_9d89382e9667f8f2,
            mid_taylor_a40ce4fdf6559ac0,
            mid_toDegrees_9d89382e9667f8f2,
            mid_toDerivativeStructure_ce114c5dd035d753,
            mid_toRadians_9d89382e9667f8f2,
            mid_ulp_9d89382e9667f8f2,
            mid_variable_bbdfccc349a0164b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Gradient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Gradient(const Gradient& obj) : ::java::lang::Object(obj) {}

          Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          Gradient(jdouble, const JArray< jdouble > &);

          Gradient abs() const;
          Gradient acos() const;
          Gradient acosh() const;
          Gradient add(const Gradient &) const;
          Gradient add(jdouble) const;
          Gradient asin() const;
          Gradient asinh() const;
          Gradient atan() const;
          Gradient atan2(const Gradient &) const;
          Gradient atanh() const;
          Gradient cbrt() const;
          Gradient ceil() const;
          Gradient compose(const JArray< jdouble > &) const;
          static Gradient constant(jint, jdouble);
          Gradient copySign(const Gradient &) const;
          Gradient copySign(jdouble) const;
          Gradient cos() const;
          Gradient cosh() const;
          Gradient divide(const Gradient &) const;
          Gradient divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          Gradient exp() const;
          Gradient expm1() const;
          Gradient floor() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::GradientField getField() const;
          jint getFreeParameters() const;
          JArray< jdouble > getGradient() const;
          jint getOrder() const;
          jdouble getPartialDerivative(const JArray< jint > &) const;
          jdouble getPartialDerivative(jint) const;
          Gradient getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          Gradient hypot(const Gradient &) const;
          Gradient linearCombination(const JArray< jdouble > &, const JArray< Gradient > &) const;
          Gradient linearCombination(const JArray< Gradient > &, const JArray< Gradient > &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient log() const;
          Gradient log10() const;
          Gradient log1p() const;
          Gradient multiply(const Gradient &) const;
          Gradient multiply(jdouble) const;
          Gradient multiply(jint) const;
          Gradient negate() const;
          Gradient newInstance(jdouble) const;
          Gradient pow(const Gradient &) const;
          Gradient pow(jdouble) const;
          Gradient pow(jint) const;
          static Gradient pow(jdouble, const Gradient &);
          Gradient reciprocal() const;
          Gradient remainder(const Gradient &) const;
          Gradient remainder(jdouble) const;
          Gradient rint() const;
          Gradient rootN(jint) const;
          Gradient scalb(jint) const;
          Gradient sign() const;
          Gradient sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          Gradient sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          Gradient sqrt() const;
          Gradient subtract(const Gradient &) const;
          Gradient subtract(jdouble) const;
          Gradient tan() const;
          Gradient tanh() const;
          jdouble taylor(const JArray< jdouble > &) const;
          Gradient toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          Gradient toRadians() const;
          Gradient ulp() const;
          static Gradient variable(jint, jint, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(Gradient);
        extern PyTypeObject *PY_TYPE(Gradient);

        class t_Gradient {
        public:
          PyObject_HEAD
          Gradient object;
          static PyObject *wrap_Object(const Gradient&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
