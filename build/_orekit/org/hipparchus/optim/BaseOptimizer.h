#ifndef org_hipparchus_optim_BaseOptimizer_H
#define org_hipparchus_optim_BaseOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
      class OptimizationData;
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
          mid_getConvergenceChecker_cae0efb5080a73b8,
          mid_getEvaluations_55546ef6a647f39b,
          mid_getIterations_55546ef6a647f39b,
          mid_getMaxEvaluations_55546ef6a647f39b,
          mid_getMaxIterations_55546ef6a647f39b,
          mid_optimize_541690f9ee81d3ad,
          mid_optimize_91381cab165160dc,
          mid_parseOptimizationData_14193ddbce7a2cc0,
          mid_doOptimize_541690f9ee81d3ad,
          mid_incrementEvaluationCount_a1fa5dae97ea5ed2,
          mid_incrementIterationCount_a1fa5dae97ea5ed2,
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
