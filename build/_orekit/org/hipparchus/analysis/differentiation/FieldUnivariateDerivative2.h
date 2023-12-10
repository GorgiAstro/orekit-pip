#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative2;
        class FieldUnivariateDerivative2Field;
        class FieldDerivativeStructure;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
            mid_init$_0d5bbe5a55e94255,
            mid_init$_82fa7e789a6ae1f6,
            mid_abs_42c313632b3465ae,
            mid_acos_42c313632b3465ae,
            mid_acosh_42c313632b3465ae,
            mid_add_c18449b7f042a1b8,
            mid_add_4fc28646933b5213,
            mid_add_780d61ccd82df8ec,
            mid_asin_42c313632b3465ae,
            mid_asinh_42c313632b3465ae,
            mid_atan_42c313632b3465ae,
            mid_atan2_c18449b7f042a1b8,
            mid_atanh_42c313632b3465ae,
            mid_cbrt_42c313632b3465ae,
            mid_ceil_42c313632b3465ae,
            mid_compose_3602d6ea62e0f71e,
            mid_copySign_c18449b7f042a1b8,
            mid_copySign_4fc28646933b5213,
            mid_copySign_780d61ccd82df8ec,
            mid_cos_42c313632b3465ae,
            mid_cosh_42c313632b3465ae,
            mid_divide_c18449b7f042a1b8,
            mid_divide_4fc28646933b5213,
            mid_divide_780d61ccd82df8ec,
            mid_equals_65c7d273e80d497a,
            mid_exp_42c313632b3465ae,
            mid_expm1_42c313632b3465ae,
            mid_floor_42c313632b3465ae,
            mid_getDerivative_93058f0552012043,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_3afe7a2c5b4ea8f1,
            mid_getFirstDerivative_eba8e72a22c984ac,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPi_42c313632b3465ae,
            mid_getReal_dff5885c2c873297,
            mid_getSecondDerivative_eba8e72a22c984ac,
            mid_getValue_eba8e72a22c984ac,
            mid_getValueField_5b28be2d3632a5dc,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_c18449b7f042a1b8,
            mid_linearCombination_4019647bb8226afc,
            mid_linearCombination_202e5aee1846f462,
            mid_linearCombination_9cef960231a0721c,
            mid_linearCombination_b7469ef9955415ed,
            mid_linearCombination_879e5b578f4c347d,
            mid_linearCombination_ced98c2116851204,
            mid_linearCombination_d59caff1cee25515,
            mid_linearCombination_233040760d99b581,
            mid_linearCombination_85f0c4ae69457fd4,
            mid_linearCombination_bf345706cb134385,
            mid_log_42c313632b3465ae,
            mid_log10_42c313632b3465ae,
            mid_log1p_42c313632b3465ae,
            mid_multiply_c18449b7f042a1b8,
            mid_multiply_4fc28646933b5213,
            mid_multiply_973e6cd933e7c12b,
            mid_multiply_780d61ccd82df8ec,
            mid_negate_42c313632b3465ae,
            mid_newInstance_4fc28646933b5213,
            mid_pow_c18449b7f042a1b8,
            mid_pow_4fc28646933b5213,
            mid_pow_973e6cd933e7c12b,
            mid_pow_1d84cb73dc672630,
            mid_reciprocal_42c313632b3465ae,
            mid_remainder_c18449b7f042a1b8,
            mid_remainder_4fc28646933b5213,
            mid_remainder_780d61ccd82df8ec,
            mid_rint_42c313632b3465ae,
            mid_rootN_973e6cd933e7c12b,
            mid_scalb_973e6cd933e7c12b,
            mid_sign_42c313632b3465ae,
            mid_sin_42c313632b3465ae,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_42c313632b3465ae,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_42c313632b3465ae,
            mid_subtract_c18449b7f042a1b8,
            mid_subtract_4fc28646933b5213,
            mid_subtract_780d61ccd82df8ec,
            mid_tan_42c313632b3465ae,
            mid_tanh_42c313632b3465ae,
            mid_taylor_616c74807d7607b4,
            mid_taylor_a4b1871f4d29e58b,
            mid_toDegrees_42c313632b3465ae,
            mid_toDerivativeStructure_aa5c3ca19ecbe240,
            mid_toRadians_42c313632b3465ae,
            mid_ulp_42c313632b3465ae,
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
