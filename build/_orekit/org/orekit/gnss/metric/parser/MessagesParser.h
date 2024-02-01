#ifndef org_orekit_gnss_metric_parser_MessagesParser_H
#define org_orekit_gnss_metric_parser_MessagesParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Integer;
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

          class MessagesParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_aa335fea495d60e0,
              mid_parse_dfaea3b414bdfea5,
              mid_getMessageType_40b3eb4c621c5237,
              mid_parseMessageNumber_997e1716ef46e2d3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MessagesParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MessagesParser(const MessagesParser& obj) : ::java::lang::Object(obj) {}

            MessagesParser(const ::java::util::List &);

            ::org::orekit::gnss::metric::messages::ParsedMessage parse(const ::org::orekit::gnss::metric::parser::EncodedMessage &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(MessagesParser);
          extern PyTypeObject *PY_TYPE(MessagesParser);

          class t_MessagesParser {
          public:
            PyObject_HEAD
            MessagesParser object;
            static PyObject *wrap_Object(const MessagesParser&);
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
