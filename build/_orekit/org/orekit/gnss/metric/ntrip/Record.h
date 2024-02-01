#ifndef org_orekit_gnss_metric_ntrip_Record_H
#define org_orekit_gnss_metric_ntrip_Record_H

#include "java/lang/Object.h"

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

          class Record : public ::java::lang::Object {
           public:
            enum {
              mid_getMisc_d2c8eb4129821f0e,
              mid_getRecordType_6b1d5e4fef5a106c,
              mid_getFieldsNumber_d6ab429752e7c267,
              mid_getField_c81987d6b0e2977a,
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
