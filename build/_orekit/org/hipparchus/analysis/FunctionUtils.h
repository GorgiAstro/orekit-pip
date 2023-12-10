#ifndef org_hipparchus_analysis_FunctionUtils_H
#define org_hipparchus_analysis_FunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class MultivariateDifferentiableFunction;
        class UnivariateDifferentiableFunction;
      }
      class MultivariateVectorFunction;
      class BivariateFunction;
      class MultivariateFunction;
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
          mid_add_7170b070702438b3,
          mid_add_4eb7faaab711f396,
          mid_collector_4c39da77fc432e07,
          mid_collector_9349fd916a39e221,
          mid_combine_3330827e5a477097,
          mid_compose_7170b070702438b3,
          mid_compose_4eb7faaab711f396,
          mid_derivative_1af9f11a6865952e,
          mid_derivative_5707ffcbbb3c291a,
          mid_fix1stArgument_f48bb0dc5eafff9b,
          mid_fix2ndArgument_f48bb0dc5eafff9b,
          mid_multiply_7170b070702438b3,
          mid_multiply_4eb7faaab711f396,
          mid_sample_bb5b80d154c3de2f,
          mid_toDifferentiable_ec776c30a2f68070,
          mid_toDifferentiable_33be8e58464546b4,
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
