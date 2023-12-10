#ifndef org_hipparchus_analysis_solvers_LaguerreSolver_H
#define org_hipparchus_analysis_solvers_LaguerreSolver_H

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace complex {
      class Complex;
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
            mid_init$_7ae3461a92a43152,
            mid_init$_77e0f9a1f260e2e5,
            mid_init$_1d715fa3b7b756e1,
            mid_init$_d0d6094fbd7015c5,
            mid_doSolve_456d9a2f64d6b28d,
            mid_solveAllComplex_d2645552bb1aff58,
            mid_solveComplex_68a904a4b68e072c,
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
