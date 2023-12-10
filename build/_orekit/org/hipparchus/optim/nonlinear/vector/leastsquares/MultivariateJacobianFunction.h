#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_MultivariateJacobianFunction_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_MultivariateJacobianFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
    namespace util {
      class Pair;
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

            class MultivariateJacobianFunction : public ::java::lang::Object {
             public:
              enum {
                mid_value_f3b8dd3e226035d1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultivariateJacobianFunction(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultivariateJacobianFunction(const MultivariateJacobianFunction& obj) : ::java::lang::Object(obj) {}

              ::org::hipparchus::util::Pair value(const ::org::hipparchus::linear::RealVector &) const;
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
            extern PyType_Def PY_TYPE_DEF(MultivariateJacobianFunction);
            extern PyTypeObject *PY_TYPE(MultivariateJacobianFunction);

            class t_MultivariateJacobianFunction {
            public:
              PyObject_HEAD
              MultivariateJacobianFunction object;
              static PyObject *wrap_Object(const MultivariateJacobianFunction&);
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
