#ifndef org_orekit_estimation_measurements_gnss_ModifiedLambdaMethod_H
#define org_orekit_estimation_measurements_gnss_ModifiedLambdaMethod_H

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

          class ModifiedLambdaMethod : public ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_sign_7e960cd6eee376d8,
              mid_discreteSearch_0640e6acf969ed28,
              mid_ltdlDecomposition_0640e6acf969ed28,
              mid_reduction_0640e6acf969ed28,
              mid_inverseDecomposition_0640e6acf969ed28,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ModifiedLambdaMethod(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ModifiedLambdaMethod(const ModifiedLambdaMethod& obj) : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(obj) {}

            ModifiedLambdaMethod();
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
          extern PyType_Def PY_TYPE_DEF(ModifiedLambdaMethod);
          extern PyTypeObject *PY_TYPE(ModifiedLambdaMethod);

          class t_ModifiedLambdaMethod {
          public:
            PyObject_HEAD
            ModifiedLambdaMethod object;
            static PyObject *wrap_Object(const ModifiedLambdaMethod&);
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
