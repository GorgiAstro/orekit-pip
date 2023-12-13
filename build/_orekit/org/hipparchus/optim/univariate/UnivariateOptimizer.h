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
            mid_getGoalType_cf6b21746452ef78,
            mid_getMax_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getStartValue_b74f83833fdad017,
            mid_optimize_369e9441b694b1bf,
            mid_computeObjectiveValue_04fd0666b613d2ab,
            mid_parseOptimizationData_14193ddbce7a2cc0,
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
