#ifndef org_hipparchus_analysis_solvers_UnivariateSolver_H
#define org_hipparchus_analysis_solvers_UnivariateSolver_H

#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
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

        class UnivariateSolver : public ::org::hipparchus::analysis::solvers::BaseUnivariateSolver {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateSolver(const UnivariateSolver& obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(UnivariateSolver);
        extern PyTypeObject *PY_TYPE(UnivariateSolver);

        class t_UnivariateSolver {
        public:
          PyObject_HEAD
          UnivariateSolver object;
          static PyObject *wrap_Object(const UnivariateSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
