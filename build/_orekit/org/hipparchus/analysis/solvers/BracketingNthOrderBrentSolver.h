#ifndef org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H
#define org_hipparchus_analysis_solvers_BracketingNthOrderBrentSolver_H

#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class BracketedUnivariateSolver;
        class BracketedUnivariateSolver$Interval;
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

        class BracketingNthOrderBrentSolver : public ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_1af1b4c263b48b0c,
            mid_init$_2aa803b9073e6a76,
            mid_init$_96a2cf58188ee8a5,
            mid_getMaximalOrder_55546ef6a647f39b,
            mid_solve_95e80d55b360a35f,
            mid_solve_adfe53463c8924a7,
            mid_solveInterval_56a10f62288dcd3e,
            mid_doSolve_b74f83833fdad017,
            mid_doSolveInterval_e5c64c32be09ef5b,
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
