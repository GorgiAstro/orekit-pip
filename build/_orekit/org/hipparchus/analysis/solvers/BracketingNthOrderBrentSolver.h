#ifndef org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver$Interval;
        class AllowedSolution;
        class BracketedUnivariateSolver;
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

        class BracketingNthOrderBrentSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_18b1ce6f78e2ded3,
            mid_init$_b05c288d5068eccb,
            mid_init$_906d8abc315447ea,
            mid_getMaximalOrder_f2f64475e4580546,
            mid_solve_0c4af17577847ef5,
            mid_solve_d096fb40d6053e92,
            mid_solveInterval_f22794092f257ec3,
            mid_doSolve_456d9a2f64d6b28d,
            mid_doSolveInterval_315a1f5b2b06e1be,
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
