#ifndef org_orekit_gnss_metric_messages_common_PhaseBias_H
#define org_orekit_gnss_metric_messages_common_PhaseBias_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            class PhaseBias : public ::java::lang::Object {
             public:
              enum {
                mid_init$_78c445b820a7a57e,
                mid_getDiscontinuityCounter_412668abc8d889e9,
                mid_getPhaseBias_557b8123390d8d0c,
                mid_getSignalID_412668abc8d889e9,
                mid_getSignalWideLaneIntegerIndicator_412668abc8d889e9,
                mid_isSignalInteger_89b302893bdbe1f1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PhaseBias(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PhaseBias(const PhaseBias& obj) : ::java::lang::Object(obj) {}

              PhaseBias(jint, jboolean, jint, jint, jdouble);

              jint getDiscontinuityCounter() const;
              jdouble getPhaseBias() const;
              jint getSignalID() const;
              jint getSignalWideLaneIntegerIndicator() const;
              jboolean isSignalInteger() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            extern PyType_Def PY_TYPE_DEF(PhaseBias);
            extern PyTypeObject *PY_TYPE(PhaseBias);

            class t_PhaseBias {
            public:
              PyObject_HEAD
              PhaseBias object;
              static PyObject *wrap_Object(const PhaseBias&);
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
