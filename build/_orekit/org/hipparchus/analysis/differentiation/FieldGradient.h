#ifndef org_hipparchus_analysis_differentiation_FieldGradient_H
#define org_hipparchus_analysis_differentiation_FieldGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
        class FieldDerivativeStructure;
        class FieldGradientField;
        class FieldGradient;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class FieldGradient : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d88ba13dc070d10b,
            mid_init$_960efa47e0a8eec2,
            mid_abs_fc34f2fa32af76f3,
            mid_acos_fc34f2fa32af76f3,
            mid_acosh_fc34f2fa32af76f3,
            mid_add_6adaf4b79c4224b7,
            mid_add_7026fbe694870993,
            mid_add_d903750b39e554a2,
            mid_asin_fc34f2fa32af76f3,
            mid_asinh_fc34f2fa32af76f3,
            mid_atan_fc34f2fa32af76f3,
            mid_atan2_6adaf4b79c4224b7,
            mid_atanh_fc34f2fa32af76f3,
            mid_cbrt_fc34f2fa32af76f3,
            mid_ceil_fc34f2fa32af76f3,
            mid_compose_b61c7fae0a12297b,
            mid_constant_32575b33be5d0a59,
            mid_copySign_6adaf4b79c4224b7,
            mid_copySign_7026fbe694870993,
            mid_copySign_d903750b39e554a2,
            mid_cos_fc34f2fa32af76f3,
            mid_cosh_fc34f2fa32af76f3,
            mid_divide_6adaf4b79c4224b7,
            mid_divide_7026fbe694870993,
            mid_divide_d903750b39e554a2,
            mid_equals_221e8e85cb385209,
            mid_exp_fc34f2fa32af76f3,
            mid_expm1_fc34f2fa32af76f3,
            mid_floor_fc34f2fa32af76f3,
            mid_getExponent_412668abc8d889e9,
            mid_getField_2a49048a02bcf730,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getGradient_41762fd4377ff26e,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_12d47fa54f2033ee,
            mid_getPartialDerivative_8b3a1c735adfa4bc,
            mid_getPi_fc34f2fa32af76f3,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_613c8f46c659f636,
            mid_getValueField_20f98801541dcec1,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_6adaf4b79c4224b7,
            mid_linearCombination_b59f331852eb7c71,
            mid_linearCombination_cdbc88b0e983a2ae,
            mid_linearCombination_274452b16ec2c300,
            mid_linearCombination_fa3046b02c3efd7a,
            mid_linearCombination_15082e4564257c73,
            mid_linearCombination_e3f5d785b5d1f2e5,
            mid_linearCombination_0034a3516c99ab56,
            mid_linearCombination_d91ddfb2d4776c1f,
            mid_linearCombination_da1e813663ef1b77,
            mid_linearCombination_4933cc47e9448bfa,
            mid_log_fc34f2fa32af76f3,
            mid_log10_fc34f2fa32af76f3,
            mid_log1p_fc34f2fa32af76f3,
            mid_multiply_6adaf4b79c4224b7,
            mid_multiply_7026fbe694870993,
            mid_multiply_6cbe28bfc06a25a7,
            mid_multiply_d903750b39e554a2,
            mid_negate_fc34f2fa32af76f3,
            mid_newInstance_7026fbe694870993,
            mid_newInstance_d903750b39e554a2,
            mid_pow_6adaf4b79c4224b7,
            mid_pow_7026fbe694870993,
            mid_pow_6cbe28bfc06a25a7,
            mid_pow_36b95f8d1fa74c1e,
            mid_reciprocal_fc34f2fa32af76f3,
            mid_remainder_6adaf4b79c4224b7,
            mid_remainder_7026fbe694870993,
            mid_remainder_d903750b39e554a2,
            mid_rint_fc34f2fa32af76f3,
            mid_rootN_6cbe28bfc06a25a7,
            mid_scalb_6cbe28bfc06a25a7,
            mid_sign_fc34f2fa32af76f3,
            mid_sin_fc34f2fa32af76f3,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_fc34f2fa32af76f3,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_fc34f2fa32af76f3,
            mid_subtract_6adaf4b79c4224b7,
            mid_subtract_7026fbe694870993,
            mid_subtract_d903750b39e554a2,
            mid_tan_fc34f2fa32af76f3,
            mid_tanh_fc34f2fa32af76f3,
            mid_taylor_c2a9122c04338397,
            mid_taylor_e3919ad898361abd,
            mid_toDegrees_fc34f2fa32af76f3,
            mid_toDerivativeStructure_5997f22f8d76210e,
            mid_toRadians_fc34f2fa32af76f3,
            mid_ulp_fc34f2fa32af76f3,
            mid_variable_0e7bec785d19c10f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldGradient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldGradient(const FieldGradient& obj) : ::java::lang::Object(obj) {}

          FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure &);
          FieldGradient(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

          FieldGradient abs() const;
          FieldGradient acos() const;
          FieldGradient acosh() const;
          FieldGradient add(const FieldGradient &) const;
          FieldGradient add(jdouble) const;
          FieldGradient add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient asin() const;
          FieldGradient asinh() const;
          FieldGradient atan() const;
          FieldGradient atan2(const FieldGradient &) const;
          FieldGradient atanh() const;
          FieldGradient cbrt() const;
          FieldGradient ceil() const;
          FieldGradient compose(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          static FieldGradient constant(jint, const ::org::hipparchus::CalculusFieldElement &);
          FieldGradient copySign(const FieldGradient &) const;
          FieldGradient copySign(jdouble) const;
          FieldGradient copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient cos() const;
          FieldGradient cosh() const;
          FieldGradient divide(const FieldGradient &) const;
          FieldGradient divide(jdouble) const;
          FieldGradient divide(const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean equals(const ::java::lang::Object &) const;
          FieldGradient exp() const;
          FieldGradient expm1() const;
          FieldGradient floor() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FieldGradientField getField() const;
          jint getFreeParameters() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getGradient() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(jint) const;
          FieldGradient getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          ::org::hipparchus::Field getValueField() const;
          jint hashCode() const;
          FieldGradient hypot(const FieldGradient &) const;
          FieldGradient linearCombination(const JArray< jdouble > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const JArray< FieldGradient > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &, const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &, const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient log() const;
          FieldGradient log10() const;
          FieldGradient log1p() const;
          FieldGradient multiply(const FieldGradient &) const;
          FieldGradient multiply(jdouble) const;
          FieldGradient multiply(jint) const;
          FieldGradient multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient negate() const;
          FieldGradient newInstance(jdouble) const;
          FieldGradient newInstance(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient pow(const FieldGradient &) const;
          FieldGradient pow(jdouble) const;
          FieldGradient pow(jint) const;
          static FieldGradient pow(jdouble, const FieldGradient &);
          FieldGradient reciprocal() const;
          FieldGradient remainder(const FieldGradient &) const;
          FieldGradient remainder(jdouble) const;
          FieldGradient remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient rint() const;
          FieldGradient rootN(jint) const;
          FieldGradient scalb(jint) const;
          FieldGradient sign() const;
          FieldGradient sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldGradient sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldGradient sqrt() const;
          FieldGradient subtract(const FieldGradient &) const;
          FieldGradient subtract(jdouble) const;
          FieldGradient subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient tan() const;
          FieldGradient tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldGradient toDegrees() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
          FieldGradient toRadians() const;
          FieldGradient ulp() const;
          static FieldGradient variable(jint, jint, const ::org::hipparchus::CalculusFieldElement &);
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
        extern PyType_Def PY_TYPE_DEF(FieldGradient);
        extern PyTypeObject *PY_TYPE(FieldGradient);

        class t_FieldGradient {
        public:
          PyObject_HEAD
          FieldGradient object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldGradient *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldGradient&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldGradient&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
