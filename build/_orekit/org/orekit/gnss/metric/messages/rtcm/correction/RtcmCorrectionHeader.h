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
                  mid_init$_0640e6acf969ed28,
                  mid_getEpochTime1s_557b8123390d8d0c,
                  mid_getIodSsr_412668abc8d889e9,
                  mid_getMultipleMessageIndicator_412668abc8d889e9,
                  mid_getNumberOfSatellites_412668abc8d889e9,
                  mid_getSsrProviderId_412668abc8d889e9,
                  mid_getSsrSolutionId_412668abc8d889e9,
                  mid_getSsrUpdateInterval_bdb56644ae226ace,
                  mid_setEpochTime1s_10f281d777284cea,
                  mid_setIodSsr_a3da1a935cb37f7b,
                  mid_setMultipleMessageIndicator_a3da1a935cb37f7b,
                  mid_setNumberOfSatellites_a3da1a935cb37f7b,
                  mid_setSsrProviderId_a3da1a935cb37f7b,
                  mid_setSsrSolutionId_a3da1a935cb37f7b,
                  mid_setSsrUpdateInterval_ea1bc450da024121,
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
