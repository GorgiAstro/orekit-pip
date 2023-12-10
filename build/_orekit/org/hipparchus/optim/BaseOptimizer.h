#ifndef org_hipparchus_optim_BaseOptimizer_H
#define org_hipparchus_optim_BaseOptimizer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace optim {
      class ConvergenceChecker;
      class OptimizationData;
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
          mid_getConvergenceChecker_c0e8b85b3220641b,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getIterations_570ce0828f81a2c1,
          mid_getMaxEvaluations_570ce0828f81a2c1,
          mid_getMaxIterations_570ce0828f81a2c1,
          mid_optimize_4d26fd885228c716,
          mid_optimize_19319236ce3fd082,
          mid_parseOptimizationData_3d26e9f3a1d7e833,
          mid_doOptimize_4d26fd885228c716,
          mid_incrementEvaluationCount_0fa09c18fee449d5,
          mid_incrementIterationCount_0fa09c18fee449d5,
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
