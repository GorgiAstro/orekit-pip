#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative1Field;
        class FieldUnivariateDerivative1;
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

        class FieldUnivariateDerivative1 : public ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative {
         public:
          enum {
            mid_init$_d88ba13dc070d10b,
            mid_init$_b38c15e176684020,
            mid_abs_b4ea14898e256f1c,
            mid_acos_b4ea14898e256f1c,
            mid_acosh_b4ea14898e256f1c,
            mid_add_67f4f82d7b8b744f,
            mid_add_3f2e158de9526a72,
            mid_add_6d1056b1d1edff6b,
            mid_asin_b4ea14898e256f1c,
            mid_asinh_b4ea14898e256f1c,
            mid_atan_b4ea14898e256f1c,
            mid_atan2_67f4f82d7b8b744f,
            mid_atanh_b4ea14898e256f1c,
            mid_cbrt_b4ea14898e256f1c,
            mid_ceil_b4ea14898e256f1c,
            mid_compose_9fd7df53ee321921,
            mid_copySign_67f4f82d7b8b744f,
            mid_copySign_3f2e158de9526a72,
            mid_copySign_6d1056b1d1edff6b,
            mid_cos_b4ea14898e256f1c,
            mid_cosh_b4ea14898e256f1c,
            mid_divide_67f4f82d7b8b744f,
            mid_divide_3f2e158de9526a72,
            mid_divide_6d1056b1d1edff6b,
            mid_equals_221e8e85cb385209,
            mid_exp_b4ea14898e256f1c,
            mid_expm1_b4ea14898e256f1c,
            mid_floor_b4ea14898e256f1c,
            mid_getDerivative_8b3a1c735adfa4bc,
            mid_getExponent_412668abc8d889e9,
            mid_getField_146b60b5cdae04b0,
            mid_getFirstDerivative_613c8f46c659f636,
            mid_getOrder_412668abc8d889e9,
            mid_getPi_b4ea14898e256f1c,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_613c8f46c659f636,
            mid_getValueField_20f98801541dcec1,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_67f4f82d7b8b744f,
            mid_linearCombination_360dfcbb1818a79e,
            mid_linearCombination_000fbcee29cfb91a,
            mid_linearCombination_3581273c54d7dbe0,
            mid_linearCombination_0a93d6e3a8b0e31e,
            mid_linearCombination_80a62b824f329503,
            mid_linearCombination_01e0669ea4fb1053,
            mid_linearCombination_54adcc7e034cf733,
            mid_linearCombination_9135c7a0b16e07ab,
            mid_linearCombination_498747925f19b890,
            mid_linearCombination_444637aa8445bb57,
            mid_log_b4ea14898e256f1c,
            mid_log10_b4ea14898e256f1c,
            mid_log1p_b4ea14898e256f1c,
            mid_multiply_67f4f82d7b8b744f,
            mid_multiply_3f2e158de9526a72,
            mid_multiply_ca783a406dbffafa,
            mid_multiply_6d1056b1d1edff6b,
            mid_negate_b4ea14898e256f1c,
            mid_newInstance_3f2e158de9526a72,
            mid_pow_67f4f82d7b8b744f,
            mid_pow_3f2e158de9526a72,
            mid_pow_ca783a406dbffafa,
            mid_pow_d5b95cca2a28af0a,
            mid_reciprocal_b4ea14898e256f1c,
            mid_remainder_67f4f82d7b8b744f,
            mid_remainder_3f2e158de9526a72,
            mid_remainder_6d1056b1d1edff6b,
            mid_rint_b4ea14898e256f1c,
            mid_rootN_ca783a406dbffafa,
            mid_scalb_ca783a406dbffafa,
            mid_sign_b4ea14898e256f1c,
            mid_sin_b4ea14898e256f1c,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_b4ea14898e256f1c,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_b4ea14898e256f1c,
            mid_subtract_67f4f82d7b8b744f,
            mid_subtract_3f2e158de9526a72,
            mid_subtract_6d1056b1d1edff6b,
            mid_tan_b4ea14898e256f1c,
            mid_tanh_b4ea14898e256f1c,
            mid_taylor_94d37e81a3238af8,
            mid_taylor_6672ad854985cb64,
            mid_toDegrees_b4ea14898e256f1c,
            mid_toDerivativeStructure_5997f22f8d76210e,
            mid_toRadians_b4ea14898e256f1c,
            mid_ulp_b4ea14898e256f1c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative1(jobject obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative1(const FieldUnivariateDerivative1& obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {}

          FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure &);
          FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          FieldUnivariateDerivative1 abs() const;
          FieldUnivariateDerivative1 acos() const;
          FieldUnivariateDerivative1 acosh() const;
          FieldUnivariateDerivative1 add(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 add(jdouble) const;
          FieldUnivariateDerivative1 add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 asin() const;
          FieldUnivariateDerivative1 asinh() const;
          FieldUnivariateDerivative1 atan() const;
          FieldUnivariateDerivative1 atan2(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 atanh() const;
          FieldUnivariateDerivative1 cbrt() const;
          FieldUnivariateDerivative1 ceil() const;
          FieldUnivariateDerivative1 compose(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 copySign(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 copySign(jdouble) const;
          FieldUnivariateDerivative1 copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 cos() const;
          FieldUnivariateDerivative1 cosh() const;
          FieldUnivariateDerivative1 divide(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 divide(jdouble) const;
          FieldUnivariateDerivative1 divide(const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean equals(const ::java::lang::Object &) const;
          FieldUnivariateDerivative1 exp() const;
          FieldUnivariateDerivative1 expm1() const;
          FieldUnivariateDerivative1 floor() const;
          ::org::hipparchus::CalculusFieldElement getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field getField() const;
          ::org::hipparchus::CalculusFieldElement getFirstDerivative() const;
          jint getOrder() const;
          FieldUnivariateDerivative1 getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          ::org::hipparchus::Field getValueField() const;
          jint hashCode() const;
          FieldUnivariateDerivative1 hypot(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(const JArray< jdouble > &, const JArray< FieldUnivariateDerivative1 > &) const;
          FieldUnivariateDerivative1 linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldUnivariateDerivative1 > &) const;
          FieldUnivariateDerivative1 linearCombination(const JArray< FieldUnivariateDerivative1 > &, const JArray< FieldUnivariateDerivative1 > &) const;
          FieldUnivariateDerivative1 linearCombination(const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative1 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative1 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 linearCombination(jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &, jdouble, const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 log() const;
          FieldUnivariateDerivative1 log10() const;
          FieldUnivariateDerivative1 log1p() const;
          FieldUnivariateDerivative1 multiply(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 multiply(jdouble) const;
          FieldUnivariateDerivative1 multiply(jint) const;
          FieldUnivariateDerivative1 multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 negate() const;
          FieldUnivariateDerivative1 newInstance(jdouble) const;
          FieldUnivariateDerivative1 pow(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 pow(jdouble) const;
          FieldUnivariateDerivative1 pow(jint) const;
          static FieldUnivariateDerivative1 pow(jdouble, const FieldUnivariateDerivative1 &);
          FieldUnivariateDerivative1 reciprocal() const;
          FieldUnivariateDerivative1 remainder(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 remainder(jdouble) const;
          FieldUnivariateDerivative1 remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 rint() const;
          FieldUnivariateDerivative1 rootN(jint) const;
          FieldUnivariateDerivative1 scalb(jint) const;
          FieldUnivariateDerivative1 sign() const;
          FieldUnivariateDerivative1 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldUnivariateDerivative1 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldUnivariateDerivative1 sqrt() const;
          FieldUnivariateDerivative1 subtract(const FieldUnivariateDerivative1 &) const;
          FieldUnivariateDerivative1 subtract(jdouble) const;
          FieldUnivariateDerivative1 subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 tan() const;
          FieldUnivariateDerivative1 tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(jdouble) const;
          ::org::hipparchus::CalculusFieldElement taylor(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative1 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
          FieldUnivariateDerivative1 toRadians() const;
          FieldUnivariateDerivative1 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative1);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative1);

        class t_FieldUnivariateDerivative1 {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative1 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative1 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative1&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative1&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
