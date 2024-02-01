#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class OrbitCorrection;
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

              class RtcmCombinedCorrectionData : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getClockCorrection_9a94dcb2534bfcee,
                  mid_getGnssIod_d6ab429752e7c267,
                  mid_getOrbitCorrection_a878e7837a73c516,
                  mid_setClockCorrection_e6ed13e2bb347f8f,
                  mid_setGnssIod_8fd427ab23829bf5,
                  mid_setOrbitCorrection_cdebebf3a62a7ec1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmCombinedCorrectionData(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmCombinedCorrectionData(const RtcmCombinedCorrectionData& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {}

                RtcmCombinedCorrectionData();

                ::org::orekit::gnss::metric::messages::common::ClockCorrection getClockCorrection() const;
                jint getGnssIod() const;
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection getOrbitCorrection() const;
                void setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection &) const;
                void setGnssIod(jint) const;
                void setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection &) const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmCombinedCorrectionData);
              extern PyTypeObject *PY_TYPE(RtcmCombinedCorrectionData);

              class t_RtcmCombinedCorrectionData {
              public:
                PyObject_HEAD
                RtcmCombinedCorrectionData object;
                static PyObject *wrap_Object(const RtcmCombinedCorrectionData&);
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
