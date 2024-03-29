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
