#ifndef org_hipparchus_analysis_solvers_BrentSolver_H
#define org_hipparchus_analysis_solvers_BrentSolver_H

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

        class BrentSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_17db3a65980d3441,
            mid_init$_8f2e782d5278b131,
            mid_init$_2c56b6dd4d4b1dec,
            mid_doSolve_dff5885c2c873297,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BrentSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BrentSolver(const BrentSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {}

          BrentSolver();
          BrentSolver(jdouble);
          BrentSolver(jdouble, jdouble);
          BrentSolver(jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(BrentSolver);
        extern PyTypeObject *PY_TYPE(BrentSolver);

        class t_BrentSolver {
        public:
          PyObject_HEAD
          BrentSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BrentSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BrentSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BrentSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
