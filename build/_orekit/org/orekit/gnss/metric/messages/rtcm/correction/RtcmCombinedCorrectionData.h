#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class ClockCorrection;
            class OrbitCorrection;
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
                  mid_init$_0640e6acf969ed28,
                  mid_getClockCorrection_96d5462b84e1a874,
                  mid_getGnssIod_412668abc8d889e9,
                  mid_getOrbitCorrection_58d117cad6f91792,
                  mid_setClockCorrection_cf572ee5ddb143ac,
                  mid_setGnssIod_a3da1a935cb37f7b,
                  mid_setOrbitCorrection_9a400e8af37b7414,
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
