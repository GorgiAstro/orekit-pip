#ifndef org_hipparchus_analysis_solvers_PegasusSolver_H
#define org_hipparchus_analysis_solvers_PegasusSolver_H

#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"

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

        class PegasusSolver : public ::org::hipparchus::analysis::solvers::BaseSecantSolver {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_13edac039e8cc967,
            mid_init$_bd28dc6055dc5bbd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PegasusSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PegasusSolver(const PegasusSolver& obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {}

          PegasusSolver();
          PegasusSolver(jdouble);
          PegasusSolver(jdouble, jdouble);
          PegasusSolver(jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(PegasusSolver);
        extern PyTypeObject *PY_TYPE(PegasusSolver);

        class t_PegasusSolver {
        public:
          PyObject_HEAD
          PegasusSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PegasusSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PegasusSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PegasusSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
