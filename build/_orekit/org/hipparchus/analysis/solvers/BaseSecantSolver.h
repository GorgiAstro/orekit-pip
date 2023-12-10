#ifndef org_hipparchus_analysis_solvers_BaseSecantSolver_H
#define org_hipparchus_analysis_solvers_BaseSecantSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver$Interval;
        class BracketedUnivariateSolver;
        class AllowedSolution;
      }
      class UnivariateFunction;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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

        class BaseSecantSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_solve_ba3e208e0ba870dd,
            mid_solve_136fe8df860928b8,
            mid_solve_89bba4a49543a54f,
            mid_solveInterval_fff76e1052c58572,
            mid_doSolve_dff5885c2c873297,
            mid_doSolveInterval_6f179d7662d75715,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseSecantSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseSecantSolver(const BaseSecantSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {}

          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble) const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval solveInterval(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseSecantSolver);
        extern PyTypeObject *PY_TYPE(BaseSecantSolver);

        class t_BaseSecantSolver {
        public:
          PyObject_HEAD
          BaseSecantSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseSecantSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseSecantSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseSecantSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
