#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_PowellOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_PowellOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
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

            class PowellOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
             public:
              enum {
                mid_init$_1d715fa3b7b756e1,
                mid_init$_f83ff6a8ad92b0e0,
                mid_init$_667a7965403ed91a,
                mid_init$_7444ef0fe2c51256,
                mid_doOptimize_f3368328259a5468,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PowellOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PowellOptimizer(const PowellOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

              PowellOptimizer(jdouble, jdouble);
              PowellOptimizer(jdouble, jdouble, const ::org::hipparchus::optim::ConvergenceChecker &);
              PowellOptimizer(jdouble, jdouble, jdouble, jdouble);
              PowellOptimizer(jdouble, jdouble, jdouble, jdouble, const ::org::hipparchus::optim::ConvergenceChecker &);
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
            extern PyType_Def PY_TYPE_DEF(PowellOptimizer);
            extern PyTypeObject *PY_TYPE(PowellOptimizer);

            class t_PowellOptimizer {
            public:
              PyObject_HEAD
              PowellOptimizer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_PowellOptimizer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PowellOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PowellOptimizer&, PyTypeObject *);
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
