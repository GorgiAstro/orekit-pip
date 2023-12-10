#ifndef org_hipparchus_optim_nonlinear_vector_leastsquares_ParameterValidator_H
#define org_hipparchus_optim_nonlinear_vector_leastsquares_ParameterValidator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
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

            class ParameterValidator : public ::java::lang::Object {
             public:
              enum {
                mid_validate_613347e28dd909cd,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParameterValidator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParameterValidator(const ParameterValidator& obj) : ::java::lang::Object(obj) {}

              ::org::hipparchus::linear::RealVector validate(const ::org::hipparchus::linear::RealVector &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParameterValidator);
            extern PyTypeObject *PY_TYPE(ParameterValidator);

            class t_ParameterValidator {
            public:
              PyObject_HEAD
              ParameterValidator object;
              static PyObject *wrap_Object(const ParameterValidator&);
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
