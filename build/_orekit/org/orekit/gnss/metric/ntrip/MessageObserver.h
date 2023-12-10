#ifndef org_orekit_gnss_metric_ntrip_MessageObserver_H
#define org_orekit_gnss_metric_ntrip_MessageObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
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

          class MessageObserver : public ::java::lang::Object {
           public:
            enum {
              mid_messageAvailable_221655a0ec01abd2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MessageObserver(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MessageObserver(const MessageObserver& obj) : ::java::lang::Object(obj) {}

            void messageAvailable(const ::java::lang::String &, const ::org::orekit::gnss::metric::messages::ParsedMessage &) const;
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
          extern PyType_Def PY_TYPE_DEF(MessageObserver);
          extern PyTypeObject *PY_TYPE(MessageObserver);

          class t_MessageObserver {
          public:
            PyObject_HEAD
            MessageObserver object;
            static PyObject *wrap_Object(const MessageObserver&);
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
