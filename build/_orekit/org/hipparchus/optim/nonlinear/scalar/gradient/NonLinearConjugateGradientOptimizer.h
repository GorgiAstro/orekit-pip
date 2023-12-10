#ifndef org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_gradient_NonLinearConjugateGradientOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            class Preconditioner;
            class NonLinearConjugateGradientOptimizer$Formula;
          }
        }
      }
      class OptimizationData;
      class PointValuePair;
      class ConvergenceChecker;
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
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            class NonLinearConjugateGradientOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer {
             public:
              enum {
                mid_init$_87776ef79d570227,
                mid_init$_00e8813f35870892,
                mid_init$_a1f43ea40443b9fe,
                mid_optimize_02ecb87ce66bcfc1,
                mid_doOptimize_f3368328259a5468,
                mid_parseOptimizationData_a5cd04a701a45f77,
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
