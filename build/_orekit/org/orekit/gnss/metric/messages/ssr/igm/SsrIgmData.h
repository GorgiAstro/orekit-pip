#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgmData_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgmData_H

#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"

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
          namespace ssr {
            namespace igm {

              class SsrIgmData : public ::org::orekit::gnss::metric::messages::ssr::SsrData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getSatelliteID_d6ab429752e7c267,
                  mid_setSatelliteID_8fd427ab23829bf5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgmData(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgmData(const SsrIgmData& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrData(obj) {}

                SsrIgmData();

                jint getSatelliteID() const;
                void setSatelliteID(jint) const;
              };
            }
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
          namespace ssr {
            namespace igm {
              extern PyType_Def PY_TYPE_DEF(SsrIgmData);
              extern PyTypeObject *PY_TYPE(SsrIgmData);

              class t_SsrIgmData {
              public:
                PyObject_HEAD
                SsrIgmData object;
                static PyObject *wrap_Object(const SsrIgmData&);
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
}

#endif
