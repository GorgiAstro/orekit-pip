#ifndef org_orekit_gnss_metric_ntrip_PythonMessageObserver_H
#define org_orekit_gnss_metric_ntrip_PythonMessageObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          class ParsedMessage;
        }
        namespace ntrip {
          class MessageObserver;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class PythonMessageObserver : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_messageAvailable_5e983d1774bbd3db,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMessageObserver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMessageObserver(const PythonMessageObserver& obj) : ::java::lang::Object(obj) {}

            PythonMessageObserver();

            void finalize() const;
            void messageAvailable(const ::java::lang::String &, const ::org::orekit::gnss::metric::messages::ParsedMessage &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
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
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(PythonMessageObserver);
          extern PyTypeObject *PY_TYPE(PythonMessageObserver);

          class t_PythonMessageObserver {
          public:
            PyObject_HEAD
            PythonMessageObserver object;
            static PyObject *wrap_Object(const PythonMessageObserver&);
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
