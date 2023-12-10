#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_SimplexOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_SimplexOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class OptimizationData;
      class ConvergenceChecker;
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
          namespace noderiv {

            class SimplexOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
             public:
              enum {
                mid_init$_762e7504cd26f616,
                mid_init$_1d715fa3b7b756e1,
                mid_optimize_02ecb87ce66bcfc1,
                mid_doOptimize_f3368328259a5468,
                mid_parseOptimizationData_a5cd04a701a45f77,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimplexOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimplexOptimizer(const SimplexOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

              SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker &);
              SimplexOptimizer(jdouble, jdouble);

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
          namespace noderiv {
            extern PyType_Def PY_TYPE_DEF(SimplexOptimizer);
            extern PyTypeObject *PY_TYPE(SimplexOptimizer);

            class t_SimplexOptimizer {
            public:
              PyObject_HEAD
              SimplexOptimizer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_SimplexOptimizer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const SimplexOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const SimplexOptimizer&, PyTypeObject *);
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
