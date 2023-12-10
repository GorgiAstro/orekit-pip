#ifndef org_hipparchus_analysis_FunctionUtils_H
#define org_hipparchus_analysis_FunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class BivariateFunction;
      class UnivariateFunction;
      class MultivariateVectorFunction;
      namespace differentiation {
        class MultivariateDifferentiableFunction;
        class UnivariateDifferentiableFunction;
      }
      class MultivariateFunction;
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
          mid_add_3bcb41276db4e729,
          mid_add_83e158309df32f6e,
          mid_collector_ccfa2a1e3dda76a7,
          mid_collector_9ba5c4593e3c2af1,
          mid_combine_4d9c173230ae0e4e,
          mid_compose_3bcb41276db4e729,
          mid_compose_83e158309df32f6e,
          mid_derivative_d995b8d0b97f5538,
          mid_derivative_bbc32c89f9c311a5,
          mid_fix1stArgument_950629fba33af181,
          mid_fix2ndArgument_950629fba33af181,
          mid_multiply_3bcb41276db4e729,
          mid_multiply_83e158309df32f6e,
          mid_sample_7b9dea3228efcc90,
          mid_toDifferentiable_5f386df000b7e6e3,
          mid_toDifferentiable_8339f4f7ed8eef9a,
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
