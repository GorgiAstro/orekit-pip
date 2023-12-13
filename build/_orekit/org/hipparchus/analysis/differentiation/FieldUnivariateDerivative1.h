#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative1;
        class FieldUnivariateDerivative1Field;
      }
    }
    class Field;
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
            mid_init$_bf4cfa4b031fbab0,
            mid_init$_e337ae7145f7989c,
            mid_abs_b6c5666e0fb56c6c,
            mid_acos_b6c5666e0fb56c6c,
            mid_acosh_b6c5666e0fb56c6c,
            mid_add_89d8cb5e9d796b74,
            mid_add_19f8d790d8b3d47d,
            mid_add_9259b9626b64a83d,
            mid_asin_b6c5666e0fb56c6c,
            mid_asinh_b6c5666e0fb56c6c,
            mid_atan_b6c5666e0fb56c6c,
            mid_atan2_89d8cb5e9d796b74,
            mid_atanh_b6c5666e0fb56c6c,
            mid_cbrt_b6c5666e0fb56c6c,
            mid_ceil_b6c5666e0fb56c6c,
            mid_compose_06eacd0d0bc02448,
            mid_copySign_89d8cb5e9d796b74,
            mid_copySign_19f8d790d8b3d47d,
            mid_copySign_9259b9626b64a83d,
            mid_cos_b6c5666e0fb56c6c,
            mid_cosh_b6c5666e0fb56c6c,
            mid_divide_89d8cb5e9d796b74,
            mid_divide_19f8d790d8b3d47d,
            mid_divide_9259b9626b64a83d,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_b6c5666e0fb56c6c,
            mid_expm1_b6c5666e0fb56c6c,
            mid_floor_b6c5666e0fb56c6c,
            mid_getDerivative_21e6b3c521b9c768,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_58076eba231832db,
            mid_getFirstDerivative_81520b552cb3fa26,
            mid_getOrder_55546ef6a647f39b,
            mid_getPi_b6c5666e0fb56c6c,
            mid_getReal_b74f83833fdad017,
            mid_getValue_81520b552cb3fa26,
            mid_getValueField_04d1f63e17d5c5d4,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_89d8cb5e9d796b74,
            mid_linearCombination_16acb0634f89f67d,
            mid_linearCombination_70805ce19bb2c24d,
            mid_linearCombination_ea95e293323ea24c,
            mid_linearCombination_1806f7e30b016317,
            mid_linearCombination_9b9ff316e006ffc5,
            mid_linearCombination_cd8faa2f4c2a8552,
            mid_linearCombination_ad99a7ed2029b89e,
            mid_linearCombination_93ac59aed79a2f3b,
            mid_linearCombination_25cb46505af89d8a,
            mid_linearCombination_7313c5ef7af496de,
            mid_log_b6c5666e0fb56c6c,
            mid_log10_b6c5666e0fb56c6c,
            mid_log1p_b6c5666e0fb56c6c,
            mid_multiply_89d8cb5e9d796b74,
            mid_multiply_19f8d790d8b3d47d,
            mid_multiply_9ded581dd411a634,
            mid_multiply_9259b9626b64a83d,
            mid_negate_b6c5666e0fb56c6c,
            mid_newInstance_19f8d790d8b3d47d,
            mid_pow_89d8cb5e9d796b74,
            mid_pow_19f8d790d8b3d47d,
            mid_pow_9ded581dd411a634,
            mid_pow_9bfde024bcef87c4,
            mid_reciprocal_b6c5666e0fb56c6c,
            mid_remainder_89d8cb5e9d796b74,
            mid_remainder_19f8d790d8b3d47d,
            mid_remainder_9259b9626b64a83d,
            mid_rint_b6c5666e0fb56c6c,
            mid_rootN_9ded581dd411a634,
            mid_scalb_9ded581dd411a634,
            mid_sign_b6c5666e0fb56c6c,
            mid_sin_b6c5666e0fb56c6c,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_b6c5666e0fb56c6c,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_b6c5666e0fb56c6c,
            mid_subtract_89d8cb5e9d796b74,
            mid_subtract_19f8d790d8b3d47d,
            mid_subtract_9259b9626b64a83d,
            mid_tan_b6c5666e0fb56c6c,
            mid_tanh_b6c5666e0fb56c6c,
            mid_taylor_1d3e368d09a6f8a6,
            mid_taylor_6e00dc5eb352fe51,
            mid_toDegrees_b6c5666e0fb56c6c,
            mid_toDerivativeStructure_4b6e77c66fd622c3,
            mid_toRadians_b6c5666e0fb56c6c,
            mid_ulp_b6c5666e0fb56c6c,
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
