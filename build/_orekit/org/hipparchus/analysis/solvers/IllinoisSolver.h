#ifndef org_hipparchus_analysis_solvers_IllinoisSolver_H
#define org_hipparchus_analysis_solvers_IllinoisSolver_H

#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
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
      namespace solvers {

        class IllinoisSolver : public ::org::hipparchus::analysis::solvers::BaseSecantSolver {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_init$_b5167f35b2521627,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IllinoisSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IllinoisSolver(const IllinoisSolver& obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {}

          IllinoisSolver();
          IllinoisSolver(jdouble);
          IllinoisSolver(jdouble, jdouble);
          IllinoisSolver(jdouble, jdouble, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        extern PyType_Def PY_TYPE_DEF(IllinoisSolver);
        extern PyTypeObject *PY_TYPE(IllinoisSolver);

        class t_IllinoisSolver {
        public:
          PyObject_HEAD
          IllinoisSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_IllinoisSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IllinoisSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IllinoisSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
