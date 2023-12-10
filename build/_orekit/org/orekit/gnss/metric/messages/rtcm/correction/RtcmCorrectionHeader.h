#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionHeader_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class SsrUpdateInterval;
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

              class RtcmCorrectionHeader : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getEpochTime1s_456d9a2f64d6b28d,
                  mid_getIodSsr_f2f64475e4580546,
                  mid_getMultipleMessageIndicator_f2f64475e4580546,
                  mid_getNumberOfSatellites_f2f64475e4580546,
                  mid_getSsrProviderId_f2f64475e4580546,
                  mid_getSsrSolutionId_f2f64475e4580546,
                  mid_getSsrUpdateInterval_2fd89da74e4f387e,
                  mid_setEpochTime1s_77e0f9a1f260e2e5,
                  mid_setIodSsr_0a2a1ac2721c0336,
                  mid_setMultipleMessageIndicator_0a2a1ac2721c0336,
                  mid_setNumberOfSatellites_0a2a1ac2721c0336,
                  mid_setSsrProviderId_0a2a1ac2721c0336,
                  mid_setSsrSolutionId_0a2a1ac2721c0336,
                  mid_setSsrUpdateInterval_36e6b7154fdd6599,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmCorrectionHeader(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmCorrectionHeader(const RtcmCorrectionHeader& obj) : ::java::lang::Object(obj) {}

                RtcmCorrectionHeader();

                jdouble getEpochTime1s() const;
                jint getIodSsr() const;
                jint getMultipleMessageIndicator() const;
                jint getNumberOfSatellites() const;
                jint getSsrProviderId() const;
                jint getSsrSolutionId() const;
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval getSsrUpdateInterval() const;
                void setEpochTime1s(jdouble) const;
                void setIodSsr(jint) const;
                void setMultipleMessageIndicator(jint) const;
                void setNumberOfSatellites(jint) const;
                void setSsrProviderId(jint) const;
                void setSsrSolutionId(jint) const;
                void setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval &) const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmCorrectionHeader);
              extern PyTypeObject *PY_TYPE(RtcmCorrectionHeader);

              class t_RtcmCorrectionHeader {
              public:
                PyObject_HEAD
                RtcmCorrectionHeader object;
                static PyObject *wrap_Object(const RtcmCorrectionHeader&);
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
