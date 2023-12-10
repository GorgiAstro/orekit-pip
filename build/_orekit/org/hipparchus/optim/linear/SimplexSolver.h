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
            mid_init$_7ae3461a92a43152,
            mid_init$_77e0f9a1f260e2e5,
            mid_init$_18b1ce6f78e2ded3,
            mid_init$_4de8786c851b2321,
            mid_doOptimize_f3368328259a5468,
            mid_optimize_02ecb87ce66bcfc1,
            mid_parseOptimizationData_a5cd04a701a45f77,
            mid_doIteration_8350434a9a7c6a82,
            mid_solvePhase1_8350434a9a7c6a82,
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
