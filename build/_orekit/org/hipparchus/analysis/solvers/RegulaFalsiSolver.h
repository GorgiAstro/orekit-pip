#ifndef org_hipparchus_analysis_solvers_RegulaFalsiSolver_H
#define org_hipparchus_analysis_solvers_RegulaFalsiSolver_H

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

        class RegulaFalsiSolver : public ::org::hipparchus::analysis::solvers::BaseSecantSolver {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_init$_369b4c97255d5afa,
            mid_init$_b5167f35b2521627,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegulaFalsiSolver(jobject obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegulaFalsiSolver(const RegulaFalsiSolver& obj) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(obj) {}

          RegulaFalsiSolver();
          RegulaFalsiSolver(jdouble);
          RegulaFalsiSolver(jdouble, jdouble);
          RegulaFalsiSolver(jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(RegulaFalsiSolver);
        extern PyTypeObject *PY_TYPE(RegulaFalsiSolver);

        class t_RegulaFalsiSolver {
        public:
          PyObject_HEAD
          RegulaFalsiSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RegulaFalsiSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RegulaFalsiSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RegulaFalsiSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
