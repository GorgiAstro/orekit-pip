#ifndef org_hipparchus_analysis_differentiation_DSCompiler_H
#define org_hipparchus_analysis_differentiation_DSCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
      }
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
            mid_acos_abdc897ef1d0a3b6,
            mid_acos_2c59e5b700f764fd,
            mid_acosh_abdc897ef1d0a3b6,
            mid_acosh_2c59e5b700f764fd,
            mid_add_43917ec5d52cee4e,
            mid_add_2176664b194d8149,
            mid_asin_abdc897ef1d0a3b6,
            mid_asin_2c59e5b700f764fd,
            mid_asinh_abdc897ef1d0a3b6,
            mid_asinh_2c59e5b700f764fd,
            mid_atan_abdc897ef1d0a3b6,
            mid_atan_2c59e5b700f764fd,
            mid_atan2_43917ec5d52cee4e,
            mid_atan2_2176664b194d8149,
            mid_atanh_abdc897ef1d0a3b6,
            mid_atanh_2c59e5b700f764fd,
            mid_checkCompatibility_f300d3e741518c7e,
            mid_compose_de00a93bd8ef4f07,
            mid_compose_09274b1ecbfc1852,
            mid_compose_e5be4f2899cc8f6f,
            mid_cos_abdc897ef1d0a3b6,
            mid_cos_2c59e5b700f764fd,
            mid_cosh_abdc897ef1d0a3b6,
            mid_cosh_2c59e5b700f764fd,
            mid_divide_43917ec5d52cee4e,
            mid_divide_2176664b194d8149,
            mid_exp_abdc897ef1d0a3b6,
            mid_exp_2c59e5b700f764fd,
            mid_expm1_abdc897ef1d0a3b6,
            mid_expm1_2c59e5b700f764fd,
            mid_getCompiler_2aaa924bc43e4178,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getOrder_f2f64475e4580546,
            mid_getPartialDerivativeIndex_5c5c9df37b0af581,
            mid_getPartialDerivativeOrders_d7f52bcc4a12ae58,
            mid_getPartialDerivativeOrdersSum_38565d58479aa24a,
            mid_getSize_f2f64475e4580546,
            mid_linearCombination_f6fc2fb899672786,
            mid_linearCombination_e737b2c342ced772,
            mid_linearCombination_80dfd6c6f7c08dab,
            mid_linearCombination_dfe0eee1fbf295aa,
            mid_linearCombination_bb20533b29f62e58,
            mid_linearCombination_2759abbce2ac2c32,
            mid_linearCombination_da62b776c453f88a,
            mid_linearCombination_c64a31724cdff328,
            mid_linearCombination_acdff3b3879274c2,
            mid_log_abdc897ef1d0a3b6,
            mid_log_2c59e5b700f764fd,
            mid_log10_abdc897ef1d0a3b6,
            mid_log10_2c59e5b700f764fd,
            mid_log1p_abdc897ef1d0a3b6,
            mid_log1p_2c59e5b700f764fd,
            mid_multiply_43917ec5d52cee4e,
            mid_multiply_2176664b194d8149,
            mid_pow_5093c2ed2b93b86d,
            mid_pow_8ddf7d9e15a30ad0,
            mid_pow_e7375ab0cb0b1603,
            mid_pow_569d6c57dfcd05f5,
            mid_pow_c7219807463ed432,
            mid_pow_a19ff1c7367ec783,
            mid_pow_43917ec5d52cee4e,
            mid_pow_2176664b194d8149,
            mid_rebase_9c89f32ad8b8fec0,
            mid_rebase_e55f63420730d3c0,
            mid_reciprocal_abdc897ef1d0a3b6,
            mid_reciprocal_2c59e5b700f764fd,
            mid_remainder_43917ec5d52cee4e,
            mid_remainder_2176664b194d8149,
            mid_rootN_569d6c57dfcd05f5,
            mid_rootN_a19ff1c7367ec783,
            mid_sin_abdc897ef1d0a3b6,
            mid_sin_2c59e5b700f764fd,
            mid_sinCos_43917ec5d52cee4e,
            mid_sinCos_2176664b194d8149,
            mid_sinh_abdc897ef1d0a3b6,
            mid_sinh_2c59e5b700f764fd,
            mid_sinhCosh_43917ec5d52cee4e,
            mid_sinhCosh_2176664b194d8149,
            mid_sqrt_abdc897ef1d0a3b6,
            mid_sqrt_2c59e5b700f764fd,
            mid_subtract_43917ec5d52cee4e,
            mid_subtract_2176664b194d8149,
            mid_tan_abdc897ef1d0a3b6,
            mid_tan_2c59e5b700f764fd,
            mid_tanh_abdc897ef1d0a3b6,
            mid_tanh_2c59e5b700f764fd,
            mid_taylor_fdb3704d4e07ca46,
            mid_taylor_b87ff4044cd8f999,
            mid_taylor_61ef775199b2b6d6,
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
          void pow(jdouble, const JArray< jdouble > &, jint, const JArray< jdouble > &, jint) const;
          void pow(jdouble, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint, const JArray< ::org::hipparchus::CalculusFieldElement > &, jint) const;
          void pow(const JArray< jdouble > &, jint, jdouble, const JArray< jdouble > &, jint) const;
          void pow(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint) const;
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
