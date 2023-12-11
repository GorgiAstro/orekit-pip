#ifndef org_hipparchus_analysis_solvers_BisectionSolver_H
#define org_hipparchus_analysis_solvers_BisectionSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

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

        class BisectionSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_10f281d777284cea,
            mid_init$_ab23f4ae0fb33968,
            mid_doSolve_557b8123390d8d0c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BisectionSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BisectionSolver(const BisectionSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {}

          BisectionSolver();
          BisectionSolver(jdouble);
          BisectionSolver(jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(BisectionSolver);
        extern PyTypeObject *PY_TYPE(BisectionSolver);

        class t_BisectionSolver {
        public:
          PyObject_HEAD
          BisectionSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BisectionSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BisectionSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BisectionSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
