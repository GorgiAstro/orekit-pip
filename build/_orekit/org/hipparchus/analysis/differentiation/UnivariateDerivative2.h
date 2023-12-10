#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class DerivativeStructure;
        class UnivariateDerivative2Field;
      }
    }
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
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

        class UnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_d50646f27571013a,
            mid_init$_d0d6094fbd7015c5,
            mid_abs_347b0c8405a5a6a6,
            mid_acos_347b0c8405a5a6a6,
            mid_acosh_347b0c8405a5a6a6,
            mid_add_f38f856bded3c65d,
            mid_add_de62967c58d2b90b,
            mid_asin_347b0c8405a5a6a6,
            mid_asinh_347b0c8405a5a6a6,
            mid_atan_347b0c8405a5a6a6,
            mid_atan2_f38f856bded3c65d,
            mid_atanh_347b0c8405a5a6a6,
            mid_cbrt_347b0c8405a5a6a6,
            mid_ceil_347b0c8405a5a6a6,
            mid_compareTo_111e0906753f064d,
            mid_compose_17d6322e2725f608,
            mid_copySign_f38f856bded3c65d,
            mid_copySign_de62967c58d2b90b,
            mid_cos_347b0c8405a5a6a6,
            mid_cosh_347b0c8405a5a6a6,
            mid_divide_f38f856bded3c65d,
            mid_divide_de62967c58d2b90b,
            mid_equals_229c87223f486349,
            mid_exp_347b0c8405a5a6a6,
            mid_expm1_347b0c8405a5a6a6,
            mid_floor_347b0c8405a5a6a6,
            mid_getDerivative_b772323fc98b7293,
            mid_getExponent_f2f64475e4580546,
            mid_getField_416e8ca9aac6db67,
            mid_getFirstDerivative_456d9a2f64d6b28d,
            mid_getOrder_f2f64475e4580546,
            mid_getPi_347b0c8405a5a6a6,
            mid_getReal_456d9a2f64d6b28d,
            mid_getSecondDerivative_456d9a2f64d6b28d,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_f38f856bded3c65d,
            mid_linearCombination_41724f497390e8fb,
            mid_linearCombination_f71767079cbce9ee,
            mid_linearCombination_ef4bd9d122aa7ab0,
            mid_linearCombination_5f46313a9cbd048c,
            mid_linearCombination_5cd46ef6d023d27c,
            mid_linearCombination_08e4761bd86e9a94,
            mid_linearCombination_03271ea4d1209ff1,
            mid_linearCombination_1a5f268fa3b182d0,
            mid_log_347b0c8405a5a6a6,
            mid_log10_347b0c8405a5a6a6,
            mid_log1p_347b0c8405a5a6a6,
            mid_multiply_f38f856bded3c65d,
            mid_multiply_de62967c58d2b90b,
            mid_multiply_dcabf0ceb1a5ed03,
            mid_negate_347b0c8405a5a6a6,
            mid_newInstance_de62967c58d2b90b,
            mid_pow_f38f856bded3c65d,
            mid_pow_de62967c58d2b90b,
            mid_pow_dcabf0ceb1a5ed03,
            mid_pow_34a6ce822d00ed0f,
            mid_reciprocal_347b0c8405a5a6a6,
            mid_remainder_f38f856bded3c65d,
            mid_remainder_de62967c58d2b90b,
            mid_rint_347b0c8405a5a6a6,
            mid_rootN_dcabf0ceb1a5ed03,
            mid_scalb_dcabf0ceb1a5ed03,
            mid_sign_347b0c8405a5a6a6,
            mid_sin_347b0c8405a5a6a6,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_347b0c8405a5a6a6,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_347b0c8405a5a6a6,
            mid_subtract_f38f856bded3c65d,
            mid_subtract_de62967c58d2b90b,
            mid_tan_347b0c8405a5a6a6,
            mid_tanh_347b0c8405a5a6a6,
            mid_taylor_0ba5fed9597b693e,
            mid_toDegrees_347b0c8405a5a6a6,
            mid_toDerivativeStructure_c8ca2097cc2fbc0a,
            mid_toRadians_347b0c8405a5a6a6,
            mid_ulp_347b0c8405a5a6a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative2(jobject obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative2(const UnivariateDerivative2& obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {}

          static UnivariateDerivative2 *PI;

          UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          UnivariateDerivative2(jdouble, jdouble, jdouble);

          UnivariateDerivative2 abs() const;
          UnivariateDerivative2 acos() const;
          UnivariateDerivative2 acosh() const;
          UnivariateDerivative2 add(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 add(jdouble) const;
          UnivariateDerivative2 asin() const;
          UnivariateDerivative2 asinh() const;
          UnivariateDerivative2 atan() const;
          UnivariateDerivative2 atan2(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 atanh() const;
          UnivariateDerivative2 cbrt() const;
          UnivariateDerivative2 ceil() const;
          jint compareTo(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 compose(const JArray< jdouble > &) const;
          UnivariateDerivative2 copySign(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 copySign(jdouble) const;
          UnivariateDerivative2 cos() const;
          UnivariateDerivative2 cosh() const;
          UnivariateDerivative2 divide(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          UnivariateDerivative2 exp() const;
          UnivariateDerivative2 expm1() const;
          UnivariateDerivative2 floor() const;
          jdouble getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field getField() const;
          jdouble getFirstDerivative() const;
          jint getOrder() const;
          UnivariateDerivative2 getPi() const;
          jdouble getReal() const;
          jdouble getSecondDerivative() const;
          jdouble getValue() const;
          jint hashCode() const;
          UnivariateDerivative2 hypot(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const JArray< jdouble > &, const JArray< UnivariateDerivative2 > &) const;
          UnivariateDerivative2 linearCombination(const JArray< UnivariateDerivative2 > &, const JArray< UnivariateDerivative2 > &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 log() const;
          UnivariateDerivative2 log10() const;
          UnivariateDerivative2 log1p() const;
          UnivariateDerivative2 multiply(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 multiply(jdouble) const;
          UnivariateDerivative2 multiply(jint) const;
          UnivariateDerivative2 negate() const;
          UnivariateDerivative2 newInstance(jdouble) const;
          UnivariateDerivative2 pow(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 pow(jdouble) const;
          UnivariateDerivative2 pow(jint) const;
          static UnivariateDerivative2 pow(jdouble, const UnivariateDerivative2 &);
          UnivariateDerivative2 reciprocal() const;
          UnivariateDerivative2 remainder(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 remainder(jdouble) const;
          UnivariateDerivative2 rint() const;
          UnivariateDerivative2 rootN(jint) const;
          UnivariateDerivative2 scalb(jint) const;
          UnivariateDerivative2 sign() const;
          UnivariateDerivative2 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          UnivariateDerivative2 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          UnivariateDerivative2 sqrt() const;
          UnivariateDerivative2 subtract(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 subtract(jdouble) const;
          UnivariateDerivative2 tan() const;
          UnivariateDerivative2 tanh() const;
          jdouble taylor(jdouble) const;
          UnivariateDerivative2 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          UnivariateDerivative2 toRadians() const;
          UnivariateDerivative2 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative2);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative2);

        class t_UnivariateDerivative2 {
        public:
          PyObject_HEAD
          UnivariateDerivative2 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative2 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative2&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative2&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
