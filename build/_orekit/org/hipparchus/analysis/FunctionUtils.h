#ifndef org_hipparchus_analysis_FunctionUtils_H
#define org_hipparchus_analysis_FunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class BivariateFunction;
      class UnivariateFunction;
      class MultivariateVectorFunction;
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class MultivariateDifferentiableFunction;
      }
      class MultivariateFunction;
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
          mid_add_7fa3f7fd3ae81707,
          mid_add_aa258a25e5aa8480,
          mid_collector_f1cef6b9a4ab60ff,
          mid_collector_8d82531d92573cbf,
          mid_combine_485b9d450102a3d6,
          mid_compose_7fa3f7fd3ae81707,
          mid_compose_aa258a25e5aa8480,
          mid_derivative_6067394c788ff7c4,
          mid_derivative_d32286ed7ab8e1ed,
          mid_fix1stArgument_6433026d4a74b2a4,
          mid_fix2ndArgument_6433026d4a74b2a4,
          mid_multiply_7fa3f7fd3ae81707,
          mid_multiply_aa258a25e5aa8480,
          mid_sample_3682f29a267a9c14,
          mid_toDifferentiable_bcc65662dd57fbae,
          mid_toDifferentiable_fca30ac7ebcab533,
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
