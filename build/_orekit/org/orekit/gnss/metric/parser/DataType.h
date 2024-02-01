#ifndef org_orekit_gnss_metric_parser_DataType_H
#define org_orekit_gnss_metric_parser_DataType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class DataType;
          class EncodedMessage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Long;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class DataType : public ::java::lang::Enum {
           public:
            enum {
              mid_decode_1aa9dd1e4ef87d76,
              mid_valueOf_a7999be25191ed4a,
              mid_values_35f513c8612c1f1d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DataType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DataType(const DataType& obj) : ::java::lang::Enum(obj) {}

            static DataType *BIT_1;
            static DataType *BIT_10;
            static DataType *BIT_12;
            static DataType *BIT_2;
            static DataType *BIT_24;
            static DataType *BIT_3;
            static DataType *BIT_32;
            static DataType *BIT_4;
            static DataType *BIT_6;
            static DataType *BIT_7;
            static DataType *BIT_8;
            static DataType *INT_10;
            static DataType *INT_11;
            static DataType *INT_14;
            static DataType *INT_15;
            static DataType *INT_16;
            static DataType *INT_17;
            static DataType *INT_18;
            static DataType *INT_19;
            static DataType *INT_20;
            static DataType *INT_21;
            static DataType *INT_22;
            static DataType *INT_23;
            static DataType *INT_24;
            static DataType *INT_25;
            static DataType *INT_26;
            static DataType *INT_27;
            static DataType *INT_30;
            static DataType *INT_31;
            static DataType *INT_32;
            static DataType *INT_34;
            static DataType *INT_35;
            static DataType *INT_38;
            static DataType *INT_6;
            static DataType *INT_8;
            static DataType *INT_9;
            static DataType *INT_S_11;
            static DataType *INT_S_22;
            static DataType *INT_S_24;
            static DataType *INT_S_27;
            static DataType *INT_S_32;
            static DataType *INT_S_5;
            static DataType *U_INT_10;
            static DataType *U_INT_11;
            static DataType *U_INT_12;
            static DataType *U_INT_13;
            static DataType *U_INT_14;
            static DataType *U_INT_16;
            static DataType *U_INT_17;
            static DataType *U_INT_18;
            static DataType *U_INT_2;
            static DataType *U_INT_20;
            static DataType *U_INT_23;
            static DataType *U_INT_24;
            static DataType *U_INT_25;
            static DataType *U_INT_26;
            static DataType *U_INT_27;
            static DataType *U_INT_3;
            static DataType *U_INT_30;
            static DataType *U_INT_32;
            static DataType *U_INT_35;
            static DataType *U_INT_36;
            static DataType *U_INT_4;
            static DataType *U_INT_5;
            static DataType *U_INT_6;
            static DataType *U_INT_7;
            static DataType *U_INT_8;
            static DataType *U_INT_9;

            ::java::lang::Long decode(const ::org::orekit::gnss::metric::parser::EncodedMessage &) const;
            static DataType valueOf(const ::java::lang::String &);
            static JArray< DataType > values();
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
          extern PyType_Def PY_TYPE_DEF(DataType);
          extern PyTypeObject *PY_TYPE(DataType);

          class t_DataType {
          public:
            PyObject_HEAD
            DataType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DataType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DataType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DataType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
