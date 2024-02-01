#ifndef org_orekit_gnss_metric_parser_MessageType_H
#define org_orekit_gnss_metric_parser_MessageType_H

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
        namespace messages {
          class ParsedMessage;
        }
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

          class MessageType : public ::java::lang::Object {
           public:
            enum {
              mid_parse_923958375e872406,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MessageType(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MessageType(const MessageType& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::gnss::metric::messages::ParsedMessage parse(const ::org::orekit::gnss::metric::parser::EncodedMessage &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(MessageType);
          extern PyTypeObject *PY_TYPE(MessageType);

          class t_MessageType {
          public:
            PyObject_HEAD
            MessageType object;
            static PyObject *wrap_Object(const MessageType&);
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
