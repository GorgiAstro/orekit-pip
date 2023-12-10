#ifndef org_orekit_gnss_metric_parser_PythonEncodedMessage_H
#define org_orekit_gnss_metric_parser_PythonEncodedMessage_H

#include "java/lang/Object.h"

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
        namespace parser {

          class PythonEncodedMessage : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_extractBits_a1cf8c47dc9c5883,
              mid_finalize_0fa09c18fee449d5,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonEncodedMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonEncodedMessage(const PythonEncodedMessage& obj) : ::java::lang::Object(obj) {}

            PythonEncodedMessage();

            jlong extractBits(jint) const;
            void finalize() const;
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
        namespace parser {
          extern PyType_Def PY_TYPE_DEF(PythonEncodedMessage);
          extern PyTypeObject *PY_TYPE(PythonEncodedMessage);

          class t_PythonEncodedMessage {
          public:
            PyObject_HEAD
            PythonEncodedMessage object;
            static PyObject *wrap_Object(const PythonEncodedMessage&);
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
