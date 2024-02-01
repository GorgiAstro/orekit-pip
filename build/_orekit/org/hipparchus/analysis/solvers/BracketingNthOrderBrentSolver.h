#ifndef org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class AllowedSolution;
        class BracketedUnivariateSolver$Interval;
        class BracketedUnivariateSolver;
      }
      class UnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
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

        class BracketingNthOrderBrentSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_0fd8efd9eecb8663,
            mid_init$_905e65280a4e6722,
            mid_init$_2894b57d568d7362,
            mid_getMaximalOrder_d6ab429752e7c267,
            mid_solve_264b7d79e28fc408,
            mid_solve_56efbacf041dc493,
            mid_solveInterval_1290cd17e7801197,
            mid_doSolve_9981f74b2d109da6,
            mid_doSolveInterval_fb0079f6db85289e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketingNthOrderBrentSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketingNthOrderBrentSolver(const BracketingNthOrderBrentSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(obj) {}

          BracketingNthOrderBrentSolver();
          BracketingNthOrderBrentSolver(jdouble, jint);
          BracketingNthOrderBrentSolver(jdouble, jdouble, jint);
          BracketingNthOrderBrentSolver(jdouble, jdouble, jdouble, jint);

          jint getMaximalOrder() const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
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
        extern PyType_Def PY_TYPE_DEF(BracketingNthOrderBrentSolver);
        extern PyTypeObject *PY_TYPE(BracketingNthOrderBrentSolver);

        class t_BracketingNthOrderBrentSolver {
        public:
          PyObject_HEAD
          BracketingNthOrderBrentSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BracketingNthOrderBrentSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BracketingNthOrderBrentSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BracketingNthOrderBrentSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
