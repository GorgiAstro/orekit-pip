#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionData_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
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

              class RtcmOrbitCorrectionData : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getGnssIod_d6ab429752e7c267,
                  mid_getOrbitCorrection_a878e7837a73c516,
                  mid_setGnssIod_8fd427ab23829bf5,
                  mid_setOrbitCorrection_cdebebf3a62a7ec1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmOrbitCorrectionData(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmOrbitCorrectionData(const RtcmOrbitCorrectionData& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(obj) {}

                RtcmOrbitCorrectionData();

                jint getGnssIod() const;
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection getOrbitCorrection() const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmOrbitCorrectionData);
              extern PyTypeObject *PY_TYPE(RtcmOrbitCorrectionData);

              class t_RtcmOrbitCorrectionData {
              public:
                PyObject_HEAD
                RtcmOrbitCorrectionData object;
                static PyObject *wrap_Object(const RtcmOrbitCorrectionData&);
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
