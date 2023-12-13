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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getSatelliteReferenceDatum_55546ef6a647f39b,
                  mid_setSatelliteReferenceDatum_44ed599e93e8a30c,
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
