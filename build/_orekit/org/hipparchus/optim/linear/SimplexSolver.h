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
            mid_init$_0fa09c18fee449d5,
            mid_init$_17db3a65980d3441,
            mid_init$_75c2da74a5a59fda,
            mid_init$_98483f586918b5b8,
            mid_doOptimize_4ae915e35f441d39,
            mid_optimize_d70788483e9a9a2c,
            mid_parseOptimizationData_3d26e9f3a1d7e833,
            mid_doIteration_f720eabeace587f9,
            mid_solvePhase1_f720eabeace587f9,
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
