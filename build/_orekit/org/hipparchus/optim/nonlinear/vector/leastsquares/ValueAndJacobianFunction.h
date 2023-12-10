#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_ValueAndJacobianFunction_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_ValueAndJacobianFunction_H

#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
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
        namespace vector {
          namespace leastsquares {

            class ValueAndJacobianFunction : public ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction {
             public:
              enum {
                mid_computeJacobian_70265c1b8bef83aa,
                mid_computeValue_8cf27fb7e5ba736a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ValueAndJacobianFunction(jobject obj) : ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ValueAndJacobianFunction(const ValueAndJacobianFunction& obj) : ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(obj) {}

              ::org::hipparchus::linear::RealMatrix computeJacobian(const JArray< jdouble > &) const;
              ::org::hipparchus::linear::RealVector computeValue(const JArray< jdouble > &) const;
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
        namespace vector {
          namespace leastsquares {
            extern PyType_Def PY_TYPE_DEF(ValueAndJacobianFunction);
            extern PyTypeObject *PY_TYPE(ValueAndJacobianFunction);

            class t_ValueAndJacobianFunction {
            public:
              PyObject_HEAD
              ValueAndJacobianFunction object;
              static PyObject *wrap_Object(const ValueAndJacobianFunction&);
              static PyObject *wrap_jobject(const jobject&);
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
