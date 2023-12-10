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
                  mid_init$_0fa09c18fee449d5,
                  mid_getSatelliteReferenceDatum_570ce0828f81a2c1,
                  mid_setSatelliteReferenceDatum_99803b0791f320ff,
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
