#ifndef org_orekit_gnss_metric_parser_ByteArrayEncodedMessage_H
#define org_orekit_gnss_metric_parser_ByteArrayEncodedMessage_H

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"

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

          class ByteArrayEncodedMessage : public ::org::orekit::gnss::metric::parser::AbstractEncodedMessage {
           public:
            enum {
              mid_init$_bba2a19638de22ff,
              mid_start_ff7cb6c242604316,
              mid_fetchByte_d6ab429752e7c267,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteArrayEncodedMessage(jobject obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteArrayEncodedMessage(const ByteArrayEncodedMessage& obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {}

            ByteArrayEncodedMessage(const JArray< jbyte > &);

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
          extern PyType_Def PY_TYPE_DEF(ByteArrayEncodedMessage);
          extern PyTypeObject *PY_TYPE(ByteArrayEncodedMessage);

          class t_ByteArrayEncodedMessage {
          public:
            PyObject_HEAD
            ByteArrayEncodedMessage object;
            static PyObject *wrap_Object(const ByteArrayEncodedMessage&);
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
