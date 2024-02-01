#ifndef org_hipparchus_analysis_differentiation_DSCompiler_H
#define org_hipparchus_analysis_differentiation_DSCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
      }
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
            mid_acos_9049ad07c45009b1,
            mid_acos_8a8f308763a86362,
            mid_acosh_9049ad07c45009b1,
            mid_acosh_8a8f308763a86362,
            mid_add_0e8ef7e6f3533636,
            mid_add_681eb8d628904b4e,
            mid_asin_9049ad07c45009b1,
            mid_asin_8a8f308763a86362,
            mid_asinh_9049ad07c45009b1,
            mid_asinh_8a8f308763a86362,
            mid_atan_9049ad07c45009b1,
            mid_atan_8a8f308763a86362,
            mid_atan2_0e8ef7e6f3533636,
            mid_atan2_681eb8d628904b4e,
            mid_atanh_9049ad07c45009b1,
            mid_atanh_8a8f308763a86362,
            mid_checkCompatibility_9cf1f5ad4b184c5c,
            mid_compose_100a3aff8efcebef,
            mid_compose_f73ba8fac41614c2,
            mid_compose_f9bc348db1810cf8,
            mid_cos_9049ad07c45009b1,
            mid_cos_8a8f308763a86362,
            mid_cosh_9049ad07c45009b1,
            mid_cosh_8a8f308763a86362,
            mid_divide_0e8ef7e6f3533636,
            mid_divide_681eb8d628904b4e,
            mid_exp_9049ad07c45009b1,
            mid_exp_8a8f308763a86362,
            mid_expm1_9049ad07c45009b1,
            mid_expm1_8a8f308763a86362,
            mid_getCompiler_04a9da16722f0f41,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getOrder_d6ab429752e7c267,
            mid_getPartialDerivativeIndex_4c6a473f00540fd2,
            mid_getPartialDerivativeOrders_adb0f0485f08dbd0,
            mid_getPartialDerivativeOrdersSum_d938fc64e8c6df2d,
            mid_getSize_d6ab429752e7c267,
            mid_linearCombination_4a11abba9da6d1a8,
            mid_linearCombination_2ff2a4b152bb43e6,
            mid_linearCombination_7c3545035a9e2422,
            mid_linearCombination_635ee2baf089aeb2,
            mid_linearCombination_16e822ac9fe106ff,
            mid_linearCombination_317f4820dc430e38,
            mid_linearCombination_c44f34fdb6edd5bb,
            mid_linearCombination_ef86823ce8b711cd,
            mid_linearCombination_38046764062aceb0,
            mid_log_9049ad07c45009b1,
            mid_log_8a8f308763a86362,
            mid_log10_9049ad07c45009b1,
            mid_log10_8a8f308763a86362,
            mid_log1p_9049ad07c45009b1,
            mid_log1p_8a8f308763a86362,
            mid_multiply_0e8ef7e6f3533636,
            mid_multiply_681eb8d628904b4e,
            mid_pow_9b86f421ba36d607,
            mid_pow_ebc5f80d3271bf9e,
            mid_pow_08025779ec6ae79b,
            mid_pow_3b3d5afa08fd4102,
            mid_pow_b60fbadf298fc1f3,
            mid_pow_f0f09f6733470a33,
            mid_pow_0e8ef7e6f3533636,
            mid_pow_681eb8d628904b4e,
            mid_rebase_9e5d830c5c63e8c2,
            mid_rebase_f2165047da55d9f2,
            mid_reciprocal_9049ad07c45009b1,
            mid_reciprocal_8a8f308763a86362,
            mid_remainder_0e8ef7e6f3533636,
            mid_remainder_681eb8d628904b4e,
            mid_rootN_9b86f421ba36d607,
            mid_rootN_f0f09f6733470a33,
            mid_sin_9049ad07c45009b1,
            mid_sin_8a8f308763a86362,
            mid_sinCos_0e8ef7e6f3533636,
            mid_sinCos_681eb8d628904b4e,
            mid_sinh_9049ad07c45009b1,
            mid_sinh_8a8f308763a86362,
            mid_sinhCosh_0e8ef7e6f3533636,
            mid_sinhCosh_681eb8d628904b4e,
            mid_sqrt_9049ad07c45009b1,
            mid_sqrt_8a8f308763a86362,
            mid_subtract_0e8ef7e6f3533636,
            mid_subtract_681eb8d628904b4e,
            mid_tan_9049ad07c45009b1,
            mid_tan_8a8f308763a86362,
            mid_tanh_9049ad07c45009b1,
            mid_tanh_8a8f308763a86362,
            mid_taylor_224ca668f23b322e,
            mid_taylor_711d120e864e9429,
            mid_taylor_8a71c1d40ede5480,
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
