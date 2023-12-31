#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_BOBYQAOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_BOBYQAOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            class BOBYQAOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
             public:
              enum {
                mid_init$_44ed599e93e8a30c,
                mid_init$_cdd9dee35d124091,
                mid_doOptimize_35ff88cac3217ca3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BOBYQAOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BOBYQAOptimizer(const BOBYQAOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

              static jdouble DEFAULT_INITIAL_RADIUS;
              static jdouble DEFAULT_STOPPING_RADIUS;
              static jint MINIMUM_PROBLEM_DIMENSION;

              BOBYQAOptimizer(jint);
              BOBYQAOptimizer(jint, jdouble, jdouble);
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
            extern PyType_Def PY_TYPE_DEF(BOBYQAOptimizer);
            extern PyTypeObject *PY_TYPE(BOBYQAOptimizer);

            class t_BOBYQAOptimizer {
            public:
              PyObject_HEAD
              BOBYQAOptimizer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_BOBYQAOptimizer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const BOBYQAOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const BOBYQAOptimizer&, PyTypeObject *);
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
