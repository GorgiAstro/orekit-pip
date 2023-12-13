#ifndef org_orekit_gnss_metric_ntrip_PythonMessageObserver_H
#define org_orekit_gnss_metric_ntrip_PythonMessageObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class MessageObserver;
        }
        namespace messages {
          class ParsedMessage;
        }
      }
    }
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_messageAvailable_1a4f1f18b22ebdb4,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
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
