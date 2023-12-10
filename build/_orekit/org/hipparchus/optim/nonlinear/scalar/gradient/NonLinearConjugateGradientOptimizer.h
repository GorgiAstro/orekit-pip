#ifndef org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            class Preconditioner;
            class NonLinearConjugateGradientOptimizer$Formula;
          }
        }
      }
      class ConvergenceChecker;
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
          namespace gradient {

            class NonLinearConjugateGradientOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer {
             public:
              enum {
                mid_init$_66997f6d463bafd2,
                mid_init$_10acb3130642ef67,
                mid_init$_37a794adef7d69f3,
                mid_optimize_d70788483e9a9a2c,
                mid_parseOptimizationData_3d26e9f3a1d7e833,
                mid_doOptimize_4ae915e35f441d39,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NonLinearConjugateGradientOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NonLinearConjugateGradientOptimizer(const NonLinearConjugateGradientOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(obj) {}

              NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula &, const ::org::hipparchus::optim::ConvergenceChecker &);
              NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula &, const ::org::hipparchus::optim::ConvergenceChecker &, jdouble, jdouble, jdouble);
              NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula &, const ::org::hipparchus::optim::ConvergenceChecker &, jdouble, jdouble, jdouble, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner &);

              ::org::hipparchus::optim::PointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
            };
          }
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
          namespace gradient {
            extern PyType_Def PY_TYPE_DEF(NonLinearConjugateGradientOptimizer);
            extern PyTypeObject *PY_TYPE(NonLinearConjugateGradientOptimizer);

            class t_NonLinearConjugateGradientOptimizer {
            public:
              PyObject_HEAD
              NonLinearConjugateGradientOptimizer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_NonLinearConjugateGradientOptimizer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const NonLinearConjugateGradientOptimizer&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
