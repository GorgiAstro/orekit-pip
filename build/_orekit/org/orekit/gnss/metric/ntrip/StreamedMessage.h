#ifndef org_orekit_gnss_metric_ntrip_StreamedMessage_H
#define org_orekit_gnss_metric_ntrip_StreamedMessage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class StreamedMessage : public ::java::lang::Object {
           public:
            enum {
              mid_getId_11b109bd155ca898,
              mid_getRate_570ce0828f81a2c1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StreamedMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StreamedMessage(const StreamedMessage& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String getId() const;
            jint getRate() const;
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
          extern PyType_Def PY_TYPE_DEF(StreamedMessage);
          extern PyTypeObject *PY_TYPE(StreamedMessage);

          class t_StreamedMessage {
          public:
            PyObject_HEAD
            StreamedMessage object;
            static PyObject *wrap_Object(const StreamedMessage&);
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
