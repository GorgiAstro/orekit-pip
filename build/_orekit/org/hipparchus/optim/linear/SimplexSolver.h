#ifndef org_hipparchus_optim_linear_SimplexSolver_H
#define org_hipparchus_optim_linear_SimplexSolver_H

#include "org/hipparchus/optim/linear/LinearOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace optim {
      class PointValuePair;
      class OptimizationData;
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
    namespace optim {
      namespace linear {

        class SimplexSolver : public ::org::hipparchus::optim::linear::LinearOptimizer {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_init$_1af1b4c263b48b0c,
            mid_init$_d2215b3b0e5c9451,
            mid_doOptimize_35ff88cac3217ca3,
            mid_optimize_9d04816d74472b44,
            mid_parseOptimizationData_14193ddbce7a2cc0,
            mid_doIteration_ba6b90df10d0847b,
            mid_solvePhase1_ba6b90df10d0847b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimplexSolver(jobject obj) : ::org::hipparchus::optim::linear::LinearOptimizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimplexSolver(const SimplexSolver& obj) : ::org::hipparchus::optim::linear::LinearOptimizer(obj) {}

          SimplexSolver();
          SimplexSolver(jdouble);
          SimplexSolver(jdouble, jint);
          SimplexSolver(jdouble, jint, jdouble);

          ::org::hipparchus::optim::PointValuePair doOptimize() const;
          ::org::hipparchus::optim::PointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(SimplexSolver);
        extern PyTypeObject *PY_TYPE(SimplexSolver);

        class t_SimplexSolver {
        public:
          PyObject_HEAD
          SimplexSolver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SimplexSolver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SimplexSolver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SimplexSolver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
