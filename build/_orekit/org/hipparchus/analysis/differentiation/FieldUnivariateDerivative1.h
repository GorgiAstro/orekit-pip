#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H

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
        class FieldUnivariateDerivative1Field;
        class FieldUnivariateDerivative1;
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

        class FieldUnivariateDerivative1 : public ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative {
         public:
          enum {
            mid_init$_0d5bbe5a55e94255,
            mid_init$_eee0c82b0b9e16e9,
            mid_abs_faf9f622bb313f1d,
            mid_acos_faf9f622bb313f1d,
            mid_acosh_faf9f622bb313f1d,
            mid_add_3756abfe99784434,
            mid_add_4f53b1a78d86e4a9,
            mid_add_776b315772318bf4,
            mid_asin_faf9f622bb313f1d,
            mid_asinh_faf9f622bb313f1d,
            mid_atan_faf9f622bb313f1d,
            mid_atan2_3756abfe99784434,
            mid_atanh_faf9f622bb313f1d,
            mid_cbrt_faf9f622bb313f1d,
            mid_ceil_faf9f622bb313f1d,
            mid_compose_99107b7eea028191,
            mid_copySign_3756abfe99784434,
            mid_copySign_4f53b1a78d86e4a9,
            mid_copySign_776b315772318bf4,
            mid_cos_faf9f622bb313f1d,
            mid_cosh_faf9f622bb313f1d,
            mid_divide_3756abfe99784434,
            mid_divide_4f53b1a78d86e4a9,
            mid_divide_776b315772318bf4,
            mid_equals_65c7d273e80d497a,
            mid_exp_faf9f622bb313f1d,
            mid_expm1_faf9f622bb313f1d,
            mid_floor_faf9f622bb313f1d,
            mid_getDerivative_93058f0552012043,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_13960e8902011cba,
            mid_getFirstDerivative_eba8e72a22c984ac,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPi_faf9f622bb313f1d,
            mid_getReal_dff5885c2c873297,
            mid_getValue_eba8e72a22c984ac,
            mid_getValueField_5b28be2d3632a5dc,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_3756abfe99784434,
            mid_linearCombination_7477e67148fade45,
            mid_linearCombination_f6fc72e58ad0b372,
            mid_linearCombination_927e2863ff8bbd5a,
            mid_linearCombination_84833ffab2444c53,
            mid_linearCombination_ad7ec14ddbebbf95,
            mid_linearCombination_dae2d10ca222861f,
            mid_linearCombination_aec49115ed7fc040,
            mid_linearCombination_2ca8724db9d3e462,
            mid_linearCombination_9c6292277d9263a0,
            mid_linearCombination_de5081573c870979,
            mid_log_faf9f622bb313f1d,
            mid_log10_faf9f622bb313f1d,
            mid_log1p_faf9f622bb313f1d,
            mid_multiply_3756abfe99784434,
            mid_multiply_4f53b1a78d86e4a9,
            mid_multiply_641724b83819b153,
            mid_multiply_776b315772318bf4,
            mid_negate_faf9f622bb313f1d,
            mid_newInstance_4f53b1a78d86e4a9,
            mid_pow_3756abfe99784434,
            mid_pow_4f53b1a78d86e4a9,
            mid_pow_641724b83819b153,
            mid_pow_2a31a7d43797956f,
            mid_reciprocal_faf9f622bb313f1d,
            mid_remainder_3756abfe99784434,
            mid_remainder_4f53b1a78d86e4a9,
            mid_remainder_776b315772318bf4,
            mid_rint_faf9f622bb313f1d,
            mid_rootN_641724b83819b153,
            mid_scalb_641724b83819b153,
            mid_sign_faf9f622bb313f1d,
            mid_sin_faf9f622bb313f1d,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_faf9f622bb313f1d,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_faf9f622bb313f1d,
            mid_subtract_3756abfe99784434,
            mid_subtract_4f53b1a78d86e4a9,
            mid_subtract_776b315772318bf4,
            mid_tan_faf9f622bb313f1d,
            mid_tanh_faf9f622bb313f1d,
            mid_taylor_616c74807d7607b4,
            mid_taylor_a4b1871f4d29e58b,
            mid_toDegrees_faf9f622bb313f1d,
            mid_toDerivativeStructure_aa5c3ca19ecbe240,
            mid_toRadians_faf9f622bb313f1d,
            mid_ulp_faf9f622bb313f1d,
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
