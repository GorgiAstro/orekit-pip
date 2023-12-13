#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H

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
        class FieldUnivariateDerivative2Field;
        class FieldUnivariateDerivative2;
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

        class FieldUnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative {
         public:
          enum {
            mid_init$_bf4cfa4b031fbab0,
            mid_init$_baa1ed35ace5d036,
            mid_abs_43add0d5ea3aedb5,
            mid_acos_43add0d5ea3aedb5,
            mid_acosh_43add0d5ea3aedb5,
            mid_add_e751beabde48d861,
            mid_add_621efc2b386a9f74,
            mid_add_ac03c11b8be0c792,
            mid_asin_43add0d5ea3aedb5,
            mid_asinh_43add0d5ea3aedb5,
            mid_atan_43add0d5ea3aedb5,
            mid_atan2_e751beabde48d861,
            mid_atanh_43add0d5ea3aedb5,
            mid_cbrt_43add0d5ea3aedb5,
            mid_ceil_43add0d5ea3aedb5,
            mid_compose_594d9a344850c9c6,
            mid_copySign_e751beabde48d861,
            mid_copySign_621efc2b386a9f74,
            mid_copySign_ac03c11b8be0c792,
            mid_cos_43add0d5ea3aedb5,
            mid_cosh_43add0d5ea3aedb5,
            mid_divide_e751beabde48d861,
            mid_divide_621efc2b386a9f74,
            mid_divide_ac03c11b8be0c792,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_43add0d5ea3aedb5,
            mid_expm1_43add0d5ea3aedb5,
            mid_floor_43add0d5ea3aedb5,
            mid_getDerivative_21e6b3c521b9c768,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_28a448aa48347f1f,
            mid_getFirstDerivative_81520b552cb3fa26,
            mid_getOrder_55546ef6a647f39b,
            mid_getPi_43add0d5ea3aedb5,
            mid_getReal_b74f83833fdad017,
            mid_getSecondDerivative_81520b552cb3fa26,
            mid_getValue_81520b552cb3fa26,
            mid_getValueField_04d1f63e17d5c5d4,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_e751beabde48d861,
            mid_linearCombination_922fff7e88c36d26,
            mid_linearCombination_68f5d9e7f64378af,
            mid_linearCombination_eb02f2291f0788e2,
            mid_linearCombination_cbd773344b79c07c,
            mid_linearCombination_e3603a23b6cec7ce,
            mid_linearCombination_cd8c65ffd8674953,
            mid_linearCombination_a3d2f5b2745ebcba,
            mid_linearCombination_5d4ffd75d0dc5801,
            mid_linearCombination_628d8a82f0067f6d,
            mid_linearCombination_75719b8cf6521b59,
            mid_log_43add0d5ea3aedb5,
            mid_log10_43add0d5ea3aedb5,
            mid_log1p_43add0d5ea3aedb5,
            mid_multiply_e751beabde48d861,
            mid_multiply_621efc2b386a9f74,
            mid_multiply_4d1030bf85edc6e6,
            mid_multiply_ac03c11b8be0c792,
            mid_negate_43add0d5ea3aedb5,
            mid_newInstance_621efc2b386a9f74,
            mid_pow_e751beabde48d861,
            mid_pow_621efc2b386a9f74,
            mid_pow_4d1030bf85edc6e6,
            mid_pow_201fddddce48a7e5,
            mid_reciprocal_43add0d5ea3aedb5,
            mid_remainder_e751beabde48d861,
            mid_remainder_621efc2b386a9f74,
            mid_remainder_ac03c11b8be0c792,
            mid_rint_43add0d5ea3aedb5,
            mid_rootN_4d1030bf85edc6e6,
            mid_scalb_4d1030bf85edc6e6,
            mid_sign_43add0d5ea3aedb5,
            mid_sin_43add0d5ea3aedb5,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_43add0d5ea3aedb5,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_43add0d5ea3aedb5,
            mid_subtract_e751beabde48d861,
            mid_subtract_621efc2b386a9f74,
            mid_subtract_ac03c11b8be0c792,
            mid_tan_43add0d5ea3aedb5,
            mid_tanh_43add0d5ea3aedb5,
            mid_taylor_1d3e368d09a6f8a6,
            mid_taylor_6e00dc5eb352fe51,
            mid_toDegrees_43add0d5ea3aedb5,
            mid_toDerivativeStructure_4b6e77c66fd622c3,
            mid_toRadians_43add0d5ea3aedb5,
            mid_ulp_43add0d5ea3aedb5,
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
