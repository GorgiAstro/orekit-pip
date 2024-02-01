#ifndef org_orekit_gnss_metric_parser_DataField_H
#define org_orekit_gnss_metric_parser_DataField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
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

          class DataField : public ::java::lang::Object {
           public:
            enum {
              mid_booleanValue_03afc74a55086f49,
              mid_doubleValue_1f1c729fdde0658b,
              mid_intValue_a4fe6c9d0e440ab3,
              mid_stringValue_cf17c27db4239bea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DataField(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DataField(const DataField& obj) : ::java::lang::Object(obj) {}

            jboolean booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage &) const;
            jdouble doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage &) const;
            jint intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage &) const;
            ::java::lang::String stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(DataField);
          extern PyTypeObject *PY_TYPE(DataField);

          class t_DataField {
          public:
            PyObject_HEAD
            DataField object;
            static PyObject *wrap_Object(const DataField&);
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
