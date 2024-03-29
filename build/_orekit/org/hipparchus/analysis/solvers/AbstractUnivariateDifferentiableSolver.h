#ifndef org_hipparchus_analysis_solvers_AbstractUnivariateDifferentiableSolver_H
#define org_hipparchus_analysis_solvers_AbstractUnivariateDifferentiableSolver_H

#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
      }
      namespace solvers {
        class UnivariateDifferentiableSolver;
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

        class AbstractUnivariateDifferentiableSolver : public ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver {
         public:
          enum {
            mid_computeObjectiveValueAndDerivative_f7de6915022fec9a,
            mid_setup_4c280941c23764b2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractUnivariateDifferentiableSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractUnivariateDifferentiableSolver(const AbstractUnivariateDifferentiableSolver& obj) : ::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver);
        extern PyTypeObject *PY_TYPE(AbstractUnivariateDifferentiableSolver);

        class t_AbstractUnivariateDifferentiableSolver {
        public:
          PyObject_HEAD
          AbstractUnivariateDifferentiableSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractUnivariateDifferentiableSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractUnivariateDifferentiableSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractUnivariateDifferentiableSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
