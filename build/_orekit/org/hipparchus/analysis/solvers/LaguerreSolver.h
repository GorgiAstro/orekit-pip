#ifndef org_hipparchus_analysis_solvers_LaguerreSolver_H
#define org_hipparchus_analysis_solvers_LaguerreSolver_H

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_init$_b5167f35b2521627,
            mid_doSolve_b74f83833fdad017,
            mid_solveAllComplex_67d8487bd048a34b,
            mid_solveComplex_f51b24100b0e51b5,
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
