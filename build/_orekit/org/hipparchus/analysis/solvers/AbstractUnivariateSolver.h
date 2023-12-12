#ifndef org_hipparchus_analysis_solvers_AbstractUnivariateSolver_H
#define org_hipparchus_analysis_solvers_AbstractUnivariateSolver_H

#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace solvers {
        class UnivariateSolver;
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

        class AbstractUnivariateSolver : public ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractUnivariateSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractUnivariateSolver(const AbstractUnivariateSolver& obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(AbstractUnivariateSolver);
        extern PyTypeObject *PY_TYPE(AbstractUnivariateSolver);

        class t_AbstractUnivariateSolver {
        public:
          PyObject_HEAD
          AbstractUnivariateSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractUnivariateSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractUnivariateSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractUnivariateSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
