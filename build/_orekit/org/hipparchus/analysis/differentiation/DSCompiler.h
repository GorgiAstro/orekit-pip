#ifndef org_hipparchus_analysis_differentiation_DSCompiler_H
#define org_hipparchus_analysis_differentiation_DSCompiler_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
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
            mid_acos_cc38265e0e7b71aa,
            mid_acos_a1358359a2c264d6,
            mid_acosh_cc38265e0e7b71aa,
            mid_acosh_a1358359a2c264d6,
            mid_add_8c86bd173466f6ac,
            mid_add_427be7eefefa5cbb,
            mid_asin_cc38265e0e7b71aa,
            mid_asin_a1358359a2c264d6,
            mid_asinh_cc38265e0e7b71aa,
            mid_asinh_a1358359a2c264d6,
            mid_atan_cc38265e0e7b71aa,
            mid_atan_a1358359a2c264d6,
            mid_atan2_8c86bd173466f6ac,
            mid_atan2_427be7eefefa5cbb,
            mid_atanh_cc38265e0e7b71aa,
            mid_atanh_a1358359a2c264d6,
            mid_checkCompatibility_ae5be817fafcca99,
            mid_compose_d73d7f15da1647dd,
            mid_compose_c5ee0ba6c794cc27,
            mid_compose_718f04e85d39d69e,
            mid_cos_cc38265e0e7b71aa,
            mid_cos_a1358359a2c264d6,
            mid_cosh_cc38265e0e7b71aa,
            mid_cosh_a1358359a2c264d6,
            mid_divide_8c86bd173466f6ac,
            mid_divide_427be7eefefa5cbb,
            mid_exp_cc38265e0e7b71aa,
            mid_exp_a1358359a2c264d6,
            mid_expm1_cc38265e0e7b71aa,
            mid_expm1_a1358359a2c264d6,
            mid_getCompiler_be8e29eee9b22f5c,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivativeIndex_5741cb0fe93805c9,
            mid_getPartialDerivativeOrders_10b428b076a044c1,
            mid_getPartialDerivativeOrdersSum_2235cd056f5a882b,
            mid_getSize_570ce0828f81a2c1,
            mid_linearCombination_74e774f8910f870c,
            mid_linearCombination_aeb02933e53fd65b,
            mid_linearCombination_de052d7aa8d4078a,
            mid_linearCombination_c70650e89569ecda,
            mid_linearCombination_b91c9a90d72398a3,
            mid_linearCombination_c1c14c5ffdc2de48,
            mid_linearCombination_fc21e0e1a78cefa3,
            mid_linearCombination_12f6251fffe0a9e0,
            mid_linearCombination_9d6a82f95ec57f16,
            mid_log_cc38265e0e7b71aa,
            mid_log_a1358359a2c264d6,
            mid_log10_cc38265e0e7b71aa,
            mid_log10_a1358359a2c264d6,
            mid_log1p_cc38265e0e7b71aa,
            mid_log1p_a1358359a2c264d6,
            mid_multiply_8c86bd173466f6ac,
            mid_multiply_427be7eefefa5cbb,
            mid_pow_71abb996c0ef59b0,
            mid_pow_496cf0524d79fbb0,
            mid_pow_94ab6275ac5e9d26,
            mid_pow_38e474cfd967ed64,
            mid_pow_6721532a5ef08209,
            mid_pow_86cb6143b3308931,
            mid_pow_8c86bd173466f6ac,
            mid_pow_427be7eefefa5cbb,
            mid_rebase_8aaa7f417ac20010,
            mid_rebase_63f981d0b5c4ecd4,
            mid_reciprocal_cc38265e0e7b71aa,
            mid_reciprocal_a1358359a2c264d6,
            mid_remainder_8c86bd173466f6ac,
            mid_remainder_427be7eefefa5cbb,
            mid_rootN_38e474cfd967ed64,
            mid_rootN_86cb6143b3308931,
            mid_sin_cc38265e0e7b71aa,
            mid_sin_a1358359a2c264d6,
            mid_sinCos_8c86bd173466f6ac,
            mid_sinCos_427be7eefefa5cbb,
            mid_sinh_cc38265e0e7b71aa,
            mid_sinh_a1358359a2c264d6,
            mid_sinhCosh_8c86bd173466f6ac,
            mid_sinhCosh_427be7eefefa5cbb,
            mid_sqrt_cc38265e0e7b71aa,
            mid_sqrt_a1358359a2c264d6,
            mid_subtract_8c86bd173466f6ac,
            mid_subtract_427be7eefefa5cbb,
            mid_tan_cc38265e0e7b71aa,
            mid_tan_a1358359a2c264d6,
            mid_tanh_cc38265e0e7b71aa,
            mid_tanh_a1358359a2c264d6,
            mid_taylor_f3a6452d39e2d233,
            mid_taylor_71b4d3fb4d9ea57a,
            mid_taylor_c4ac2a5923687bed,
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
