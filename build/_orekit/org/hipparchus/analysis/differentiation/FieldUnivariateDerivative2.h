#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2Field;
        class FieldUnivariateDerivative2;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class FieldUnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative {
         public:
          enum {
            mid_init$_d464f1870c2dee26,
            mid_init$_f9ea60a8dc2d69fb,
            mid_abs_4354ae7624bd9782,
            mid_acos_4354ae7624bd9782,
            mid_acosh_4354ae7624bd9782,
            mid_add_db283754f165d955,
            mid_add_4f74e0f57811e3fb,
            mid_add_4f9cdf8f86985fad,
            mid_asin_4354ae7624bd9782,
            mid_asinh_4354ae7624bd9782,
            mid_atan_4354ae7624bd9782,
            mid_atan2_db283754f165d955,
            mid_atanh_4354ae7624bd9782,
            mid_cbrt_4354ae7624bd9782,
            mid_ceil_4354ae7624bd9782,
            mid_compose_3135193dd23a5a05,
            mid_copySign_db283754f165d955,
            mid_copySign_4f74e0f57811e3fb,
            mid_copySign_4f9cdf8f86985fad,
            mid_cos_4354ae7624bd9782,
            mid_cosh_4354ae7624bd9782,
            mid_divide_db283754f165d955,
            mid_divide_4f74e0f57811e3fb,
            mid_divide_4f9cdf8f86985fad,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_4354ae7624bd9782,
            mid_expm1_4354ae7624bd9782,
            mid_floor_4354ae7624bd9782,
            mid_getDerivative_dfcf702144fd7bc1,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_b6828db084af3a65,
            mid_getFirstDerivative_08d37e3f77b7239d,
            mid_getOrder_d6ab429752e7c267,
            mid_getPi_4354ae7624bd9782,
            mid_getReal_9981f74b2d109da6,
            mid_getSecondDerivative_08d37e3f77b7239d,
            mid_getValue_08d37e3f77b7239d,
            mid_getValueField_577649682b9910c1,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_db283754f165d955,
            mid_linearCombination_95658a9fe5ae4758,
            mid_linearCombination_8212ed6c2f6c3478,
            mid_linearCombination_5cc822feca9d6afa,
            mid_linearCombination_d7343cac3281f252,
            mid_linearCombination_6a3c0ff58461c619,
            mid_linearCombination_fd9fc6f15f77b205,
            mid_linearCombination_91e2a28a1fda626c,
            mid_linearCombination_a7170c2a89a07dce,
            mid_linearCombination_512cdf1e63c7d585,
            mid_linearCombination_7e5914f45f163ae8,
            mid_log_4354ae7624bd9782,
            mid_log10_4354ae7624bd9782,
            mid_log1p_4354ae7624bd9782,
            mid_multiply_db283754f165d955,
            mid_multiply_4f74e0f57811e3fb,
            mid_multiply_1556512fd2e3e257,
            mid_multiply_4f9cdf8f86985fad,
            mid_negate_4354ae7624bd9782,
            mid_newInstance_4f74e0f57811e3fb,
            mid_pow_db283754f165d955,
            mid_pow_4f74e0f57811e3fb,
            mid_pow_1556512fd2e3e257,
            mid_pow_2f18e0290464ea64,
            mid_reciprocal_4354ae7624bd9782,
            mid_remainder_db283754f165d955,
            mid_remainder_4f74e0f57811e3fb,
            mid_remainder_4f9cdf8f86985fad,
            mid_rint_4354ae7624bd9782,
            mid_rootN_1556512fd2e3e257,
            mid_scalb_1556512fd2e3e257,
            mid_sign_4354ae7624bd9782,
            mid_sin_4354ae7624bd9782,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_4354ae7624bd9782,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_4354ae7624bd9782,
            mid_subtract_db283754f165d955,
            mid_subtract_4f74e0f57811e3fb,
            mid_subtract_4f9cdf8f86985fad,
            mid_tan_4354ae7624bd9782,
            mid_tanh_4354ae7624bd9782,
            mid_taylor_e3d0ff3c0584eadf,
            mid_taylor_a3b854adede8eaaa,
            mid_toDegrees_4354ae7624bd9782,
            mid_toDerivativeStructure_b363d6ebd90353bf,
            mid_toRadians_4354ae7624bd9782,
            mid_ulp_4354ae7624bd9782,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative2(jobject obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative2(const FieldUnivariateDerivative2& obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {}

          FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure &);
          FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          FieldUnivariateDerivative2 abs() const;
          FieldUnivariateDerivative2 acos() const;
          FieldUnivariateDerivative2 acosh() const;
          FieldUnivariateDerivative2 add(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 add(jdouble) const;
          FieldUnivariateDerivative2 add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 asin() const;
          FieldUnivariateDerivative2 asinh() const;
          FieldUnivariateDerivative2 atan() const;
          FieldUnivariateDerivative2 atan2(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 atanh() const;
          FieldUnivariateDerivative2 cbrt() const;
          FieldUnivariateDerivative2 ceil() const;
          FieldUnivariateDerivative2 compose(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 copySign(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 copySign(jdouble) const;
          FieldUnivariateDerivative2 copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 cos() const;
          FieldUnivariateDerivative2 cosh() const;
          FieldUnivariateDerivative2 divide(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 divide(jdouble) const;
          FieldUnivariateDerivative2 divide(const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean equals(const ::java::lang::Object &) const;
          FieldUnivariateDerivative2 exp() const;
          FieldUnivariateDerivative2 expm1() const;
          FieldUnivariateDerivative2 floor() const;
          ::org::hipparchus::CalculusFieldElement getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field getField() const;
          ::org::hipparchus::CalculusFieldElement getFirstDerivative() const;
          jint getOrder() const;
          FieldUnivariateDerivative2 getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getSecondDerivative() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          ::org::hipparchus::Field getValueField() const;
          jint hashCode() const;
          FieldUnivariateDerivative2 hypot(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< jdouble > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< FieldUnivariateDerivative2 > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 log() const;
          FieldUnivariateDerivative2 log10() const;
          FieldUnivariateDerivative2 log1p() const;
          FieldUnivariateDerivative2 multiply(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 multiply(jdouble) const;
          FieldUnivariateDerivative2 multiply(jint) const;
          FieldUnivariateDerivative2 multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 negate() const;
          FieldUnivariateDerivative2 newInstance(jdouble) const;
          FieldUnivariateDerivative2 pow(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 pow(jdouble) const;
          FieldUnivariateDerivative2 pow(jint) const;
          static FieldUnivariateDerivative2 pow(jdouble, const FieldUnivariateDerivative2 &);
          FieldUnivariateDerivative2 reciprocal() const;
          FieldUnivariateDerivative2 remainder(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 remainder(jdouble) const;
          FieldUnivariateDerivative2 remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 rint() const;
          FieldUnivariateDerivative2 rootN(jint) const;
          FieldUnivariateDerivative2 scalb(jint) const;
          FieldUnivariateDerivative2 sign() const;
          FieldUnivariateDerivative2 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldUnivariateDerivative2 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldUnivariateDerivative2 sqrt() const;
          FieldUnivariateDerivative2 subtract(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 subtract(jdouble) const;
          FieldUnivariateDerivative2 subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 tan() const;
          FieldUnivariateDerivative2 tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(jdouble) const;
          ::org::hipparchus::CalculusFieldElement taylor(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
          FieldUnivariateDerivative2 toRadians() const;
          FieldUnivariateDerivative2 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative2);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative2);

        class t_FieldUnivariateDerivative2 {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative2 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative2 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative2&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative2&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
