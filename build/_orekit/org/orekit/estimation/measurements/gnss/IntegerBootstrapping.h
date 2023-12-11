#ifndef org_orekit_estimation_measurements_gnss_IntegerBootstrapping_H
#define org_orekit_estimation_measurements_gnss_IntegerBootstrapping_H

#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"

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

          class IntegerBootstrapping : public ::org::orekit::estimation::measurements::gnss::LambdaMethod {
           public:
            enum {
              mid_init$_10f281d777284cea,
              mid_discreteSearch_0640e6acf969ed28,
              mid_recoverAmbiguities_152c52200b30dda4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntegerBootstrapping(jobject obj) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntegerBootstrapping(const IntegerBootstrapping& obj) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(obj) {}

            IntegerBootstrapping(jdouble);
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
          extern PyType_Def PY_TYPE_DEF(IntegerBootstrapping);
          extern PyTypeObject *PY_TYPE(IntegerBootstrapping);

          class t_IntegerBootstrapping {
          public:
            PyObject_HEAD
            IntegerBootstrapping object;
            static PyObject *wrap_Object(const IntegerBootstrapping&);
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
