#ifndef org_hipparchus_analysis_FunctionUtils_H
#define org_hipparchus_analysis_FunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateVectorFunction;
      namespace differentiation {
        class MultivariateDifferentiableFunction;
        class UnivariateDifferentiableFunction;
      }
      class UnivariateFunction;
      class MultivariateFunction;
      class BivariateFunction;
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
          mid_add_60424d900a2da66a,
          mid_add_b09b2cfaecafda87,
          mid_collector_d1f6b1116648e289,
          mid_collector_f103380a1ae2a4ea,
          mid_combine_5e50c33782ed4814,
          mid_compose_60424d900a2da66a,
          mid_compose_b09b2cfaecafda87,
          mid_derivative_41177b4aa083d7ad,
          mid_derivative_9d36e909144e9c8b,
          mid_fix1stArgument_0f8a4710f6db6110,
          mid_fix2ndArgument_0f8a4710f6db6110,
          mid_multiply_60424d900a2da66a,
          mid_multiply_b09b2cfaecafda87,
          mid_sample_0efe32940310510c,
          mid_toDifferentiable_2106ef1f648a53b5,
          mid_toDifferentiable_69b5798b043af08d,
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
