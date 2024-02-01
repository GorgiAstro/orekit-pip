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
                  mid_init$_ff7cb6c242604316,
                  mid_getEpochTime1s_9981f74b2d109da6,
                  mid_getIodSsr_d6ab429752e7c267,
                  mid_getMultipleMessageIndicator_d6ab429752e7c267,
                  mid_getNumberOfSatellites_d6ab429752e7c267,
                  mid_getSsrProviderId_d6ab429752e7c267,
                  mid_getSsrSolutionId_d6ab429752e7c267,
                  mid_getSsrUpdateInterval_9dfd1882807e8d80,
                  mid_setEpochTime1s_1ad26e8c8c0cd65b,
                  mid_setIodSsr_8fd427ab23829bf5,
                  mid_setMultipleMessageIndicator_8fd427ab23829bf5,
                  mid_setNumberOfSatellites_8fd427ab23829bf5,
                  mid_setSsrProviderId_8fd427ab23829bf5,
                  mid_setSsrSolutionId_8fd427ab23829bf5,
                  mid_setSsrUpdateInterval_e0673b36c7101226,
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
