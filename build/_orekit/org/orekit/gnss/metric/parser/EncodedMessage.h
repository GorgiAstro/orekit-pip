#ifndef org_orekit_gnss_metric_parser_EncodedMessage_H
#define org_orekit_gnss_metric_parser_EncodedMessage_H

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
        namespace parser {

          class EncodedMessage : public ::java::lang::Object {
           public:
            enum {
              mid_extractBits_3453f750066710ab,
              mid_start_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EncodedMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EncodedMessage(const EncodedMessage& obj) : ::java::lang::Object(obj) {}

            jlong extractBits(jint) const;
            void start() const;
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
        namespace parser {
          extern PyType_Def PY_TYPE_DEF(EncodedMessage);
          extern PyTypeObject *PY_TYPE(EncodedMessage);

          class t_EncodedMessage {
          public:
            PyObject_HEAD
            EncodedMessage object;
            static PyObject *wrap_Object(const EncodedMessage&);
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
