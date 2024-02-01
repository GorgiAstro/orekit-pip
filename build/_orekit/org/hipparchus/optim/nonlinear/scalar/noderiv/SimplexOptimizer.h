#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_SimplexOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_SimplexOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class ConvergenceChecker;
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
          namespace noderiv {

            class SimplexOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
             public:
              enum {
                mid_init$_3c3ab50d4a5913f8,
                mid_init$_13edac039e8cc967,
                mid_optimize_1912ae5ec9cd8a6c,
                mid_parseOptimizationData_df324e640da2eeec,
                mid_doOptimize_a812a1ba2cf9f7b4,
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
