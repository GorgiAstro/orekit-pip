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
            mid_init$_7ae3461a92a43152,
            mid_init$_77e0f9a1f260e2e5,
            mid_solve_5d6ba4074d08b574,
            mid_doSolve_456d9a2f64d6b28d,
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
