#ifndef org_hipparchus_optim_nonlinear_scalar_MultivariateOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_MultivariateOptimizer_H

#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace optim {
      class PointValuePair;
      class OptimizationData;
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
      }
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
      namespace nonlinear {
        namespace scalar {

          class MultivariateOptimizer : public ::org::hipparchus::optim::BaseMultivariateOptimizer {
           public:
            enum {
              mid_computeObjectiveValue_9dc1ec0bcc0a9a29,
              mid_getGoalType_5759ced222da2ae0,
              mid_optimize_d70788483e9a9a2c,
              mid_parseOptimizationData_3d26e9f3a1d7e833,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultivariateOptimizer(jobject obj) : ::org::hipparchus::optim::BaseMultivariateOptimizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultivariateOptimizer(const MultivariateOptimizer& obj) : ::org::hipparchus::optim::BaseMultivariateOptimizer(obj) {}

            jdouble computeObjectiveValue(const JArray< jdouble > &) const;
            ::org::hipparchus::optim::nonlinear::scalar::GoalType getGoalType() const;
            ::org::hipparchus::optim::PointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          extern PyType_Def PY_TYPE_DEF(MultivariateOptimizer);
          extern PyTypeObject *PY_TYPE(MultivariateOptimizer);

          class t_MultivariateOptimizer {
          public:
            PyObject_HEAD
            MultivariateOptimizer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_MultivariateOptimizer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const MultivariateOptimizer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const MultivariateOptimizer&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
