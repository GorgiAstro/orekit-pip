#ifndef org_hipparchus_optim_OptimizationProblem_H
#define org_hipparchus_optim_OptimizationProblem_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
    }
    namespace util {
      class Incrementor;
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

      class OptimizationProblem : public ::java::lang::Object {
       public:
        enum {
          mid_getConvergenceChecker_cae0efb5080a73b8,
          mid_getEvaluationCounter_3c86b06a86576583,
          mid_getIterationCounter_3c86b06a86576583,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OptimizationProblem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OptimizationProblem(const OptimizationProblem& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::optim::ConvergenceChecker getConvergenceChecker() const;
        ::org::hipparchus::util::Incrementor getEvaluationCounter() const;
        ::org::hipparchus::util::Incrementor getIterationCounter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(OptimizationProblem);
      extern PyTypeObject *PY_TYPE(OptimizationProblem);

      class t_OptimizationProblem {
      public:
        PyObject_HEAD
        OptimizationProblem object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OptimizationProblem *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OptimizationProblem&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OptimizationProblem&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
