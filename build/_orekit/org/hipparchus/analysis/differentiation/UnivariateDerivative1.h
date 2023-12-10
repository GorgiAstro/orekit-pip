#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative1Field;
        class UnivariateDerivative1;
      }
    }
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

        class UnivariateDerivative1 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_d50646f27571013a,
            mid_init$_1d715fa3b7b756e1,
            mid_abs_d8e02a4df001f4b7,
            mid_acos_d8e02a4df001f4b7,
            mid_acosh_d8e02a4df001f4b7,
            mid_add_9b0fef2e4e8387ca,
            mid_add_a575e2fb041b441c,
            mid_asin_d8e02a4df001f4b7,
            mid_asinh_d8e02a4df001f4b7,
            mid_atan_d8e02a4df001f4b7,
            mid_atan2_9b0fef2e4e8387ca,
            mid_atanh_d8e02a4df001f4b7,
            mid_cbrt_d8e02a4df001f4b7,
            mid_ceil_d8e02a4df001f4b7,
            mid_compareTo_27558d450992cbec,
            mid_compose_9b1225d4ec61b929,
            mid_copySign_9b0fef2e4e8387ca,
            mid_copySign_a575e2fb041b441c,
            mid_cos_d8e02a4df001f4b7,
            mid_cosh_d8e02a4df001f4b7,
            mid_divide_9b0fef2e4e8387ca,
            mid_divide_a575e2fb041b441c,
            mid_equals_229c87223f486349,
            mid_exp_d8e02a4df001f4b7,
            mid_expm1_d8e02a4df001f4b7,
            mid_floor_d8e02a4df001f4b7,
            mid_getDerivative_b772323fc98b7293,
            mid_getExponent_f2f64475e4580546,
            mid_getField_2f31d09ea5bf5b80,
            mid_getFirstDerivative_456d9a2f64d6b28d,
            mid_getOrder_f2f64475e4580546,
            mid_getPi_d8e02a4df001f4b7,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_9b0fef2e4e8387ca,
            mid_linearCombination_c92a98d770fa203e,
            mid_linearCombination_b84d4c9340091e38,
            mid_linearCombination_f19cad201224b337,
            mid_linearCombination_b1478aecd3a83d75,
            mid_linearCombination_3a41da6fe1ffca03,
            mid_linearCombination_a0ba888cf9a7d1b3,
            mid_linearCombination_f36d93366dfb0605,
            mid_linearCombination_d7f1aabfc6bb19a4,
            mid_log_d8e02a4df001f4b7,
            mid_log10_d8e02a4df001f4b7,
            mid_log1p_d8e02a4df001f4b7,
            mid_multiply_9b0fef2e4e8387ca,
            mid_multiply_a575e2fb041b441c,
            mid_multiply_34d7b37d06c8946d,
            mid_negate_d8e02a4df001f4b7,
            mid_newInstance_a575e2fb041b441c,
            mid_pow_9b0fef2e4e8387ca,
            mid_pow_a575e2fb041b441c,
            mid_pow_34d7b37d06c8946d,
            mid_pow_cb6763063359a113,
            mid_reciprocal_d8e02a4df001f4b7,
            mid_remainder_9b0fef2e4e8387ca,
            mid_remainder_a575e2fb041b441c,
            mid_rint_d8e02a4df001f4b7,
            mid_rootN_34d7b37d06c8946d,
            mid_scalb_34d7b37d06c8946d,
            mid_sign_d8e02a4df001f4b7,
            mid_sin_d8e02a4df001f4b7,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_d8e02a4df001f4b7,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_d8e02a4df001f4b7,
            mid_subtract_9b0fef2e4e8387ca,
            mid_subtract_a575e2fb041b441c,
            mid_tan_d8e02a4df001f4b7,
            mid_tanh_d8e02a4df001f4b7,
            mid_taylor_0ba5fed9597b693e,
            mid_toDegrees_d8e02a4df001f4b7,
            mid_toDerivativeStructure_c8ca2097cc2fbc0a,
            mid_toRadians_d8e02a4df001f4b7,
            mid_ulp_d8e02a4df001f4b7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative1(jobject obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative1(const UnivariateDerivative1& obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {}

          static UnivariateDerivative1 *PI;

          UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          UnivariateDerivative1(jdouble, jdouble);

          UnivariateDerivative1 abs() const;
          UnivariateDerivative1 acos() const;
          UnivariateDerivative1 acosh() const;
          UnivariateDerivative1 add(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 add(jdouble) const;
          UnivariateDerivative1 asin() const;
          UnivariateDerivative1 asinh() const;
          UnivariateDerivative1 atan() const;
          UnivariateDerivative1 atan2(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 atanh() const;
          UnivariateDerivative1 cbrt() const;
          UnivariateDerivative1 ceil() const;
          jint compareTo(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 compose(const JArray< jdouble > &) const;
          UnivariateDerivative1 copySign(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 copySign(jdouble) const;
          UnivariateDerivative1 cos() const;
          UnivariateDerivative1 cosh() const;
          UnivariateDerivative1 divide(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          UnivariateDerivative1 exp() const;
          UnivariateDerivative1 expm1() const;
          UnivariateDerivative1 floor() const;
          jdouble getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field getField() const;
          jdouble getFirstDerivative() const;
          jint getOrder() const;
          UnivariateDerivative1 getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          UnivariateDerivative1 hypot(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const JArray< jdouble > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const JArray< UnivariateDerivative1 > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 log() const;
          UnivariateDerivative1 log10() const;
          UnivariateDerivative1 log1p() const;
          UnivariateDerivative1 multiply(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 multiply(jdouble) const;
          UnivariateDerivative1 multiply(jint) const;
          UnivariateDerivative1 negate() const;
          UnivariateDerivative1 newInstance(jdouble) const;
          UnivariateDerivative1 pow(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 pow(jdouble) const;
          UnivariateDerivative1 pow(jint) const;
          static UnivariateDerivative1 pow(jdouble, const UnivariateDerivative1 &);
          UnivariateDerivative1 reciprocal() const;
          UnivariateDerivative1 remainder(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 remainder(jdouble) const;
          UnivariateDerivative1 rint() const;
          UnivariateDerivative1 rootN(jint) const;
          UnivariateDerivative1 scalb(jint) const;
          UnivariateDerivative1 sign() const;
          UnivariateDerivative1 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          UnivariateDerivative1 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          UnivariateDerivative1 sqrt() const;
          UnivariateDerivative1 subtract(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 subtract(jdouble) const;
          UnivariateDerivative1 tan() const;
          UnivariateDerivative1 tanh() const;
          jdouble taylor(jdouble) const;
          UnivariateDerivative1 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          UnivariateDerivative1 toRadians() const;
          UnivariateDerivative1 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative1);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative1);

        class t_UnivariateDerivative1 {
        public:
          PyObject_HEAD
          UnivariateDerivative1 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative1 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative1&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative1&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
