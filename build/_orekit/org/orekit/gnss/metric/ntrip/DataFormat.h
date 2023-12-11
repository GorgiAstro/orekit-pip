#ifndef org_orekit_gnss_metric_ntrip_DataFormat_H
#define org_orekit_gnss_metric_ntrip_DataFormat_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class DataFormat;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class DataFormat : public ::java::lang::Enum {
           public:
            enum {
              mid_getDataFormat_268f6f5bf26db0c3,
              mid_valueOf_268f6f5bf26db0c3,
              mid_values_5542ae08d129ed1a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DataFormat(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DataFormat(const DataFormat& obj) : ::java::lang::Enum(obj) {}

            static DataFormat *BINEX;
            static DataFormat *CMR;
            static DataFormat *CMR_PLUS;
            static DataFormat *RAW;
            static DataFormat *RINEX;
            static DataFormat *RTCA;
            static DataFormat *RTCM_2;
            static DataFormat *RTCM_3;
            static DataFormat *RTCM_SAPOS;
            static DataFormat *SAPOS_ADV;
            static DataFormat *SP3;

            static DataFormat getDataFormat(const ::java::lang::String &);
            static DataFormat valueOf(const ::java::lang::String &);
            static JArray< DataFormat > values();
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
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(DataFormat);
          extern PyTypeObject *PY_TYPE(DataFormat);

          class t_DataFormat {
          public:
            PyObject_HEAD
            DataFormat object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DataFormat *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DataFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DataFormat&, PyTypeObject *);
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
