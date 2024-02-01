#ifndef org_orekit_gnss_metric_parser_RtcmMessagesParser_H
#define org_orekit_gnss_metric_parser_RtcmMessagesParser_H

#include "org/orekit/gnss/metric/parser/MessagesParser.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Integer;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class RtcmMessagesParser : public ::org::orekit::gnss::metric::parser::MessagesParser {
           public:
            enum {
              mid_init$_aa335fea495d60e0,
              mid_getMessageType_40b3eb4c621c5237,
              mid_parseMessageNumber_997e1716ef46e2d3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RtcmMessagesParser(jobject obj) : ::org::orekit::gnss::metric::parser::MessagesParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RtcmMessagesParser(const RtcmMessagesParser& obj) : ::org::orekit::gnss::metric::parser::MessagesParser(obj) {}

            RtcmMessagesParser(const ::java::util::List &);
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
          extern PyType_Def PY_TYPE_DEF(RtcmMessagesParser);
          extern PyTypeObject *PY_TYPE(RtcmMessagesParser);

          class t_RtcmMessagesParser {
          public:
            PyObject_HEAD
            RtcmMessagesParser object;
            static PyObject *wrap_Object(const RtcmMessagesParser&);
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
