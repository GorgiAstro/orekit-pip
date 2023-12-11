#ifndef org_hipparchus_optim_BaseOptimizer_H
#define org_hipparchus_optim_BaseOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace optim {
      class OptimizationData;
      class ConvergenceChecker;
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
          mid_getConvergenceChecker_4c680323f2c08379,
          mid_getEvaluations_412668abc8d889e9,
          mid_getIterations_412668abc8d889e9,
          mid_getMaxEvaluations_412668abc8d889e9,
          mid_getMaxIterations_412668abc8d889e9,
          mid_optimize_e661fe3ba2fafb22,
          mid_optimize_531d71f92ce59bee,
          mid_incrementIterationCount_0640e6acf969ed28,
          mid_incrementEvaluationCount_0640e6acf969ed28,
          mid_doOptimize_e661fe3ba2fafb22,
          mid_parseOptimizationData_946a92401917c130,
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
