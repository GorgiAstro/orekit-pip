#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionHeader_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionHeader_H

#include "java/lang/Object.h"

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
            class SsrUpdateInterval;
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

              class RtcmCorrectionHeader : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getEpochTime1s_dff5885c2c873297,
                  mid_getIodSsr_570ce0828f81a2c1,
                  mid_getMultipleMessageIndicator_570ce0828f81a2c1,
                  mid_getNumberOfSatellites_570ce0828f81a2c1,
                  mid_getSsrProviderId_570ce0828f81a2c1,
                  mid_getSsrSolutionId_570ce0828f81a2c1,
                  mid_getSsrUpdateInterval_84f8aabc0e0f32e2,
                  mid_setEpochTime1s_17db3a65980d3441,
                  mid_setIodSsr_99803b0791f320ff,
                  mid_setMultipleMessageIndicator_99803b0791f320ff,
                  mid_setNumberOfSatellites_99803b0791f320ff,
                  mid_setSsrProviderId_99803b0791f320ff,
                  mid_setSsrSolutionId_99803b0791f320ff,
                  mid_setSsrUpdateInterval_23b863f8ba362dbf,
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
