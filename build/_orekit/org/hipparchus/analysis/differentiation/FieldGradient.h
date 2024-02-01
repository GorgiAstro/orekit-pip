#ifndef org_hipparchus_analysis_differentiation_FieldGradient_H
#define org_hipparchus_analysis_differentiation_FieldGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldGradientField;
        class FieldDerivativeStructure;
        class FieldDerivative;
        class FieldGradient;
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
            mid_init$_d464f1870c2dee26,
            mid_init$_8556964e7b03aae6,
            mid_abs_181a8b55191d747b,
            mid_acos_181a8b55191d747b,
            mid_acosh_181a8b55191d747b,
            mid_add_f71635cef52309f9,
            mid_add_818cb502149d996f,
            mid_add_c5ec9c9770fbafed,
            mid_asin_181a8b55191d747b,
            mid_asinh_181a8b55191d747b,
            mid_atan_181a8b55191d747b,
            mid_atan2_f71635cef52309f9,
            mid_atanh_181a8b55191d747b,
            mid_cbrt_181a8b55191d747b,
            mid_ceil_181a8b55191d747b,
            mid_compose_19aa6e42ebe749f8,
            mid_constant_69be3668a1731f68,
            mid_copySign_f71635cef52309f9,
            mid_copySign_818cb502149d996f,
            mid_copySign_c5ec9c9770fbafed,
            mid_cos_181a8b55191d747b,
            mid_cosh_181a8b55191d747b,
            mid_divide_f71635cef52309f9,
            mid_divide_818cb502149d996f,
            mid_divide_c5ec9c9770fbafed,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_181a8b55191d747b,
            mid_expm1_181a8b55191d747b,
            mid_floor_181a8b55191d747b,
            mid_getExponent_d6ab429752e7c267,
            mid_getField_9dda00f40dc6c813,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getGradient_94ed2e0620f8833d,
            mid_getOrder_d6ab429752e7c267,
            mid_getPartialDerivative_15bad9d0870b63aa,
            mid_getPartialDerivative_dfcf702144fd7bc1,
            mid_getPi_181a8b55191d747b,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_08d37e3f77b7239d,
            mid_getValueField_577649682b9910c1,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_f71635cef52309f9,
            mid_linearCombination_5aa710e8712c2450,
            mid_linearCombination_779e5bd36bfdf19e,
            mid_linearCombination_192a35caaf4c5ce8,
            mid_linearCombination_18ade1a9dd7b6368,
            mid_linearCombination_364259e7e39bde20,
            mid_linearCombination_38807bf33532dbca,
            mid_linearCombination_d88448cb5625c215,
            mid_linearCombination_1a4b96b589b49371,
            mid_linearCombination_d46d1918e39c1423,
            mid_linearCombination_f19fcea6a917962e,
            mid_log_181a8b55191d747b,
            mid_log10_181a8b55191d747b,
            mid_log1p_181a8b55191d747b,
            mid_multiply_f71635cef52309f9,
            mid_multiply_818cb502149d996f,
            mid_multiply_331eec1d3d8bd039,
            mid_multiply_c5ec9c9770fbafed,
            mid_negate_181a8b55191d747b,
            mid_newInstance_818cb502149d996f,
            mid_newInstance_c5ec9c9770fbafed,
            mid_pow_f71635cef52309f9,
            mid_pow_818cb502149d996f,
            mid_pow_331eec1d3d8bd039,
            mid_pow_f71ff5cc067cec45,
            mid_reciprocal_181a8b55191d747b,
            mid_remainder_f71635cef52309f9,
            mid_remainder_818cb502149d996f,
            mid_remainder_c5ec9c9770fbafed,
            mid_rint_181a8b55191d747b,
            mid_rootN_331eec1d3d8bd039,
            mid_scalb_331eec1d3d8bd039,
            mid_sign_181a8b55191d747b,
            mid_sin_181a8b55191d747b,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_181a8b55191d747b,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_181a8b55191d747b,
            mid_subtract_f71635cef52309f9,
            mid_subtract_818cb502149d996f,
            mid_subtract_c5ec9c9770fbafed,
            mid_tan_181a8b55191d747b,
            mid_tanh_181a8b55191d747b,
            mid_taylor_882fb3b536492986,
            mid_taylor_c04968ee695d037c,
            mid_toDegrees_181a8b55191d747b,
            mid_toDerivativeStructure_b363d6ebd90353bf,
            mid_toRadians_181a8b55191d747b,
            mid_ulp_181a8b55191d747b,
            mid_variable_13d0880ea2146b2e,
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
