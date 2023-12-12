#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative2Field;
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class CalculusFieldElement;
    class Field;
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
            mid_init$_d88ba13dc070d10b,
            mid_init$_0f27b0249abd6c51,
            mid_abs_aee8d6ce5ed6f574,
            mid_acos_aee8d6ce5ed6f574,
            mid_acosh_aee8d6ce5ed6f574,
            mid_add_314c5ab19b1e7ee5,
            mid_add_92101798ac001de6,
            mid_add_e0a1ae46064e5a41,
            mid_asin_aee8d6ce5ed6f574,
            mid_asinh_aee8d6ce5ed6f574,
            mid_atan_aee8d6ce5ed6f574,
            mid_atan2_314c5ab19b1e7ee5,
            mid_atanh_aee8d6ce5ed6f574,
            mid_cbrt_aee8d6ce5ed6f574,
            mid_ceil_aee8d6ce5ed6f574,
            mid_compose_802068f56603b9b2,
            mid_copySign_314c5ab19b1e7ee5,
            mid_copySign_92101798ac001de6,
            mid_copySign_e0a1ae46064e5a41,
            mid_cos_aee8d6ce5ed6f574,
            mid_cosh_aee8d6ce5ed6f574,
            mid_divide_314c5ab19b1e7ee5,
            mid_divide_92101798ac001de6,
            mid_divide_e0a1ae46064e5a41,
            mid_equals_221e8e85cb385209,
            mid_exp_aee8d6ce5ed6f574,
            mid_expm1_aee8d6ce5ed6f574,
            mid_floor_aee8d6ce5ed6f574,
            mid_getDerivative_8b3a1c735adfa4bc,
            mid_getExponent_412668abc8d889e9,
            mid_getField_e7e796782f17a108,
            mid_getFirstDerivative_613c8f46c659f636,
            mid_getOrder_412668abc8d889e9,
            mid_getPi_aee8d6ce5ed6f574,
            mid_getReal_557b8123390d8d0c,
            mid_getSecondDerivative_613c8f46c659f636,
            mid_getValue_613c8f46c659f636,
            mid_getValueField_20f98801541dcec1,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_314c5ab19b1e7ee5,
            mid_linearCombination_5881f7f3a7d1887f,
            mid_linearCombination_e85b6771a62ebdf8,
            mid_linearCombination_1c1a89706e9f46c3,
            mid_linearCombination_f6763c61c4dbc8d4,
            mid_linearCombination_206a7fc8be0b44c9,
            mid_linearCombination_2b97b8f02dd7b992,
            mid_linearCombination_9314ade1d8d4a522,
            mid_linearCombination_c38db2770d48e38e,
            mid_linearCombination_4fd80d02815c1f73,
            mid_linearCombination_709b88ebdf414417,
            mid_log_aee8d6ce5ed6f574,
            mid_log10_aee8d6ce5ed6f574,
            mid_log1p_aee8d6ce5ed6f574,
            mid_multiply_314c5ab19b1e7ee5,
            mid_multiply_92101798ac001de6,
            mid_multiply_e936ba5bd5ff4ffc,
            mid_multiply_e0a1ae46064e5a41,
            mid_negate_aee8d6ce5ed6f574,
            mid_newInstance_92101798ac001de6,
            mid_pow_314c5ab19b1e7ee5,
            mid_pow_92101798ac001de6,
            mid_pow_e936ba5bd5ff4ffc,
            mid_pow_0607be742b1e7f69,
            mid_reciprocal_aee8d6ce5ed6f574,
            mid_remainder_314c5ab19b1e7ee5,
            mid_remainder_92101798ac001de6,
            mid_remainder_e0a1ae46064e5a41,
            mid_rint_aee8d6ce5ed6f574,
            mid_rootN_e936ba5bd5ff4ffc,
            mid_scalb_e936ba5bd5ff4ffc,
            mid_sign_aee8d6ce5ed6f574,
            mid_sin_aee8d6ce5ed6f574,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_aee8d6ce5ed6f574,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_aee8d6ce5ed6f574,
            mid_subtract_314c5ab19b1e7ee5,
            mid_subtract_92101798ac001de6,
            mid_subtract_e0a1ae46064e5a41,
            mid_tan_aee8d6ce5ed6f574,
            mid_tanh_aee8d6ce5ed6f574,
            mid_taylor_94d37e81a3238af8,
            mid_taylor_6672ad854985cb64,
            mid_toDegrees_aee8d6ce5ed6f574,
            mid_toDerivativeStructure_5997f22f8d76210e,
            mid_toRadians_aee8d6ce5ed6f574,
            mid_ulp_aee8d6ce5ed6f574,
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
