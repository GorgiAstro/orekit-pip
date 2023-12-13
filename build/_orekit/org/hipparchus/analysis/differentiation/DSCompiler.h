#ifndef org_hipparchus_analysis_differentiation_DSCompiler_H
#define org_hipparchus_analysis_differentiation_DSCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
      }
    }
    class CalculusFieldElement;
    namespace exception {
      class MathRuntimeException;
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

        class DSCompiler : public ::java::lang::Object {
         public:
          enum {
            mid_acos_7f42c24ce6feebb5,
            mid_acos_9433cb1b29d70528,
            mid_acosh_7f42c24ce6feebb5,
            mid_acosh_9433cb1b29d70528,
            mid_add_3f8fc7e3a9308c23,
            mid_add_b457dda03831e1cb,
            mid_asin_7f42c24ce6feebb5,
            mid_asin_9433cb1b29d70528,
            mid_asinh_7f42c24ce6feebb5,
            mid_asinh_9433cb1b29d70528,
            mid_atan_7f42c24ce6feebb5,
            mid_atan_9433cb1b29d70528,
            mid_atan2_3f8fc7e3a9308c23,
            mid_atan2_b457dda03831e1cb,
            mid_atanh_7f42c24ce6feebb5,
            mid_atanh_9433cb1b29d70528,
            mid_checkCompatibility_99b96bda8f8ef98e,
            mid_compose_43b010ad68ef496f,
            mid_compose_8ce5aacb072ba840,
            mid_compose_a6692ca32fba1e75,
            mid_cos_7f42c24ce6feebb5,
            mid_cos_9433cb1b29d70528,
            mid_cosh_7f42c24ce6feebb5,
            mid_cosh_9433cb1b29d70528,
            mid_divide_3f8fc7e3a9308c23,
            mid_divide_b457dda03831e1cb,
            mid_exp_7f42c24ce6feebb5,
            mid_exp_9433cb1b29d70528,
            mid_expm1_7f42c24ce6feebb5,
            mid_expm1_9433cb1b29d70528,
            mid_getCompiler_e344d5ef5ac234cf,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getOrder_55546ef6a647f39b,
            mid_getPartialDerivativeIndex_d57a86117ebc55bd,
            mid_getPartialDerivativeOrders_7247c1a113e968de,
            mid_getPartialDerivativeOrdersSum_0e7cf35192c3effe,
            mid_getSize_55546ef6a647f39b,
            mid_linearCombination_ee5aa93093742a55,
            mid_linearCombination_bfaa6cbe8aefc5c7,
            mid_linearCombination_2beefad0ea10819e,
            mid_linearCombination_2c17d1262431e391,
            mid_linearCombination_ac1301009086907e,
            mid_linearCombination_274482b2e2c10c74,
            mid_linearCombination_6336f7f50e9527e4,
            mid_linearCombination_a42021a295b5530a,
            mid_linearCombination_5c9005ac6da46e6b,
            mid_log_7f42c24ce6feebb5,
            mid_log_9433cb1b29d70528,
            mid_log10_7f42c24ce6feebb5,
            mid_log10_9433cb1b29d70528,
            mid_log1p_7f42c24ce6feebb5,
            mid_log1p_9433cb1b29d70528,
            mid_multiply_3f8fc7e3a9308c23,
            mid_multiply_b457dda03831e1cb,
            mid_pow_20f7af41648d0019,
            mid_pow_3c94e69776adcb03,
            mid_pow_cb94d18f8cc8b871,
            mid_pow_e21deca0387a1a8a,
            mid_pow_4433cdc0931d8583,
            mid_pow_7a9e7172478c6020,
            mid_pow_3f8fc7e3a9308c23,
            mid_pow_b457dda03831e1cb,
            mid_rebase_d403d888b24df625,
            mid_rebase_4adc42ee40bf44e4,
            mid_reciprocal_7f42c24ce6feebb5,
            mid_reciprocal_9433cb1b29d70528,
            mid_remainder_3f8fc7e3a9308c23,
            mid_remainder_b457dda03831e1cb,
            mid_rootN_20f7af41648d0019,
            mid_rootN_7a9e7172478c6020,
            mid_sin_7f42c24ce6feebb5,
            mid_sin_9433cb1b29d70528,
            mid_sinCos_3f8fc7e3a9308c23,
            mid_sinCos_b457dda03831e1cb,
            mid_sinh_7f42c24ce6feebb5,
            mid_sinh_9433cb1b29d70528,
            mid_sinhCosh_3f8fc7e3a9308c23,
            mid_sinhCosh_b457dda03831e1cb,
            mid_sqrt_7f42c24ce6feebb5,
            mid_sqrt_9433cb1b29d70528,
            mid_subtract_3f8fc7e3a9308c23,
            mid_subtract_b457dda03831e1cb,
            mid_tan_7f42c24ce6feebb5,
            mid_tan_9433cb1b29d70528,
            mid_tanh_7f42c24ce6feebb5,
            mid_tanh_9433cb1b29d70528,
            mid_taylor_3b5d51d5c827748c,
            mid_taylor_0ff8c94f9d7fab9c,
            mid_taylor_cbdaf04f3b997349,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSCompiler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSCompiler(const DSCompiler& obj) : ::java::lang::Object(obj) {}

          void acos(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void acos(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void acosh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void acosh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void add(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void add(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void asin(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void asin(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void asinh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void asinh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void atan(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void atan(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void atan2(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void atan2(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void atanh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void atanh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void checkCompatibility(const DSCompiler &) const;
          void compose(const JArray< jdouble > &, jint, const JArray< jdouble > &, const JArray< jdouble > &, jint) const;
          void compose(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< jdouble > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void compose(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void cos(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void cos(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void cosh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void cosh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void divide(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void divide(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void exp(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void exp(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void expm1(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void expm1(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          static DSCompiler getCompiler(jint, jint);
          jint getFreeParameters() const;
          jint getOrder() const;
          jint getPartialDerivativeIndex(const JArray< jint > &) const;
          JArray< jint > getPartialDerivativeOrders(jint) const;
          jint getPartialDerivativeOrdersSum(jint) const;
          jint getSize() const;
          void linearCombination(jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void linearCombination(jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void linearCombination(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void linearCombination(jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void linearCombination(jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void linearCombination(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void linearCombination(jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void linearCombination(jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void linearCombination(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void log(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void log(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void log10(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void log10(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void log1p(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void log1p(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void multiply(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void multiply(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void pow(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint) const;
          void pow(jdouble, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void pow(const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint) const;
          void pow(jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void pow(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void pow(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void pow(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void pow(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void rebase(const JArray< jdouble > &, jint, const DSCompiler &, const JArray< jdouble > &, const JArray< jdouble > &, jint) const;
          void rebase(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const DSCompiler &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void reciprocal(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void remainder(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void remainder(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void rootN(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint) const;
          void rootN(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void sin(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void sin(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void sinCos(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void sinh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void sinh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void sinhCosh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void sqrt(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void subtract(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void subtract(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void tan(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void tan(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void tanh(const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void tanh(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          jdouble taylor(const JArray< jdouble > &, jint, const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(DSCompiler);
        extern PyTypeObject *PY_TYPE(DSCompiler);

        class t_DSCompiler {
        public:
          PyObject_HEAD
          DSCompiler object;
          static PyObject *wrap_Object(const DSCompiler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
