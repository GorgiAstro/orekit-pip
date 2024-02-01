#ifndef org_orekit_gnss_metric_messages_rtcm_RtcmData_H
#define org_orekit_gnss_metric_messages_rtcm_RtcmData_H

#include "java/lang/Object.h"

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
        namespace messages {
          namespace rtcm {

            class RtcmData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RtcmData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RtcmData(const RtcmData& obj) : ::java::lang::Object(obj) {}

              RtcmData();
            };
          }
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
        namespace messages {
          namespace rtcm {
            extern PyType_Def PY_TYPE_DEF(RtcmData);
            extern PyTypeObject *PY_TYPE(RtcmData);

            class t_RtcmData {
            public:
              PyObject_HEAD
              RtcmData object;
              static PyObject *wrap_Object(const RtcmData&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
