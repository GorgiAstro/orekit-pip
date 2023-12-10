#ifndef org_hipparchus_optim_BaseOptimizer_H
#define org_hipparchus_optim_BaseOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      class ConvergenceChecker;
    }
    namespace exception {
      class MathIllegalStateException;
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
    namespace optim {

      class BaseOptimizer : public ::java::lang::Object {
       public:
        enum {
          mid_getConvergenceChecker_100e81b1c0752b49,
          mid_getEvaluations_f2f64475e4580546,
          mid_getIterations_f2f64475e4580546,
          mid_getMaxEvaluations_f2f64475e4580546,
          mid_getMaxIterations_f2f64475e4580546,
          mid_optimize_dfd7647d9110ac9f,
          mid_optimize_2543bc354d0aa7ca,
          mid_doOptimize_dfd7647d9110ac9f,
          mid_parseOptimizationData_a5cd04a701a45f77,
          mid_incrementEvaluationCount_7ae3461a92a43152,
          mid_incrementIterationCount_7ae3461a92a43152,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BaseOptimizer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BaseOptimizer(const BaseOptimizer& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::optim::ConvergenceChecker getConvergenceChecker() const;
        jint getEvaluations() const;
        jint getIterations() const;
        jint getMaxEvaluations() const;
        jint getMaxIterations() const;
        ::java::lang::Object optimize() const;
        ::java::lang::Object optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(BaseOptimizer);
      extern PyTypeObject *PY_TYPE(BaseOptimizer);

      class t_BaseOptimizer {
      public:
        PyObject_HEAD
        BaseOptimizer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_BaseOptimizer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BaseOptimizer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BaseOptimizer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
