#ifndef org_orekit_gnss_metric_messages_common_SsrUpdateInterval_H
#define org_orekit_gnss_metric_messages_common_SsrUpdateInterval_H

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

            class SsrUpdateInterval : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0a2a1ac2721c0336,
                mid_getUpdateInterval_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SsrUpdateInterval(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SsrUpdateInterval(const SsrUpdateInterval& obj) : ::java::lang::Object(obj) {}

              SsrUpdateInterval(jint);

              jdouble getUpdateInterval() const;
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
            extern PyType_Def PY_TYPE_DEF(SsrUpdateInterval);
            extern PyTypeObject *PY_TYPE(SsrUpdateInterval);

            class t_SsrUpdateInterval {
            public:
              PyObject_HEAD
              SsrUpdateInterval object;
              static PyObject *wrap_Object(const SsrUpdateInterval&);
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
