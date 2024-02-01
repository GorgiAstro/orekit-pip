#ifndef org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H
#define org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldDerivative;
        class FDSFactory;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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

        class FieldDerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_b363d6ebd90353bf,
            mid_acos_b363d6ebd90353bf,
            mid_acosh_b363d6ebd90353bf,
            mid_add_487b1f7c3947c77e,
            mid_add_b9026a046a147de2,
            mid_add_ca7a13fcccfd32de,
            mid_asin_b363d6ebd90353bf,
            mid_asinh_b363d6ebd90353bf,
            mid_atan_b363d6ebd90353bf,
            mid_atan2_487b1f7c3947c77e,
            mid_atan2_181f907a7807ecb9,
            mid_atanh_b363d6ebd90353bf,
            mid_cbrt_b363d6ebd90353bf,
            mid_ceil_b363d6ebd90353bf,
            mid_compose_73620040306e9955,
            mid_compose_1658e30325c495f4,
            mid_copySign_487b1f7c3947c77e,
            mid_copySign_b9026a046a147de2,
            mid_copySign_ca7a13fcccfd32de,
            mid_cos_b363d6ebd90353bf,
            mid_cosh_b363d6ebd90353bf,
            mid_differentiate_a8407627cfbfe04d,
            mid_divide_487b1f7c3947c77e,
            mid_divide_b9026a046a147de2,
            mid_divide_ca7a13fcccfd32de,
            mid_exp_b363d6ebd90353bf,
            mid_expm1_b363d6ebd90353bf,
            mid_floor_b363d6ebd90353bf,
            mid_getAllDerivatives_94ed2e0620f8833d,
            mid_getExponent_d6ab429752e7c267,
            mid_getFactory_062ce4da311add4a,
            mid_getField_577649682b9910c1,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getOrder_d6ab429752e7c267,
            mid_getPartialDerivative_15bad9d0870b63aa,
            mid_getPi_b363d6ebd90353bf,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_08d37e3f77b7239d,
            mid_hypot_487b1f7c3947c77e,
            mid_hypot_181f907a7807ecb9,
            mid_integrate_a8407627cfbfe04d,
            mid_linearCombination_352aef28373c8de7,
            mid_linearCombination_d5c28220ece11c9c,
            mid_linearCombination_d0d594ae934fc556,
            mid_linearCombination_d252a90dc5fff150,
            mid_linearCombination_281c06dc1ecc5a27,
            mid_linearCombination_9993f4a509b1c911,
            mid_linearCombination_064b23b9dab00b0a,
            mid_linearCombination_5b33ce939db205a6,
            mid_linearCombination_3a7eeb579ba49118,
            mid_linearCombination_d19785b9f9c531df,
            mid_linearCombination_118779bf592933ad,
            mid_linearCombination_a5b0290c137d6bb7,
            mid_log_b363d6ebd90353bf,
            mid_log10_b363d6ebd90353bf,
            mid_log1p_b363d6ebd90353bf,
            mid_multiply_487b1f7c3947c77e,
            mid_multiply_b9026a046a147de2,
            mid_multiply_14f0e73adde16f83,
            mid_multiply_ca7a13fcccfd32de,
            mid_negate_b363d6ebd90353bf,
            mid_newInstance_b9026a046a147de2,
            mid_pow_487b1f7c3947c77e,
            mid_pow_b9026a046a147de2,
            mid_pow_14f0e73adde16f83,
            mid_pow_f6578b77b0bf574a,
            mid_rebase_d47edc631539de98,
            mid_reciprocal_b363d6ebd90353bf,
            mid_remainder_487b1f7c3947c77e,
            mid_remainder_b9026a046a147de2,
            mid_remainder_ca7a13fcccfd32de,
            mid_rint_b363d6ebd90353bf,
            mid_rootN_14f0e73adde16f83,
            mid_scalb_14f0e73adde16f83,
            mid_sign_b363d6ebd90353bf,
            mid_sin_b363d6ebd90353bf,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_b363d6ebd90353bf,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_b363d6ebd90353bf,
            mid_subtract_487b1f7c3947c77e,
            mid_subtract_b9026a046a147de2,
            mid_subtract_ca7a13fcccfd32de,
            mid_tan_b363d6ebd90353bf,
            mid_tanh_b363d6ebd90353bf,
            mid_taylor_882fb3b536492986,
            mid_taylor_c04968ee695d037c,
            mid_toDegrees_b363d6ebd90353bf,
            mid_toRadians_b363d6ebd90353bf,
            mid_ulp_b363d6ebd90353bf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDerivativeStructure(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDerivativeStructure(const FieldDerivativeStructure& obj) : ::java::lang::Object(obj) {}

          FieldDerivativeStructure abs() const;
          FieldDerivativeStructure acos() const;
          FieldDerivativeStructure acosh() const;
          FieldDerivativeStructure add(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure add(jdouble) const;
          FieldDerivativeStructure add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure asin() const;
          FieldDerivativeStructure asinh() const;
          FieldDerivativeStructure atan() const;
          FieldDerivativeStructure atan2(const FieldDerivativeStructure &) const;
          static FieldDerivativeStructure atan2(const FieldDerivativeStructure &, const FieldDerivativeStructure &);
          FieldDerivativeStructure atanh() const;
          FieldDerivativeStructure cbrt() const;
          FieldDerivativeStructure ceil() const;
          FieldDerivativeStructure compose(const JArray< jdouble > &) const;
          FieldDerivativeStructure compose(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldDerivativeStructure copySign(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure copySign(jdouble) const;
          FieldDerivativeStructure copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure cos() const;
          FieldDerivativeStructure cosh() const;
          FieldDerivativeStructure differentiate(jint, jint) const;
          FieldDerivativeStructure divide(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure divide(jdouble) const;
          FieldDerivativeStructure divide(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure exp() const;
          FieldDerivativeStructure expm1() const;
          FieldDerivativeStructure floor() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getAllDerivatives() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FDSFactory getFactory() const;
          ::org::hipparchus::Field getField() const;
          jint getFreeParameters() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          FieldDerivativeStructure getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          FieldDerivativeStructure hypot(const FieldDerivativeStructure &) const;
          static FieldDerivativeStructure hypot(const FieldDerivativeStructure &, const FieldDerivativeStructure &);
          FieldDerivativeStructure integrate(jint, jint) const;
          FieldDerivativeStructure linearCombination(const JArray< jdouble > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const JArray< FieldDerivativeStructure > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure log() const;
          FieldDerivativeStructure log10() const;
          FieldDerivativeStructure log1p() const;
          FieldDerivativeStructure multiply(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure multiply(jdouble) const;
          FieldDerivativeStructure multiply(jint) const;
          FieldDerivativeStructure multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure negate() const;
          FieldDerivativeStructure newInstance(jdouble) const;
          FieldDerivativeStructure pow(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure pow(jdouble) const;
          FieldDerivativeStructure pow(jint) const;
          static FieldDerivativeStructure pow(jdouble, const FieldDerivativeStructure &);
          FieldDerivativeStructure rebase(const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure reciprocal() const;
          FieldDerivativeStructure remainder(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure remainder(jdouble) const;
          FieldDerivativeStructure remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure rint() const;
          FieldDerivativeStructure rootN(jint) const;
          FieldDerivativeStructure scalb(jint) const;
          FieldDerivativeStructure sign() const;
          FieldDerivativeStructure sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldDerivativeStructure sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldDerivativeStructure sqrt() const;
          FieldDerivativeStructure subtract(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure subtract(jdouble) const;
          FieldDerivativeStructure subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure tan() const;
          FieldDerivativeStructure tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldDerivativeStructure toDegrees() const;
          FieldDerivativeStructure toRadians() const;
          FieldDerivativeStructure ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDerivativeStructure);
        extern PyTypeObject *PY_TYPE(FieldDerivativeStructure);

        class t_FieldDerivativeStructure {
        public:
          PyObject_HEAD
          FieldDerivativeStructure object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldDerivativeStructure *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDerivativeStructure&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDerivativeStructure&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
