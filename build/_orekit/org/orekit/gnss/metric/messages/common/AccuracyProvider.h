#ifndef org_orekit_gnss_metric_messages_common_AccuracyProvider_H
#define org_orekit_gnss_metric_messages_common_AccuracyProvider_H

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

            class AccuracyProvider : public ::java::lang::Object {
             public:
              enum {
                mid_getAccuracy_9981f74b2d109da6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AccuracyProvider(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AccuracyProvider(const AccuracyProvider& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(AccuracyProvider);
            extern PyTypeObject *PY_TYPE(AccuracyProvider);

            class t_AccuracyProvider {
            public:
              PyObject_HEAD
              AccuracyProvider object;
              static PyObject *wrap_Object(const AccuracyProvider&);
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
