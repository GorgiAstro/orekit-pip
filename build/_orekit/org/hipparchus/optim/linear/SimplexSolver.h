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
            mid_init$_0640e6acf969ed28,
            mid_init$_10f281d777284cea,
            mid_init$_47602ef8408ea361,
            mid_init$_3191da1710a102eb,
            mid_doOptimize_adf293b2643f22b0,
            mid_optimize_428d2547a0c45016,
            mid_parseOptimizationData_946a92401917c130,
            mid_doIteration_92c6ab7f472e44a6,
            mid_solvePhase1_92c6ab7f472e44a6,
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
