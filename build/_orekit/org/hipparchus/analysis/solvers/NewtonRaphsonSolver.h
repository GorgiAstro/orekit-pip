#ifndef org_hipparchus_analysis_solvers_NewtonRaphsonSolver_H
#define org_hipparchus_analysis_solvers_NewtonRaphsonSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
      }
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
    namespace analysis {
      namespace solvers {

        class NewtonRaphsonSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_17db3a65980d3441,
            mid_solve_b04629e6aaf4891e,
            mid_doSolve_dff5885c2c873297,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NewtonRaphsonSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NewtonRaphsonSolver(const NewtonRaphsonSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(obj) {}

          NewtonRaphsonSolver();
          NewtonRaphsonSolver(jdouble);

          jdouble solve(jint, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction &, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(NewtonRaphsonSolver);
        extern PyTypeObject *PY_TYPE(NewtonRaphsonSolver);

        class t_NewtonRaphsonSolver {
        public:
          PyObject_HEAD
          NewtonRaphsonSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NewtonRaphsonSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NewtonRaphsonSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NewtonRaphsonSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
