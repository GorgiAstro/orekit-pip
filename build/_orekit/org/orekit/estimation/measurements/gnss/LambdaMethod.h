#ifndef org_orekit_estimation_measurements_gnss_LambdaMethod_H
#define org_orekit_estimation_measurements_gnss_LambdaMethod_H

#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class LambdaMethod : public ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_inverseDecomposition_ff7cb6c242604316,
              mid_ltdlDecomposition_ff7cb6c242604316,
              mid_reduction_ff7cb6c242604316,
              mid_discreteSearch_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LambdaMethod(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LambdaMethod(const LambdaMethod& obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {}

            LambdaMethod();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(LambdaMethod);
          extern PyTypeObject *PY_TYPE(LambdaMethod);

          class t_LambdaMethod {
          public:
            PyObject_HEAD
            LambdaMethod object;
            static PyObject *wrap_Object(const LambdaMethod&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
