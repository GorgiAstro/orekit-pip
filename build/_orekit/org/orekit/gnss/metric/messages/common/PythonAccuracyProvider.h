#ifndef org_orekit_gnss_metric_messages_common_PythonAccuracyProvider_H
#define org_orekit_gnss_metric_messages_common_PythonAccuracyProvider_H

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
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            class PythonAccuracyProvider : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_getAccuracy_557b8123390d8d0c,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAccuracyProvider(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAccuracyProvider(const PythonAccuracyProvider& obj) : ::java::lang::Object(obj) {}

              PythonAccuracyProvider();

              void finalize() const;
              jdouble getAccuracy() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonAccuracyProvider);
            extern PyTypeObject *PY_TYPE(PythonAccuracyProvider);

            class t_PythonAccuracyProvider {
            public:
              PyObject_HEAD
              PythonAccuracyProvider object;
              static PyObject *wrap_Object(const PythonAccuracyProvider&);
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
