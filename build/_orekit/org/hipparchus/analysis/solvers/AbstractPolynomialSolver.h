#ifndef org_hipparchus_analysis_solvers_AbstractPolynomialSolver_H
#define org_hipparchus_analysis_solvers_AbstractPolynomialSolver_H

#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        class PolynomialSolver;
      }
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

        class AbstractPolynomialSolver : public ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver {
         public:
          enum {
            mid_getCoefficients_25e1757a36c4dde2,
            mid_setup_316b9297be8b2a08,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractPolynomialSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractPolynomialSolver(const AbstractPolynomialSolver& obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(AbstractPolynomialSolver);
        extern PyTypeObject *PY_TYPE(AbstractPolynomialSolver);

        class t_AbstractPolynomialSolver {
        public:
          PyObject_HEAD
          AbstractPolynomialSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractPolynomialSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractPolynomialSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractPolynomialSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
