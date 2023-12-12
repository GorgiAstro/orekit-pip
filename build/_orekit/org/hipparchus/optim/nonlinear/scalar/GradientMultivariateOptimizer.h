#ifndef org_hipparchus_optim_nonlinear_scalar_GradientMultivariateOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_GradientMultivariateOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

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
      namespace nonlinear {
        namespace scalar {

          class GradientMultivariateOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
           public:
            enum {
              mid_optimize_428d2547a0c45016,
              mid_parseOptimizationData_946a92401917c130,
              mid_computeObjectiveGradient_1db7c087750eaffe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GradientMultivariateOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GradientMultivariateOptimizer(const GradientMultivariateOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(GradientMultivariateOptimizer);
          extern PyTypeObject *PY_TYPE(GradientMultivariateOptimizer);

          class t_GradientMultivariateOptimizer {
          public:
            PyObject_HEAD
            GradientMultivariateOptimizer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GradientMultivariateOptimizer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GradientMultivariateOptimizer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GradientMultivariateOptimizer&, PyTypeObject *);
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
