#ifndef org_orekit_gnss_metric_parser_InputStreamEncodedMessage_H
#define org_orekit_gnss_metric_parser_InputStreamEncodedMessage_H

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class InputStreamEncodedMessage : public ::org::orekit::gnss::metric::parser::AbstractEncodedMessage {
           public:
            enum {
              mid_init$_a51aa99816400fdd,
              mid_fetchByte_f2f64475e4580546,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputStreamEncodedMessage(jobject obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputStreamEncodedMessage(const InputStreamEncodedMessage& obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {}

            InputStreamEncodedMessage(const ::java::io::InputStream &);
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
          extern PyType_Def PY_TYPE_DEF(InputStreamEncodedMessage);
          extern PyTypeObject *PY_TYPE(InputStreamEncodedMessage);

          class t_InputStreamEncodedMessage {
          public:
            PyObject_HEAD
            InputStreamEncodedMessage object;
            static PyObject *wrap_Object(const InputStreamEncodedMessage&);
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
