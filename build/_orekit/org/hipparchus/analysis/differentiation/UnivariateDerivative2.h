#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class UnivariateDerivative2Field;
        class DerivativeStructure;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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
            mid_init$_4e382a6827bb5ab6,
            mid_init$_bd28dc6055dc5bbd,
            mid_abs_cdd1771068ccd0b5,
            mid_acos_cdd1771068ccd0b5,
            mid_acosh_cdd1771068ccd0b5,
            mid_add_66ee3b720da1aaf5,
            mid_add_701334a489b2bad2,
            mid_asin_cdd1771068ccd0b5,
            mid_asinh_cdd1771068ccd0b5,
            mid_atan_cdd1771068ccd0b5,
            mid_atan2_66ee3b720da1aaf5,
            mid_atanh_cdd1771068ccd0b5,
            mid_cbrt_cdd1771068ccd0b5,
            mid_ceil_cdd1771068ccd0b5,
            mid_compareTo_1a7fd47bb0d6c155,
            mid_compose_223861db159cf9f6,
            mid_copySign_66ee3b720da1aaf5,
            mid_copySign_701334a489b2bad2,
            mid_cos_cdd1771068ccd0b5,
            mid_cosh_cdd1771068ccd0b5,
            mid_divide_66ee3b720da1aaf5,
            mid_divide_701334a489b2bad2,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_cdd1771068ccd0b5,
            mid_expm1_cdd1771068ccd0b5,
            mid_floor_cdd1771068ccd0b5,
            mid_getDerivative_ce4c02d583456bc9,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_2bcf1e61705679e1,
            mid_getFirstDerivative_9981f74b2d109da6,
            mid_getOrder_d6ab429752e7c267,
            mid_getPi_cdd1771068ccd0b5,
            mid_getReal_9981f74b2d109da6,
            mid_getSecondDerivative_9981f74b2d109da6,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_66ee3b720da1aaf5,
            mid_linearCombination_d209bf131297a533,
            mid_linearCombination_38caa929ad27f232,
            mid_linearCombination_35cdb751a5995aca,
            mid_linearCombination_6d60c01cc11cfeb6,
            mid_linearCombination_e9f4e6a9fb34ab9c,
            mid_linearCombination_420a8e6f6338a658,
            mid_linearCombination_9016145c55566529,
            mid_linearCombination_fa8b69d0f6ce97f5,
            mid_log_cdd1771068ccd0b5,
            mid_log10_cdd1771068ccd0b5,
            mid_log1p_cdd1771068ccd0b5,
            mid_multiply_66ee3b720da1aaf5,
            mid_multiply_701334a489b2bad2,
            mid_multiply_2d965df6761d39cd,
            mid_negate_cdd1771068ccd0b5,
            mid_newInstance_701334a489b2bad2,
            mid_pow_66ee3b720da1aaf5,
            mid_pow_701334a489b2bad2,
            mid_pow_2d965df6761d39cd,
            mid_pow_37de0f79fb961e89,
            mid_reciprocal_cdd1771068ccd0b5,
            mid_remainder_66ee3b720da1aaf5,
            mid_remainder_701334a489b2bad2,
            mid_rint_cdd1771068ccd0b5,
            mid_rootN_2d965df6761d39cd,
            mid_scalb_2d965df6761d39cd,
            mid_sign_cdd1771068ccd0b5,
            mid_sin_cdd1771068ccd0b5,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_cdd1771068ccd0b5,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_cdd1771068ccd0b5,
            mid_subtract_66ee3b720da1aaf5,
            mid_subtract_701334a489b2bad2,
            mid_tan_cdd1771068ccd0b5,
            mid_tanh_cdd1771068ccd0b5,
            mid_taylor_bf28ed64d6e8576b,
            mid_toDegrees_cdd1771068ccd0b5,
            mid_toDerivativeStructure_ce114c5dd035d753,
            mid_toRadians_cdd1771068ccd0b5,
            mid_ulp_cdd1771068ccd0b5,
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
