#ifndef org_hipparchus_analysis_solvers_LaguerreSolver_H
#define org_hipparchus_analysis_solvers_LaguerreSolver_H

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_13edac039e8cc967,
            mid_init$_bd28dc6055dc5bbd,
            mid_doSolve_9981f74b2d109da6,
            mid_solveAllComplex_7f22089056a01719,
            mid_solveComplex_07f41f0cd53f1903,
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
