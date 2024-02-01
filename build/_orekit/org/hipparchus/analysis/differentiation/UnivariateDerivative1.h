#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class DerivativeStructure;
        class UnivariateDerivative1Field;
      }
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
            mid_init$_4e382a6827bb5ab6,
            mid_init$_13edac039e8cc967,
            mid_abs_9b106317a0967986,
            mid_acos_9b106317a0967986,
            mid_acosh_9b106317a0967986,
            mid_add_45ab1e1f986e69d9,
            mid_add_747e02cc0ca73930,
            mid_asin_9b106317a0967986,
            mid_asinh_9b106317a0967986,
            mid_atan_9b106317a0967986,
            mid_atan2_45ab1e1f986e69d9,
            mid_atanh_9b106317a0967986,
            mid_cbrt_9b106317a0967986,
            mid_ceil_9b106317a0967986,
            mid_compareTo_8d3ffe8b2b58ad67,
            mid_compose_2d194165e5e34f51,
            mid_copySign_45ab1e1f986e69d9,
            mid_copySign_747e02cc0ca73930,
            mid_cos_9b106317a0967986,
            mid_cosh_9b106317a0967986,
            mid_divide_45ab1e1f986e69d9,
            mid_divide_747e02cc0ca73930,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_9b106317a0967986,
            mid_expm1_9b106317a0967986,
            mid_floor_9b106317a0967986,
            mid_getDerivative_ce4c02d583456bc9,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_573405a3d98142e3,
            mid_getFirstDerivative_9981f74b2d109da6,
            mid_getOrder_d6ab429752e7c267,
            mid_getPi_9b106317a0967986,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_45ab1e1f986e69d9,
            mid_linearCombination_73617a58f1a6656e,
            mid_linearCombination_827c1009b70112ae,
            mid_linearCombination_d87e2a24c3ffe913,
            mid_linearCombination_200373eff5d81ed4,
            mid_linearCombination_dcd7a61a816ed4ff,
            mid_linearCombination_e198831b23fe3744,
            mid_linearCombination_355b8c2c1a5431d9,
            mid_linearCombination_aff30d523bc1b65b,
            mid_log_9b106317a0967986,
            mid_log10_9b106317a0967986,
            mid_log1p_9b106317a0967986,
            mid_multiply_45ab1e1f986e69d9,
            mid_multiply_747e02cc0ca73930,
            mid_multiply_f5ed3d2c94b11608,
            mid_negate_9b106317a0967986,
            mid_newInstance_747e02cc0ca73930,
            mid_pow_45ab1e1f986e69d9,
            mid_pow_747e02cc0ca73930,
            mid_pow_f5ed3d2c94b11608,
            mid_pow_04ef795127c83697,
            mid_reciprocal_9b106317a0967986,
            mid_remainder_45ab1e1f986e69d9,
            mid_remainder_747e02cc0ca73930,
            mid_rint_9b106317a0967986,
            mid_rootN_f5ed3d2c94b11608,
            mid_scalb_f5ed3d2c94b11608,
            mid_sign_9b106317a0967986,
            mid_sin_9b106317a0967986,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_9b106317a0967986,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_9b106317a0967986,
            mid_subtract_45ab1e1f986e69d9,
            mid_subtract_747e02cc0ca73930,
            mid_tan_9b106317a0967986,
            mid_tanh_9b106317a0967986,
            mid_taylor_bf28ed64d6e8576b,
            mid_toDegrees_9b106317a0967986,
            mid_toDerivativeStructure_ce114c5dd035d753,
            mid_toRadians_9b106317a0967986,
            mid_ulp_9b106317a0967986,
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
