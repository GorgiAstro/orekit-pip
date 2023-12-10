#ifndef org_hipparchus_analysis_solvers_LaguerreSolver_H
#define org_hipparchus_analysis_solvers_LaguerreSolver_H

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace complex {
      class Complex;
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
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

        class LaguerreSolver : public ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_17db3a65980d3441,
            mid_init$_8f2e782d5278b131,
            mid_init$_2c56b6dd4d4b1dec,
            mid_doSolve_dff5885c2c873297,
            mid_solveAllComplex_43a66e19accb9584,
            mid_solveComplex_41cae59f37a8d706,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LaguerreSolver(jobject obj) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LaguerreSolver(const LaguerreSolver& obj) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(obj) {}

          LaguerreSolver();
          LaguerreSolver(jdouble);
          LaguerreSolver(jdouble, jdouble);
          LaguerreSolver(jdouble, jdouble, jdouble);

          jdouble doSolve() const;
          JArray< ::org::hipparchus::complex::Complex > solveAllComplex(const JArray< jdouble > &, jdouble) const;
          ::org::hipparchus::complex::Complex solveComplex(const JArray< jdouble > &, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(LaguerreSolver);
        extern PyTypeObject *PY_TYPE(LaguerreSolver);

        class t_LaguerreSolver {
        public:
          PyObject_HEAD
          LaguerreSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LaguerreSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LaguerreSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LaguerreSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
