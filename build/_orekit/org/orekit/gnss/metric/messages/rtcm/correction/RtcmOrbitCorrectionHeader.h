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
                  mid_init$_7ae3461a92a43152,
                  mid_getSatelliteReferenceDatum_f2f64475e4580546,
                  mid_setSatelliteReferenceDatum_0a2a1ac2721c0336,
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
