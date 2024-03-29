#ifndef org_orekit_gnss_metric_parser_AbstractEncodedMessage_H
#define org_orekit_gnss_metric_parser_AbstractEncodedMessage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class EncodedMessage;
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
        namespace parser {

          class AbstractEncodedMessage : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_extractBits_3453f750066710ab,
              mid_start_ff7cb6c242604316,
              mid_fetchByte_d6ab429752e7c267,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractEncodedMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractEncodedMessage(const AbstractEncodedMessage& obj) : ::java::lang::Object(obj) {}

            AbstractEncodedMessage();

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
          extern PyType_Def PY_TYPE_DEF(AbstractEncodedMessage);
          extern PyTypeObject *PY_TYPE(AbstractEncodedMessage);

          class t_AbstractEncodedMessage {
          public:
            PyObject_HEAD
            AbstractEncodedMessage object;
            static PyObject *wrap_Object(const AbstractEncodedMessage&);
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
