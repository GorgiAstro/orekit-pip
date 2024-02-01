#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative1;
        class FieldUnivariateDerivative1Field;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_d464f1870c2dee26,
            mid_init$_bab44dcbad09a0fe,
            mid_abs_28456803a1233651,
            mid_acos_28456803a1233651,
            mid_acosh_28456803a1233651,
            mid_add_ad962816bc471afa,
            mid_add_5a873a2b6b7af023,
            mid_add_efb2ef1838b62779,
            mid_asin_28456803a1233651,
            mid_asinh_28456803a1233651,
            mid_atan_28456803a1233651,
            mid_atan2_ad962816bc471afa,
            mid_atanh_28456803a1233651,
            mid_cbrt_28456803a1233651,
            mid_ceil_28456803a1233651,
            mid_compose_250beacb1bcf3596,
            mid_copySign_ad962816bc471afa,
            mid_copySign_5a873a2b6b7af023,
            mid_copySign_efb2ef1838b62779,
            mid_cos_28456803a1233651,
            mid_cosh_28456803a1233651,
            mid_divide_ad962816bc471afa,
            mid_divide_5a873a2b6b7af023,
            mid_divide_efb2ef1838b62779,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_28456803a1233651,
            mid_expm1_28456803a1233651,
            mid_floor_28456803a1233651,
            mid_getDerivative_dfcf702144fd7bc1,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_c65083f18abb6dd9,
            mid_getFirstDerivative_08d37e3f77b7239d,
            mid_getOrder_d6ab429752e7c267,
            mid_getPi_28456803a1233651,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_08d37e3f77b7239d,
            mid_getValueField_577649682b9910c1,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_ad962816bc471afa,
            mid_linearCombination_ff408147359b3809,
            mid_linearCombination_4c54bad9057439f4,
            mid_linearCombination_e5f866783d0ac7c3,
            mid_linearCombination_ff1b1bd76c30eb3e,
            mid_linearCombination_9bb9b703adeca923,
            mid_linearCombination_d688a630c2ac9889,
            mid_linearCombination_0da297e7feef7338,
            mid_linearCombination_952549c2b1b1f3e1,
            mid_linearCombination_383714d3607d70d9,
            mid_linearCombination_e96596fe91d81510,
            mid_log_28456803a1233651,
            mid_log10_28456803a1233651,
            mid_log1p_28456803a1233651,
            mid_multiply_ad962816bc471afa,
            mid_multiply_5a873a2b6b7af023,
            mid_multiply_3b60cfe5e5898f19,
            mid_multiply_efb2ef1838b62779,
            mid_negate_28456803a1233651,
            mid_newInstance_5a873a2b6b7af023,
            mid_pow_ad962816bc471afa,
            mid_pow_5a873a2b6b7af023,
            mid_pow_3b60cfe5e5898f19,
            mid_pow_0c9723ed28b0459d,
            mid_reciprocal_28456803a1233651,
            mid_remainder_ad962816bc471afa,
            mid_remainder_5a873a2b6b7af023,
            mid_remainder_efb2ef1838b62779,
            mid_rint_28456803a1233651,
            mid_rootN_3b60cfe5e5898f19,
            mid_scalb_3b60cfe5e5898f19,
            mid_sign_28456803a1233651,
            mid_sin_28456803a1233651,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_28456803a1233651,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_28456803a1233651,
            mid_subtract_ad962816bc471afa,
            mid_subtract_5a873a2b6b7af023,
            mid_subtract_efb2ef1838b62779,
            mid_tan_28456803a1233651,
            mid_tanh_28456803a1233651,
            mid_taylor_e3d0ff3c0584eadf,
            mid_taylor_a3b854adede8eaaa,
            mid_toDegrees_28456803a1233651,
            mid_toDerivativeStructure_b363d6ebd90353bf,
            mid_toRadians_28456803a1233651,
            mid_ulp_28456803a1233651,
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
