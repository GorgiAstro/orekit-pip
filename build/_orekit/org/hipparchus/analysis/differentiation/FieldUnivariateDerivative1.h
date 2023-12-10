#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative1;
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative1Field;
      }
    }
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
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
            mid_init$_d5582e6a53cddd0c,
            mid_init$_46c20bc1304e9cc4,
            mid_abs_a84d235aa48b245c,
            mid_acos_a84d235aa48b245c,
            mid_acosh_a84d235aa48b245c,
            mid_add_43201a404bf33516,
            mid_add_e529ce7f25b9cc55,
            mid_add_e4aef75f3567a177,
            mid_asin_a84d235aa48b245c,
            mid_asinh_a84d235aa48b245c,
            mid_atan_a84d235aa48b245c,
            mid_atan2_43201a404bf33516,
            mid_atanh_a84d235aa48b245c,
            mid_cbrt_a84d235aa48b245c,
            mid_ceil_a84d235aa48b245c,
            mid_compose_03cb06248c5dc3a8,
            mid_copySign_43201a404bf33516,
            mid_copySign_e529ce7f25b9cc55,
            mid_copySign_e4aef75f3567a177,
            mid_cos_a84d235aa48b245c,
            mid_cosh_a84d235aa48b245c,
            mid_divide_43201a404bf33516,
            mid_divide_e529ce7f25b9cc55,
            mid_divide_e4aef75f3567a177,
            mid_equals_229c87223f486349,
            mid_exp_a84d235aa48b245c,
            mid_expm1_a84d235aa48b245c,
            mid_floor_a84d235aa48b245c,
            mid_getDerivative_d0960d09d84b1c1d,
            mid_getExponent_f2f64475e4580546,
            mid_getField_d6c958162ab19a92,
            mid_getFirstDerivative_e6d4d3215c30992a,
            mid_getOrder_f2f64475e4580546,
            mid_getPi_a84d235aa48b245c,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_e6d4d3215c30992a,
            mid_getValueField_70b4bbd3fa378d6b,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_43201a404bf33516,
            mid_linearCombination_cb86e17a4191bbcb,
            mid_linearCombination_a3f1ea6054ae9b02,
            mid_linearCombination_760a3ac15aeab33f,
            mid_linearCombination_60f84e6d6b966eea,
            mid_linearCombination_c11798410b59d9db,
            mid_linearCombination_61709061c6aa21c2,
            mid_linearCombination_a0b05396980ec758,
            mid_linearCombination_b4315b8437eb9c81,
            mid_linearCombination_2608594f92cee8b0,
            mid_linearCombination_a4d6bc5920210309,
            mid_log_a84d235aa48b245c,
            mid_log10_a84d235aa48b245c,
            mid_log1p_a84d235aa48b245c,
            mid_multiply_43201a404bf33516,
            mid_multiply_e529ce7f25b9cc55,
            mid_multiply_3c70aeb28e268031,
            mid_multiply_e4aef75f3567a177,
            mid_negate_a84d235aa48b245c,
            mid_newInstance_e529ce7f25b9cc55,
            mid_pow_43201a404bf33516,
            mid_pow_e529ce7f25b9cc55,
            mid_pow_3c70aeb28e268031,
            mid_pow_63bf2e430dfc68c4,
            mid_reciprocal_a84d235aa48b245c,
            mid_remainder_43201a404bf33516,
            mid_remainder_e529ce7f25b9cc55,
            mid_remainder_e4aef75f3567a177,
            mid_rint_a84d235aa48b245c,
            mid_rootN_3c70aeb28e268031,
            mid_scalb_3c70aeb28e268031,
            mid_sign_a84d235aa48b245c,
            mid_sin_a84d235aa48b245c,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_a84d235aa48b245c,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_a84d235aa48b245c,
            mid_subtract_43201a404bf33516,
            mid_subtract_e529ce7f25b9cc55,
            mid_subtract_e4aef75f3567a177,
            mid_tan_a84d235aa48b245c,
            mid_tanh_a84d235aa48b245c,
            mid_taylor_cc0a3d6abf820939,
            mid_taylor_d3398190482814dc,
            mid_toDegrees_a84d235aa48b245c,
            mid_toDerivativeStructure_7208bb4259086f92,
            mid_toRadians_a84d235aa48b245c,
            mid_ulp_a84d235aa48b245c,
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
