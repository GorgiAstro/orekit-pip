#ifndef org_orekit_gnss_metric_messages_ssr_SsrData_H
#define org_orekit_gnss_metric_messages_ssr_SsrData_H

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
          namespace ssr {

            class SsrData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SsrData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SsrData(const SsrData& obj) : ::java::lang::Object(obj) {}

              SsrData();
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
          namespace ssr {
            extern PyType_Def PY_TYPE_DEF(SsrData);
            extern PyTypeObject *PY_TYPE(SsrData);

            class t_SsrData {
            public:
              PyObject_HEAD
              SsrData object;
              static PyObject *wrap_Object(const SsrData&);
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
