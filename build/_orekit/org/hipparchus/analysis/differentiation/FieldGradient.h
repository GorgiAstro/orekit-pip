#ifndef org_hipparchus_analysis_differentiation_FieldGradient_H
#define org_hipparchus_analysis_differentiation_FieldGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
        class FieldGradient;
        class FieldGradientField;
        class FieldDerivativeStructure;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
            mid_init$_0d5bbe5a55e94255,
            mid_init$_bee5c8ff86f4e777,
            mid_abs_fd13058f823056bf,
            mid_acos_fd13058f823056bf,
            mid_acosh_fd13058f823056bf,
            mid_add_8fe41ca8e34b8113,
            mid_add_b5dabf06dd9a6e83,
            mid_add_5324aa8c1d1b6d23,
            mid_asin_fd13058f823056bf,
            mid_asinh_fd13058f823056bf,
            mid_atan_fd13058f823056bf,
            mid_atan2_8fe41ca8e34b8113,
            mid_atanh_fd13058f823056bf,
            mid_cbrt_fd13058f823056bf,
            mid_ceil_fd13058f823056bf,
            mid_compose_9cb868d668f0417f,
            mid_constant_3bfe183eb218c3ad,
            mid_copySign_8fe41ca8e34b8113,
            mid_copySign_b5dabf06dd9a6e83,
            mid_copySign_5324aa8c1d1b6d23,
            mid_cos_fd13058f823056bf,
            mid_cosh_fd13058f823056bf,
            mid_divide_8fe41ca8e34b8113,
            mid_divide_b5dabf06dd9a6e83,
            mid_divide_5324aa8c1d1b6d23,
            mid_equals_65c7d273e80d497a,
            mid_exp_fd13058f823056bf,
            mid_expm1_fd13058f823056bf,
            mid_floor_fd13058f823056bf,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_a06c5f20c120de2c,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getGradient_226a0b2040b1d2e1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_46366c1e17d1d442,
            mid_getPartialDerivative_93058f0552012043,
            mid_getPi_fd13058f823056bf,
            mid_getReal_dff5885c2c873297,
            mid_getValue_eba8e72a22c984ac,
            mid_getValueField_5b28be2d3632a5dc,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_8fe41ca8e34b8113,
            mid_linearCombination_e65dc81b09a51dd6,
            mid_linearCombination_d765d5922e72c382,
            mid_linearCombination_27bab0afb38a8d50,
            mid_linearCombination_1d3b08d98275116a,
            mid_linearCombination_1450d933d40b0ee0,
            mid_linearCombination_c48ce86819fe6e40,
            mid_linearCombination_d1f192a4882a57fe,
            mid_linearCombination_4df3c905a137cccd,
            mid_linearCombination_a46269bee0c35d91,
            mid_linearCombination_c4f28882b63531ba,
            mid_log_fd13058f823056bf,
            mid_log10_fd13058f823056bf,
            mid_log1p_fd13058f823056bf,
            mid_multiply_8fe41ca8e34b8113,
            mid_multiply_b5dabf06dd9a6e83,
            mid_multiply_634d89a739ceb553,
            mid_multiply_5324aa8c1d1b6d23,
            mid_negate_fd13058f823056bf,
            mid_newInstance_b5dabf06dd9a6e83,
            mid_newInstance_5324aa8c1d1b6d23,
            mid_pow_8fe41ca8e34b8113,
            mid_pow_b5dabf06dd9a6e83,
            mid_pow_634d89a739ceb553,
            mid_pow_2bf151f38f73ee71,
            mid_reciprocal_fd13058f823056bf,
            mid_remainder_8fe41ca8e34b8113,
            mid_remainder_b5dabf06dd9a6e83,
            mid_remainder_5324aa8c1d1b6d23,
            mid_rint_fd13058f823056bf,
            mid_rootN_634d89a739ceb553,
            mid_scalb_634d89a739ceb553,
            mid_sign_fd13058f823056bf,
            mid_sin_fd13058f823056bf,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_fd13058f823056bf,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_fd13058f823056bf,
            mid_subtract_8fe41ca8e34b8113,
            mid_subtract_b5dabf06dd9a6e83,
            mid_subtract_5324aa8c1d1b6d23,
            mid_tan_fd13058f823056bf,
            mid_tanh_fd13058f823056bf,
            mid_taylor_48885a3a6ec88a01,
            mid_taylor_f2dc4f0d2f87d390,
            mid_toDegrees_fd13058f823056bf,
            mid_toDerivativeStructure_aa5c3ca19ecbe240,
            mid_toRadians_fd13058f823056bf,
            mid_ulp_fd13058f823056bf,
            mid_variable_7d214e8ac8500390,
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
