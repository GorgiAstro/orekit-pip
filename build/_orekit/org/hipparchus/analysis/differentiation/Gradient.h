#ifndef org_hipparchus_analysis_differentiation_Gradient_H
#define org_hipparchus_analysis_differentiation_Gradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class DerivativeStructure;
        class GradientField;
        class Gradient;
      }
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
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
            mid_init$_0e3cd27f693a0167,
            mid_init$_d606d0c99c70c093,
            mid_abs_9ebd7c8cd097159e,
            mid_acos_9ebd7c8cd097159e,
            mid_acosh_9ebd7c8cd097159e,
            mid_add_9b1a3ae9e0ac7e32,
            mid_add_5eb1debe4f65ff5a,
            mid_asin_9ebd7c8cd097159e,
            mid_asinh_9ebd7c8cd097159e,
            mid_atan_9ebd7c8cd097159e,
            mid_atan2_9b1a3ae9e0ac7e32,
            mid_atanh_9ebd7c8cd097159e,
            mid_cbrt_9ebd7c8cd097159e,
            mid_ceil_9ebd7c8cd097159e,
            mid_compose_c3aae14f07b60c68,
            mid_constant_df267c66631d91fe,
            mid_copySign_9b1a3ae9e0ac7e32,
            mid_copySign_5eb1debe4f65ff5a,
            mid_cos_9ebd7c8cd097159e,
            mid_cosh_9ebd7c8cd097159e,
            mid_divide_9b1a3ae9e0ac7e32,
            mid_divide_5eb1debe4f65ff5a,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_9ebd7c8cd097159e,
            mid_expm1_9ebd7c8cd097159e,
            mid_floor_9ebd7c8cd097159e,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_dff37536788c3f97,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getGradient_25e1757a36c4dde2,
            mid_getOrder_55546ef6a647f39b,
            mid_getPartialDerivative_bff393394ab19dc1,
            mid_getPartialDerivative_2afcbc21f4e57ab2,
            mid_getPi_9ebd7c8cd097159e,
            mid_getReal_b74f83833fdad017,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_9b1a3ae9e0ac7e32,
            mid_linearCombination_ff76b575c79dcae0,
            mid_linearCombination_50c639d1bc27cc1e,
            mid_linearCombination_ffa1d8dbf700c622,
            mid_linearCombination_3a16762f5e07b373,
            mid_linearCombination_2231afe4b94cdb85,
            mid_linearCombination_1e876d4c555ad898,
            mid_linearCombination_63f831368342f465,
            mid_linearCombination_380254f19e011dd1,
            mid_log_9ebd7c8cd097159e,
            mid_log10_9ebd7c8cd097159e,
            mid_log1p_9ebd7c8cd097159e,
            mid_multiply_9b1a3ae9e0ac7e32,
            mid_multiply_5eb1debe4f65ff5a,
            mid_multiply_8151ef547ff6d2dc,
            mid_negate_9ebd7c8cd097159e,
            mid_newInstance_5eb1debe4f65ff5a,
            mid_pow_9b1a3ae9e0ac7e32,
            mid_pow_5eb1debe4f65ff5a,
            mid_pow_8151ef547ff6d2dc,
            mid_pow_6383ea7841cc0c7c,
            mid_reciprocal_9ebd7c8cd097159e,
            mid_remainder_9b1a3ae9e0ac7e32,
            mid_remainder_5eb1debe4f65ff5a,
            mid_rint_9ebd7c8cd097159e,
            mid_rootN_8151ef547ff6d2dc,
            mid_scalb_8151ef547ff6d2dc,
            mid_sign_9ebd7c8cd097159e,
            mid_sin_9ebd7c8cd097159e,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_9ebd7c8cd097159e,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_9ebd7c8cd097159e,
            mid_subtract_9b1a3ae9e0ac7e32,
            mid_subtract_5eb1debe4f65ff5a,
            mid_tan_9ebd7c8cd097159e,
            mid_tanh_9ebd7c8cd097159e,
            mid_taylor_b060e4326765ccf1,
            mid_toDegrees_9ebd7c8cd097159e,
            mid_toDerivativeStructure_57983c4d4b4a2f7f,
            mid_toRadians_9ebd7c8cd097159e,
            mid_ulp_9ebd7c8cd097159e,
            mid_variable_e77846904fb26f57,
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
