#ifndef org_hipparchus_analysis_solvers_BracketedUnivariateSolver_H
#define org_hipparchus_analysis_solvers_BracketedUnivariateSolver_H

#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class BracketedUnivariateSolver$Interval;
        class AllowedSolution;
      }
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

        class BracketedUnivariateSolver : public ::org::hipparchus::analysis::solvers::BaseUnivariateSolver {
         public:
          enum {
            mid_solve_95e80d55b360a35f,
            mid_solve_adfe53463c8924a7,
            mid_solveInterval_b2aec7e9d829a0d3,
            mid_solveInterval_56a10f62288dcd3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BracketedUnivariateSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BracketedUnivariateSolver(const BracketedUnivariateSolver& obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {}

          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          jdouble solve(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble, jdouble, const ::org::hipparchus::analysis::solvers::AllowedSolution &) const;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval solveInterval(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(BracketedUnivariateSolver);
        extern PyTypeObject *PY_TYPE(BracketedUnivariateSolver);

        class t_BracketedUnivariateSolver {
        public:
          PyObject_HEAD
          BracketedUnivariateSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BracketedUnivariateSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BracketedUnivariateSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BracketedUnivariateSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
