#ifndef org_hipparchus_analysis_differentiation_FieldGradient_H
#define org_hipparchus_analysis_differentiation_FieldGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldGradient;
        class FieldDerivative;
        class FieldGradientField;
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
            mid_init$_bf4cfa4b031fbab0,
            mid_init$_1d66803ed368a800,
            mid_abs_f418c9d91aa473ef,
            mid_acos_f418c9d91aa473ef,
            mid_acosh_f418c9d91aa473ef,
            mid_add_c6645824f76877ad,
            mid_add_2861a4e95a22b062,
            mid_add_968a043a5a5793e4,
            mid_asin_f418c9d91aa473ef,
            mid_asinh_f418c9d91aa473ef,
            mid_atan_f418c9d91aa473ef,
            mid_atan2_c6645824f76877ad,
            mid_atanh_f418c9d91aa473ef,
            mid_cbrt_f418c9d91aa473ef,
            mid_ceil_f418c9d91aa473ef,
            mid_compose_78d1442f7cefc35c,
            mid_constant_ba1acce6a3a1f53a,
            mid_copySign_c6645824f76877ad,
            mid_copySign_2861a4e95a22b062,
            mid_copySign_968a043a5a5793e4,
            mid_cos_f418c9d91aa473ef,
            mid_cosh_f418c9d91aa473ef,
            mid_divide_c6645824f76877ad,
            mid_divide_2861a4e95a22b062,
            mid_divide_968a043a5a5793e4,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_f418c9d91aa473ef,
            mid_expm1_f418c9d91aa473ef,
            mid_floor_f418c9d91aa473ef,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_bf1149dde94126bb,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getGradient_883be608cfc68c26,
            mid_getOrder_55546ef6a647f39b,
            mid_getPartialDerivative_8224159d85a4681d,
            mid_getPartialDerivative_21e6b3c521b9c768,
            mid_getPi_f418c9d91aa473ef,
            mid_getReal_b74f83833fdad017,
            mid_getValue_81520b552cb3fa26,
            mid_getValueField_04d1f63e17d5c5d4,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_c6645824f76877ad,
            mid_linearCombination_751aef776c99f180,
            mid_linearCombination_83a8a6ed299ccdbc,
            mid_linearCombination_1c24cb7016344f01,
            mid_linearCombination_cfe8a3fd6796f527,
            mid_linearCombination_e7518e9dce173fb8,
            mid_linearCombination_193c9bb68af49c7f,
            mid_linearCombination_e52bc97356b1b8d2,
            mid_linearCombination_5d00327ad5d3c103,
            mid_linearCombination_228f1d86a7f7bee6,
            mid_linearCombination_d774e09270a386a3,
            mid_log_f418c9d91aa473ef,
            mid_log10_f418c9d91aa473ef,
            mid_log1p_f418c9d91aa473ef,
            mid_multiply_c6645824f76877ad,
            mid_multiply_2861a4e95a22b062,
            mid_multiply_49eeb8950462fa3f,
            mid_multiply_968a043a5a5793e4,
            mid_negate_f418c9d91aa473ef,
            mid_newInstance_2861a4e95a22b062,
            mid_newInstance_968a043a5a5793e4,
            mid_pow_c6645824f76877ad,
            mid_pow_2861a4e95a22b062,
            mid_pow_49eeb8950462fa3f,
            mid_pow_cf3b31980d7d59de,
            mid_reciprocal_f418c9d91aa473ef,
            mid_remainder_c6645824f76877ad,
            mid_remainder_2861a4e95a22b062,
            mid_remainder_968a043a5a5793e4,
            mid_rint_f418c9d91aa473ef,
            mid_rootN_49eeb8950462fa3f,
            mid_scalb_49eeb8950462fa3f,
            mid_sign_f418c9d91aa473ef,
            mid_sin_f418c9d91aa473ef,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_f418c9d91aa473ef,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_f418c9d91aa473ef,
            mid_subtract_c6645824f76877ad,
            mid_subtract_2861a4e95a22b062,
            mid_subtract_968a043a5a5793e4,
            mid_tan_f418c9d91aa473ef,
            mid_tanh_f418c9d91aa473ef,
            mid_taylor_447413902a94c4ea,
            mid_taylor_ba5ea64a789ad864,
            mid_toDegrees_f418c9d91aa473ef,
            mid_toDerivativeStructure_4b6e77c66fd622c3,
            mid_toRadians_f418c9d91aa473ef,
            mid_ulp_f418c9d91aa473ef,
            mid_variable_559a0a7ec79db27e,
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
