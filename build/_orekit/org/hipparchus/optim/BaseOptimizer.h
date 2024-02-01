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
          mid_getConvergenceChecker_ecb318336ebe4cc7,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getIterations_d6ab429752e7c267,
          mid_getMaxEvaluations_d6ab429752e7c267,
          mid_getMaxIterations_d6ab429752e7c267,
          mid_optimize_704a5bee58538972,
          mid_optimize_7c1cfcae8b9ddcfc,
          mid_parseOptimizationData_df324e640da2eeec,
          mid_incrementEvaluationCount_ff7cb6c242604316,
          mid_doOptimize_704a5bee58538972,
          mid_incrementIterationCount_ff7cb6c242604316,
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
