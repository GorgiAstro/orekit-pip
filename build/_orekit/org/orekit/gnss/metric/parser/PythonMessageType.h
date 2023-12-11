#ifndef org_orekit_gnss_metric_parser_PythonMessageType_H
#define org_orekit_gnss_metric_parser_PythonMessageType_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          class ParsedMessage;
        }
        namespace parser {
          class EncodedMessage;
          class MessageType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class PythonMessageType : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_parse_0a827faad8220c1a,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMessageType(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMessageType(const PythonMessageType& obj) : ::java::lang::Object(obj) {}

            PythonMessageType();

            void finalize() const;
            ::org::orekit::gnss::metric::messages::ParsedMessage parse(const ::org::orekit::gnss::metric::parser::EncodedMessage &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonMessageType);
          extern PyTypeObject *PY_TYPE(PythonMessageType);

          class t_PythonMessageType {
          public:
            PyObject_HEAD
            PythonMessageType object;
            static PyObject *wrap_Object(const PythonMessageType&);
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
