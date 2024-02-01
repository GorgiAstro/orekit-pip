#ifndef org_orekit_gnss_metric_messages_common_SignalInSpaceAccuracy_H
#define org_orekit_gnss_metric_messages_common_SignalInSpaceAccuracy_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class AccuracyProvider;
          }
        }
      }
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
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            class SignalInSpaceAccuracy : public ::java::lang::Object {
             public:
              enum {
                mid_init$_8fd427ab23829bf5,
                mid_getAccuracy_9981f74b2d109da6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SignalInSpaceAccuracy(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SignalInSpaceAccuracy(const SignalInSpaceAccuracy& obj) : ::java::lang::Object(obj) {}

              SignalInSpaceAccuracy(jint);

              jdouble getAccuracy() const;
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
            extern PyType_Def PY_TYPE_DEF(SignalInSpaceAccuracy);
            extern PyTypeObject *PY_TYPE(SignalInSpaceAccuracy);

            class t_SignalInSpaceAccuracy {
            public:
              PyObject_HEAD
              SignalInSpaceAccuracy object;
              static PyObject *wrap_Object(const SignalInSpaceAccuracy&);
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
