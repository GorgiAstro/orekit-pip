#ifndef org_hipparchus_analysis_differentiation_Gradient_H
#define org_hipparchus_analysis_differentiation_Gradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class GradientField;
        class Derivative;
        class Gradient;
        class DerivativeStructure;
      }
    }
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
            mid_init$_ff2e40d13a189b48,
            mid_init$_f617b8481082c6ea,
            mid_abs_cc2f4e0a456f51de,
            mid_acos_cc2f4e0a456f51de,
            mid_acosh_cc2f4e0a456f51de,
            mid_add_8d97bcb0cb8ef664,
            mid_add_f02fa7769dd26af8,
            mid_asin_cc2f4e0a456f51de,
            mid_asinh_cc2f4e0a456f51de,
            mid_atan_cc2f4e0a456f51de,
            mid_atan2_8d97bcb0cb8ef664,
            mid_atanh_cc2f4e0a456f51de,
            mid_cbrt_cc2f4e0a456f51de,
            mid_ceil_cc2f4e0a456f51de,
            mid_compose_891e66590aff07a5,
            mid_constant_487bb7e647e22309,
            mid_copySign_8d97bcb0cb8ef664,
            mid_copySign_f02fa7769dd26af8,
            mid_cos_cc2f4e0a456f51de,
            mid_cosh_cc2f4e0a456f51de,
            mid_divide_8d97bcb0cb8ef664,
            mid_divide_f02fa7769dd26af8,
            mid_equals_65c7d273e80d497a,
            mid_exp_cc2f4e0a456f51de,
            mid_expm1_cc2f4e0a456f51de,
            mid_floor_cc2f4e0a456f51de,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_95de3da39edef43e,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getGradient_60c7040667a7dc5c,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_48330f48ce3d930b,
            mid_getPartialDerivative_46f85b53d9aedd96,
            mid_getPi_cc2f4e0a456f51de,
            mid_getReal_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_8d97bcb0cb8ef664,
            mid_linearCombination_4c95feae0c1b039f,
            mid_linearCombination_5e2cd906c44368d9,
            mid_linearCombination_2ec80775a1d2fdcb,
            mid_linearCombination_9f7acdc80e930088,
            mid_linearCombination_e2eb1d83443da5ff,
            mid_linearCombination_08be119d3e8d3fdd,
            mid_linearCombination_9fc013f20e253228,
            mid_linearCombination_ed5bc80f3bfed0e8,
            mid_log_cc2f4e0a456f51de,
            mid_log10_cc2f4e0a456f51de,
            mid_log1p_cc2f4e0a456f51de,
            mid_multiply_8d97bcb0cb8ef664,
            mid_multiply_f02fa7769dd26af8,
            mid_multiply_09473def8ae95614,
            mid_negate_cc2f4e0a456f51de,
            mid_newInstance_f02fa7769dd26af8,
            mid_pow_8d97bcb0cb8ef664,
            mid_pow_f02fa7769dd26af8,
            mid_pow_09473def8ae95614,
            mid_pow_6b5c2cf44f4fe5ce,
            mid_reciprocal_cc2f4e0a456f51de,
            mid_remainder_8d97bcb0cb8ef664,
            mid_remainder_f02fa7769dd26af8,
            mid_rint_cc2f4e0a456f51de,
            mid_rootN_09473def8ae95614,
            mid_scalb_09473def8ae95614,
            mid_sign_cc2f4e0a456f51de,
            mid_sin_cc2f4e0a456f51de,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_cc2f4e0a456f51de,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_cc2f4e0a456f51de,
            mid_subtract_8d97bcb0cb8ef664,
            mid_subtract_f02fa7769dd26af8,
            mid_tan_cc2f4e0a456f51de,
            mid_tanh_cc2f4e0a456f51de,
            mid_taylor_9dc1ec0bcc0a9a29,
            mid_toDegrees_cc2f4e0a456f51de,
            mid_toDerivativeStructure_73e277cbd957031a,
            mid_toRadians_cc2f4e0a456f51de,
            mid_ulp_cc2f4e0a456f51de,
            mid_variable_11a97b17f1817abe,
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
