#ifndef org_orekit_gnss_metric_ntrip_Record_H
#define org_orekit_gnss_metric_ntrip_Record_H

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
        namespace ntrip {
          class RecordType;
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
        namespace ntrip {

          class Record : public ::java::lang::Object {
           public:
            enum {
              mid_getMisc_3cffd47377eca18a,
              mid_getRecordType_2923d5139aa846c0,
              mid_getFieldsNumber_412668abc8d889e9,
              mid_getField_0f10d4a5e06f61c0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Record(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Record(const Record& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String getMisc() const;
            ::org::orekit::gnss::metric::ntrip::RecordType getRecordType() const;
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
          extern PyType_Def PY_TYPE_DEF(Record);
          extern PyTypeObject *PY_TYPE(Record);

          class t_Record {
          public:
            PyObject_HEAD
            Record object;
            static PyObject *wrap_Object(const Record&);
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
