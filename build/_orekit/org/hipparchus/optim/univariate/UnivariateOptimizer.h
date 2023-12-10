#ifndef org_hipparchus_optim_univariate_UnivariateOptimizer_H
#define org_hipparchus_optim_univariate_UnivariateOptimizer_H

#include "org/hipparchus/optim/BaseOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
      }
      namespace univariate {
        class UnivariatePointValuePair;
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
            mid_getGoalType_2e76f357c1c85ac8,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_getStartValue_456d9a2f64d6b28d,
            mid_optimize_dfd82b5526071a92,
            mid_parseOptimizationData_a5cd04a701a45f77,
            mid_computeObjectiveValue_0ba5fed9597b693e,
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
