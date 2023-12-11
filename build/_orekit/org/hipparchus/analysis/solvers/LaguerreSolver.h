#ifndef org_hipparchus_analysis_solvers_LaguerreSolver_H
#define org_hipparchus_analysis_solvers_LaguerreSolver_H

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
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
            mid_init$_0640e6acf969ed28,
            mid_init$_10f281d777284cea,
            mid_init$_ab23f4ae0fb33968,
            mid_init$_87096e3fd8086100,
            mid_doSolve_557b8123390d8d0c,
            mid_solveAllComplex_f7acb1d5dc64300c,
            mid_solveComplex_033e4e8b6b04318f,
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
