#ifndef org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H

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

        class BracketingNthOrderBrentSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_init$_47602ef8408ea361,
            mid_init$_427af08acba367ca,
            mid_init$_ea24d059cd2995aa,
            mid_getMaximalOrder_412668abc8d889e9,
            mid_solve_63a1fb60fcca1695,
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
