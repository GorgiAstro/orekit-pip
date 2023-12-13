#ifndef org_orekit_gnss_metric_ntrip_GnssData_H
#define org_orekit_gnss_metric_ntrip_GnssData_H

#include "java/lang/Object.h"

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

          class GnssData : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fdec0c33477ce5f0,
              mid_toString_1c1fa1e935d6cdcf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GnssData(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GnssData(const GnssData& obj) : ::java::lang::Object(obj) {}

            GnssData(const JArray< jbyte > &, jint);

            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(GnssData);
          extern PyTypeObject *PY_TYPE(GnssData);

          class t_GnssData {
          public:
            PyObject_HEAD
            GnssData object;
            static PyObject *wrap_Object(const GnssData&);
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
