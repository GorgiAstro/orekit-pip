#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCombinedCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getClockCorrection_3ae426f140e5e927,
                  mid_getGnssIod_55546ef6a647f39b,
                  mid_getOrbitCorrection_da9c9656f83ca27e,
                  mid_setClockCorrection_56b7531fea488c5a,
                  mid_setGnssIod_44ed599e93e8a30c,
                  mid_setOrbitCorrection_b2cd6b761acba879,
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
