#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class DerivativeStructure;
        class UnivariateDerivative2Field;
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

        class UnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_0e3cd27f693a0167,
            mid_init$_b5167f35b2521627,
            mid_abs_61c90b0e9e75ab08,
            mid_acos_61c90b0e9e75ab08,
            mid_acosh_61c90b0e9e75ab08,
            mid_add_618c33568543b745,
            mid_add_29624b0da98f03d2,
            mid_asin_61c90b0e9e75ab08,
            mid_asinh_61c90b0e9e75ab08,
            mid_atan_61c90b0e9e75ab08,
            mid_atan2_618c33568543b745,
            mid_atanh_61c90b0e9e75ab08,
            mid_cbrt_61c90b0e9e75ab08,
            mid_ceil_61c90b0e9e75ab08,
            mid_compareTo_3af9d93348f63790,
            mid_compose_d95512c8ac4e9e59,
            mid_copySign_618c33568543b745,
            mid_copySign_29624b0da98f03d2,
            mid_cos_61c90b0e9e75ab08,
            mid_cosh_61c90b0e9e75ab08,
            mid_divide_618c33568543b745,
            mid_divide_29624b0da98f03d2,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_61c90b0e9e75ab08,
            mid_expm1_61c90b0e9e75ab08,
            mid_floor_61c90b0e9e75ab08,
            mid_getDerivative_2afcbc21f4e57ab2,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_7dee767fa0ace56c,
            mid_getFirstDerivative_b74f83833fdad017,
            mid_getOrder_55546ef6a647f39b,
            mid_getPi_61c90b0e9e75ab08,
            mid_getReal_b74f83833fdad017,
            mid_getSecondDerivative_b74f83833fdad017,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_618c33568543b745,
            mid_linearCombination_88c6a33ccdcffc10,
            mid_linearCombination_65b53d1f60ab8c5f,
            mid_linearCombination_ac323f9e1e03c83c,
            mid_linearCombination_c8e0368911da9d57,
            mid_linearCombination_09b5f8a9034caafa,
            mid_linearCombination_cc564d8b99f961c6,
            mid_linearCombination_c2acd391d7d6c5ce,
            mid_linearCombination_35e9f4b449a21669,
            mid_log_61c90b0e9e75ab08,
            mid_log10_61c90b0e9e75ab08,
            mid_log1p_61c90b0e9e75ab08,
            mid_multiply_618c33568543b745,
            mid_multiply_29624b0da98f03d2,
            mid_multiply_0210591bd22c539f,
            mid_negate_61c90b0e9e75ab08,
            mid_newInstance_29624b0da98f03d2,
            mid_pow_618c33568543b745,
            mid_pow_29624b0da98f03d2,
            mid_pow_0210591bd22c539f,
            mid_pow_7e619823123d75e3,
            mid_reciprocal_61c90b0e9e75ab08,
            mid_remainder_618c33568543b745,
            mid_remainder_29624b0da98f03d2,
            mid_rint_61c90b0e9e75ab08,
            mid_rootN_0210591bd22c539f,
            mid_scalb_0210591bd22c539f,
            mid_sign_61c90b0e9e75ab08,
            mid_sin_61c90b0e9e75ab08,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_61c90b0e9e75ab08,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_61c90b0e9e75ab08,
            mid_subtract_618c33568543b745,
            mid_subtract_29624b0da98f03d2,
            mid_tan_61c90b0e9e75ab08,
            mid_tanh_61c90b0e9e75ab08,
            mid_taylor_04fd0666b613d2ab,
            mid_toDegrees_61c90b0e9e75ab08,
            mid_toDerivativeStructure_57983c4d4b4a2f7f,
            mid_toRadians_61c90b0e9e75ab08,
            mid_ulp_61c90b0e9e75ab08,
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
