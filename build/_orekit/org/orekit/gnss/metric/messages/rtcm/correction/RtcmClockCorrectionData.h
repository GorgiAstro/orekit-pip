#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmClockCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmClockCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class ClockCorrection;
          }
        }
      }
    }
  }
}
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

              class RtcmClockCorrectionData : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getClockCorrection_9a94dcb2534bfcee,
                  mid_setClockCorrection_e6ed13e2bb347f8f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmClockCorrectionData(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmClockCorrectionData(const RtcmClockCorrectionData& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {}

                RtcmClockCorrectionData();

                ::org::orekit::gnss::metric::messages::common::ClockCorrection getClockCorrection() const;
                void setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection &) const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmClockCorrectionData);
              extern PyTypeObject *PY_TYPE(RtcmClockCorrectionData);

              class t_RtcmClockCorrectionData {
              public:
                PyObject_HEAD
                RtcmClockCorrectionData object;
                static PyObject *wrap_Object(const RtcmClockCorrectionData&);
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
