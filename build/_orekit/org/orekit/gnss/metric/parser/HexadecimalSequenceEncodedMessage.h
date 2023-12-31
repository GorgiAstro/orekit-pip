#ifndef org_orekit_gnss_metric_parser_HexadecimalSequenceEncodedMessage_H
#define org_orekit_gnss_metric_parser_HexadecimalSequenceEncodedMessage_H

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class HexadecimalSequenceEncodedMessage : public ::org::orekit::gnss::metric::parser::AbstractEncodedMessage {
           public:
            enum {
              mid_init$_902d69c788edaf18,
              mid_start_a1fa5dae97ea5ed2,
              mid_fetchByte_55546ef6a647f39b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HexadecimalSequenceEncodedMessage(jobject obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HexadecimalSequenceEncodedMessage(const HexadecimalSequenceEncodedMessage& obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {}

            HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence &);

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
          extern PyType_Def PY_TYPE_DEF(HexadecimalSequenceEncodedMessage);
          extern PyTypeObject *PY_TYPE(HexadecimalSequenceEncodedMessage);

          class t_HexadecimalSequenceEncodedMessage {
          public:
            PyObject_HEAD
            HexadecimalSequenceEncodedMessage object;
            static PyObject *wrap_Object(const HexadecimalSequenceEncodedMessage&);
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
