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
              mid_getMisc_1c1fa1e935d6cdcf,
              mid_getRecordType_3f153b7c7459a9e2,
              mid_getFieldsNumber_55546ef6a647f39b,
              mid_getField_2a9bffd3d5397f7c,
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
