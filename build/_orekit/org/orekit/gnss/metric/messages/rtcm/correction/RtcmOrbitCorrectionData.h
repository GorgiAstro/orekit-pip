#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionData_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionData_H

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

              class RtcmOrbitCorrectionData : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getGnssIod_412668abc8d889e9,
                  mid_getOrbitCorrection_58d117cad6f91792,
                  mid_setGnssIod_a3da1a935cb37f7b,
                  mid_setOrbitCorrection_9a400e8af37b7414,
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
