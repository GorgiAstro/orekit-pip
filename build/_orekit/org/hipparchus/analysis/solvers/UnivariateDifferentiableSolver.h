#ifndef org_hipparchus_analysis_solvers_UnivariateDifferentiableSolver_H
#define org_hipparchus_analysis_solvers_UnivariateDifferentiableSolver_H

#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
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

        class UnivariateDifferentiableSolver : public ::org::hipparchus::analysis::solvers::BaseUnivariateSolver {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDifferentiableSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDifferentiableSolver(const UnivariateDifferentiableSolver& obj) : ::org::hipparchus::analysis::solvers::BaseUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDifferentiableSolver);
        extern PyTypeObject *PY_TYPE(UnivariateDifferentiableSolver);

        class t_UnivariateDifferentiableSolver {
        public:
          PyObject_HEAD
          UnivariateDifferentiableSolver object;
          static PyObject *wrap_Object(const UnivariateDifferentiableSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
