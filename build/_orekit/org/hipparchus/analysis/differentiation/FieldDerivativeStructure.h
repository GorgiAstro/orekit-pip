#ifndef org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H
#define org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FDSFactory;
        class FieldDerivative;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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

        class FieldDerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_7208bb4259086f92,
            mid_acos_7208bb4259086f92,
            mid_acosh_7208bb4259086f92,
            mid_add_4bc698b278a3f902,
            mid_add_4695b8f2ebeb7167,
            mid_add_a88d27168b002560,
            mid_asin_7208bb4259086f92,
            mid_asinh_7208bb4259086f92,
            mid_atan_7208bb4259086f92,
            mid_atan2_4bc698b278a3f902,
            mid_atan2_cb1f209a45bf6e2f,
            mid_atanh_7208bb4259086f92,
            mid_cbrt_7208bb4259086f92,
            mid_ceil_7208bb4259086f92,
            mid_compose_7d4cf49ebbb0b728,
            mid_compose_6b2f4e12f71db966,
            mid_copySign_4bc698b278a3f902,
            mid_copySign_4695b8f2ebeb7167,
            mid_copySign_a88d27168b002560,
            mid_cos_7208bb4259086f92,
            mid_cosh_7208bb4259086f92,
            mid_differentiate_75c1c568aaa91952,
            mid_divide_4bc698b278a3f902,
            mid_divide_4695b8f2ebeb7167,
            mid_divide_a88d27168b002560,
            mid_exp_7208bb4259086f92,
            mid_expm1_7208bb4259086f92,
            mid_floor_7208bb4259086f92,
            mid_getAllDerivatives_01c7d10e96d5cf94,
            mid_getExponent_f2f64475e4580546,
            mid_getFactory_7a7e13b950af160a,
            mid_getField_70b4bbd3fa378d6b,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getOrder_f2f64475e4580546,
            mid_getPartialDerivative_f622835d869c0081,
            mid_getPi_7208bb4259086f92,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_e6d4d3215c30992a,
            mid_hypot_4bc698b278a3f902,
            mid_hypot_cb1f209a45bf6e2f,
            mid_integrate_75c1c568aaa91952,
            mid_linearCombination_04f59918c5be4fed,
            mid_linearCombination_d170ed074b45048a,
            mid_linearCombination_8f2c4f90fc13ec76,
            mid_linearCombination_81351117920dfb9b,
            mid_linearCombination_8627910626466fda,
            mid_linearCombination_5acc22dcbdcda82a,
            mid_linearCombination_aed2dc34d0c27da9,
            mid_linearCombination_454b8357f671987b,
            mid_linearCombination_a7317bb066b39ec1,
            mid_linearCombination_450714fafa47a57c,
            mid_linearCombination_86808445940b778b,
            mid_linearCombination_a845a3d968074247,
            mid_log_7208bb4259086f92,
            mid_log10_7208bb4259086f92,
            mid_log1p_7208bb4259086f92,
            mid_multiply_4bc698b278a3f902,
            mid_multiply_4695b8f2ebeb7167,
            mid_multiply_ee1359d8f0ec1f6b,
            mid_multiply_a88d27168b002560,
            mid_negate_7208bb4259086f92,
            mid_newInstance_4695b8f2ebeb7167,
            mid_pow_4bc698b278a3f902,
            mid_pow_4695b8f2ebeb7167,
            mid_pow_ee1359d8f0ec1f6b,
            mid_pow_17f6b1a6bd642b8f,
            mid_rebase_19e3165dd888e700,
            mid_reciprocal_7208bb4259086f92,
            mid_remainder_4bc698b278a3f902,
            mid_remainder_4695b8f2ebeb7167,
            mid_remainder_a88d27168b002560,
            mid_rint_7208bb4259086f92,
            mid_rootN_ee1359d8f0ec1f6b,
            mid_scalb_ee1359d8f0ec1f6b,
            mid_sign_7208bb4259086f92,
            mid_sin_7208bb4259086f92,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_7208bb4259086f92,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_7208bb4259086f92,
            mid_subtract_4bc698b278a3f902,
            mid_subtract_4695b8f2ebeb7167,
            mid_subtract_a88d27168b002560,
            mid_tan_7208bb4259086f92,
            mid_tanh_7208bb4259086f92,
            mid_taylor_5e09d3ff87d23c4c,
            mid_taylor_05c598bf3375e090,
            mid_toDegrees_7208bb4259086f92,
            mid_toRadians_7208bb4259086f92,
            mid_ulp_7208bb4259086f92,
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
