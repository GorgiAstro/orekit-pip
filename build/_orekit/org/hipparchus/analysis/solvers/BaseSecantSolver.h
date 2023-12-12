#ifndef org_hipparchus_analysis_solvers_BaseSecantSolver_H
#define org_hipparchus_analysis_solvers_BaseSecantSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver$Interval;
        class AllowedSolution;
        class BracketedUnivariateSolver;
      }
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

        class BaseSecantSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_solve_63a1fb60fcca1695,
            mid_solve_50fe689dc1cd3df5,
            mid_solve_d706f5f2b1b08d5d,
            mid_solveInterval_d50558ec42f23049,
            mid_doSolve_557b8123390d8d0c,
            mid_doSolveInterval_ca1621db2f37d4e2,
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
