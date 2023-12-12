#ifndef org_hipparchus_optim_univariate_UnivariateOptimizer_H
#define org_hipparchus_optim_univariate_UnivariateOptimizer_H

#include "org/hipparchus/optim/BaseOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        class UnivariatePointValuePair;
      }
      class OptimizationData;
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
      }
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
      namespace univariate {

        class UnivariateOptimizer : public ::org::hipparchus::optim::BaseOptimizer {
         public:
          enum {
            mid_getGoalType_bd7f7e2869c755fb,
            mid_getMax_557b8123390d8d0c,
            mid_getMin_557b8123390d8d0c,
            mid_getStartValue_557b8123390d8d0c,
            mid_optimize_749f41c4a1b59e75,
            mid_computeObjectiveValue_7e960cd6eee376d8,
            mid_parseOptimizationData_946a92401917c130,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateOptimizer(jobject obj) : ::org::hipparchus::optim::BaseOptimizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateOptimizer(const UnivariateOptimizer& obj) : ::org::hipparchus::optim::BaseOptimizer(obj) {}

          ::org::hipparchus::optim::nonlinear::scalar::GoalType getGoalType() const;
          jdouble getMax() const;
          jdouble getMin() const;
          jdouble getStartValue() const;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        extern PyType_Def PY_TYPE_DEF(UnivariateOptimizer);
        extern PyTypeObject *PY_TYPE(UnivariateOptimizer);

        class t_UnivariateOptimizer {
        public:
          PyObject_HEAD
          UnivariateOptimizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateOptimizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateOptimizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateOptimizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
