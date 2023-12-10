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
                  mid_init$_0fa09c18fee449d5,
                  mid_getSatelliteID_570ce0828f81a2c1,
                  mid_setSatelliteID_99803b0791f320ff,
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
