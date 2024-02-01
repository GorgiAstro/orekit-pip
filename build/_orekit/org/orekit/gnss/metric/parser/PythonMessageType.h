#ifndef org_orekit_gnss_metric_parser_PythonMessageType_H
#define org_orekit_gnss_metric_parser_PythonMessageType_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class EncodedMessage;
          class MessageType;
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
        namespace parser {

          class PythonMessageType : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_parse_923958375e872406,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
