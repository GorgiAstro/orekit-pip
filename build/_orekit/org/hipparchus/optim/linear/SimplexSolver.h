#ifndef org_hipparchus_optim_linear_SimplexSolver_H
#define org_hipparchus_optim_linear_SimplexSolver_H

#include "org/hipparchus/optim/linear/LinearOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class OptimizationData;
    }
    namespace exception {
      class MathIllegalStateException;
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
            mid_init$_ff7cb6c242604316,
            mid_init$_1ad26e8c8c0cd65b,
            mid_init$_0fd8efd9eecb8663,
            mid_init$_9a2a15644952076c,
            mid_doOptimize_a812a1ba2cf9f7b4,
            mid_optimize_1912ae5ec9cd8a6c,
            mid_parseOptimizationData_df324e640da2eeec,
            mid_doIteration_0e6526f33c1cd2b2,
            mid_solvePhase1_0e6526f33c1cd2b2,
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
