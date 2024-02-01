#ifndef org_hipparchus_analysis_solvers_PolynomialSolver_H
#define org_hipparchus_analysis_solvers_PolynomialSolver_H

#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"

namespace org {
  namespace hipparchus {
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

        class PolynomialSolver : public ::org::hipparchus::analysis::solvers::BaseUnivariateSolver {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialSolver(const PolynomialSolver& obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(PolynomialSolver);
        extern PyTypeObject *PY_TYPE(PolynomialSolver);

        class t_PolynomialSolver {
        public:
          PyObject_HEAD
          PolynomialSolver object;
          static PyObject *wrap_Object(const PolynomialSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
