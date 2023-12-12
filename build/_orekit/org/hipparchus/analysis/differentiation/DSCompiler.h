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
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
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

        class DSCompiler : public ::java::lang::Object {
         public:
          enum {
            mid_acos_1c1f3189fcfc20e0,
            mid_acos_e49c38112e0e76c3,
            mid_acosh_1c1f3189fcfc20e0,
            mid_acosh_e49c38112e0e76c3,
            mid_add_75587618ec7584f4,
            mid_add_baf86bf3f75c157f,
            mid_asin_1c1f3189fcfc20e0,
            mid_asin_e49c38112e0e76c3,
            mid_asinh_1c1f3189fcfc20e0,
            mid_asinh_e49c38112e0e76c3,
            mid_atan_1c1f3189fcfc20e0,
            mid_atan_e49c38112e0e76c3,
            mid_atan2_75587618ec7584f4,
            mid_atan2_baf86bf3f75c157f,
            mid_atanh_1c1f3189fcfc20e0,
            mid_atanh_e49c38112e0e76c3,
            mid_checkCompatibility_31543c7dfd01f8b0,
            mid_compose_48f17ab706450c14,
            mid_compose_2fd24ab0927877dd,
            mid_compose_2af35987eb3a124f,
            mid_cos_1c1f3189fcfc20e0,
            mid_cos_e49c38112e0e76c3,
            mid_cosh_1c1f3189fcfc20e0,
            mid_cosh_e49c38112e0e76c3,
            mid_divide_75587618ec7584f4,
            mid_divide_baf86bf3f75c157f,
            mid_exp_1c1f3189fcfc20e0,
            mid_exp_e49c38112e0e76c3,
            mid_expm1_1c1f3189fcfc20e0,
            mid_expm1_e49c38112e0e76c3,
            mid_getCompiler_1c6990d1143f2bfa,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivativeIndex_a15ca216c6412600,
            mid_getPartialDerivativeOrders_014107aa2fd99303,
            mid_getPartialDerivativeOrdersSum_0092017e99012694,
            mid_getSize_412668abc8d889e9,
            mid_linearCombination_a010397b8c8ddd12,
            mid_linearCombination_b58a6b2ac6694134,
            mid_linearCombination_9c02d9e192251577,
            mid_linearCombination_5a58011bde093b17,
            mid_linearCombination_ef83a7b16654f97d,
            mid_linearCombination_715e4de9dd772ff8,
            mid_linearCombination_29e0d3f2fb9a0b22,
            mid_linearCombination_a23caf9dddbae052,
            mid_linearCombination_4672370016b14951,
            mid_log_1c1f3189fcfc20e0,
            mid_log_e49c38112e0e76c3,
            mid_log10_1c1f3189fcfc20e0,
            mid_log10_e49c38112e0e76c3,
            mid_log1p_1c1f3189fcfc20e0,
            mid_log1p_e49c38112e0e76c3,
            mid_multiply_75587618ec7584f4,
            mid_multiply_baf86bf3f75c157f,
            mid_pow_53a9a44f8574f356,
            mid_pow_54036f87a261541e,
            mid_pow_cbb76825a8d4beaf,
            mid_pow_42c221f4031e843c,
            mid_pow_6b3897608c1b0daf,
            mid_pow_fa2f79333975bc6a,
            mid_pow_75587618ec7584f4,
            mid_pow_baf86bf3f75c157f,
            mid_rebase_935ea0746c2c254c,
            mid_rebase_97f72aa4cbf1d782,
            mid_reciprocal_1c1f3189fcfc20e0,
            mid_reciprocal_e49c38112e0e76c3,
            mid_remainder_75587618ec7584f4,
            mid_remainder_baf86bf3f75c157f,
            mid_rootN_42c221f4031e843c,
            mid_rootN_fa2f79333975bc6a,
            mid_sin_1c1f3189fcfc20e0,
            mid_sin_e49c38112e0e76c3,
            mid_sinCos_75587618ec7584f4,
            mid_sinCos_baf86bf3f75c157f,
            mid_sinh_1c1f3189fcfc20e0,
            mid_sinh_e49c38112e0e76c3,
            mid_sinhCosh_75587618ec7584f4,
            mid_sinhCosh_baf86bf3f75c157f,
            mid_sqrt_1c1f3189fcfc20e0,
            mid_sqrt_e49c38112e0e76c3,
            mid_subtract_75587618ec7584f4,
            mid_subtract_baf86bf3f75c157f,
            mid_tan_1c1f3189fcfc20e0,
            mid_tan_e49c38112e0e76c3,
            mid_tanh_1c1f3189fcfc20e0,
            mid_tanh_e49c38112e0e76c3,
            mid_taylor_dc49a22e98ba79cd,
            mid_taylor_a5abf7d562a4421a,
            mid_taylor_efd8426c8b86fa55,
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
