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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getEpochTime1s_b74f83833fdad017,
                  mid_getIodSsr_55546ef6a647f39b,
                  mid_getMultipleMessageIndicator_55546ef6a647f39b,
                  mid_getNumberOfSatellites_55546ef6a647f39b,
                  mid_getSsrProviderId_55546ef6a647f39b,
                  mid_getSsrSolutionId_55546ef6a647f39b,
                  mid_getSsrUpdateInterval_e95bdd4f78fe76e4,
                  mid_setEpochTime1s_8ba9fe7a847cecad,
                  mid_setIodSsr_44ed599e93e8a30c,
                  mid_setMultipleMessageIndicator_44ed599e93e8a30c,
                  mid_setNumberOfSatellites_44ed599e93e8a30c,
                  mid_setSsrProviderId_44ed599e93e8a30c,
                  mid_setSsrSolutionId_44ed599e93e8a30c,
                  mid_setSsrUpdateInterval_729bbcfae2c9c3bb,
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
