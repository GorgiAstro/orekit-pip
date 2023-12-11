#ifndef org_orekit_gnss_metric_parser_PythonAbstractEncodedMessage_H
#define org_orekit_gnss_metric_parser_PythonAbstractEncodedMessage_H

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"

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

          class PythonAbstractEncodedMessage : public ::org::orekit::gnss::metric::parser::AbstractEncodedMessage {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_fetchByte_412668abc8d889e9,
              mid_finalize_0640e6acf969ed28,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractEncodedMessage(jobject obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractEncodedMessage(const PythonAbstractEncodedMessage& obj) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(obj) {}

            PythonAbstractEncodedMessage();

            jint fetchByte() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonAbstractEncodedMessage);
          extern PyTypeObject *PY_TYPE(PythonAbstractEncodedMessage);

          class t_PythonAbstractEncodedMessage {
          public:
            PyObject_HEAD
            PythonAbstractEncodedMessage object;
            static PyObject *wrap_Object(const PythonAbstractEncodedMessage&);
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
