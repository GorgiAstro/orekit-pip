#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"

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
            namespace correction {

              class RtcmCorrectionData : public ::org::orekit::gnss::metric::messages::rtcm::RtcmData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getSatelliteID_412668abc8d889e9,
                  mid_setSatelliteID_a3da1a935cb37f7b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmCorrectionData(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmCorrectionData(const RtcmCorrectionData& obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(obj) {}

                RtcmCorrectionData();

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
          namespace rtcm {
            namespace correction {
              extern PyType_Def PY_TYPE_DEF(RtcmCorrectionData);
              extern PyTypeObject *PY_TYPE(RtcmCorrectionData);

              class t_RtcmCorrectionData {
              public:
                PyObject_HEAD
                RtcmCorrectionData object;
                static PyObject *wrap_Object(const RtcmCorrectionData&);
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
