#ifndef org_hipparchus_analysis_FunctionUtils_H
#define org_hipparchus_analysis_FunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class MultivariateDifferentiableFunction;
      }
      class MultivariateVectorFunction;
      class MultivariateFunction;
      class BivariateFunction;
      class UnivariateFunction;
    }
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

      class FunctionUtils : public ::java::lang::Object {
       public:
        enum {
          mid_add_1d1dea4d2fa5c759,
          mid_add_689e17eadd7fa7c2,
          mid_collector_11adc540ecceaf3d,
          mid_collector_1d48c753d1dcee69,
          mid_combine_3f08252e15ed56dd,
          mid_compose_1d1dea4d2fa5c759,
          mid_compose_689e17eadd7fa7c2,
          mid_derivative_1cfd32e68d698037,
          mid_derivative_68d32ee5bac2b20e,
          mid_fix1stArgument_9e09c654d7549869,
          mid_fix2ndArgument_9e09c654d7549869,
          mid_multiply_1d1dea4d2fa5c759,
          mid_multiply_689e17eadd7fa7c2,
          mid_sample_5d357094f120ebb4,
          mid_toDifferentiable_8f826de7259f8a4a,
          mid_toDifferentiable_467dda28257459c9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FunctionUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FunctionUtils(const FunctionUtils& obj) : ::java::lang::Object(obj) {}

        static ::org::hipparchus::analysis::UnivariateFunction add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);
        static ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > &);
        static ::org::hipparchus::analysis::MultivariateFunction collector(const ::org::hipparchus::analysis::BivariateFunction &, jdouble);
        static ::org::hipparchus::analysis::MultivariateFunction collector(const ::org::hipparchus::analysis::BivariateFunction &, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble);
        static ::org::hipparchus::analysis::UnivariateFunction combine(const ::org::hipparchus::analysis::BivariateFunction &, const ::org::hipparchus::analysis::UnivariateFunction &, const ::org::hipparchus::analysis::UnivariateFunction &);
        static ::org::hipparchus::analysis::UnivariateFunction compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);
        static ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > &);
        static ::org::hipparchus::analysis::MultivariateFunction derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction &, const JArray< jint > &);
        static ::org::hipparchus::analysis::UnivariateFunction derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction &, jint);
        static ::org::hipparchus::analysis::UnivariateFunction fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction &, jdouble);
        static ::org::hipparchus::analysis::UnivariateFunction fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction &, jdouble);
        static ::org::hipparchus::analysis::UnivariateFunction multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);
        static ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > &);
        static JArray< jdouble > sample(const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jint);
        static ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction &, const JArray< ::org::hipparchus::analysis::UnivariateFunction > &);
        static ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction &, const ::org::hipparchus::analysis::MultivariateVectorFunction &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FunctionUtils);
      extern PyTypeObject *PY_TYPE(FunctionUtils);

      class t_FunctionUtils {
      public:
        PyObject_HEAD
        FunctionUtils object;
        static PyObject *wrap_Object(const FunctionUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
