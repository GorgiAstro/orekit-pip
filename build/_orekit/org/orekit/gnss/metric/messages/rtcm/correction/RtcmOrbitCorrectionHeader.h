#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionHeader_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmOrbitCorrectionHeader_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"

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

              class RtcmOrbitCorrectionHeader : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getSatelliteReferenceDatum_412668abc8d889e9,
                  mid_setSatelliteReferenceDatum_a3da1a935cb37f7b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmOrbitCorrectionHeader(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmOrbitCorrectionHeader(const RtcmOrbitCorrectionHeader& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(obj) {}

                RtcmOrbitCorrectionHeader();

                jint getSatelliteReferenceDatum() const;
                void setSatelliteReferenceDatum(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmOrbitCorrectionHeader);
              extern PyTypeObject *PY_TYPE(RtcmOrbitCorrectionHeader);

              class t_RtcmOrbitCorrectionHeader {
              public:
                PyObject_HEAD
                RtcmOrbitCorrectionHeader object;
                static PyObject *wrap_Object(const RtcmOrbitCorrectionHeader&);
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
