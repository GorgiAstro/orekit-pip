#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020Data_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSNavigationMessage;
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
            namespace ephemeris {

              class Rtcm1020Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_areAdditionalDataAvailable_e470b6d9e0d979db,
                  mid_getBN_f2f64475e4580546,
                  mid_getDeltaTN_456d9a2f64d6b28d,
                  mid_getEn_f2f64475e4580546,
                  mid_getFT_f2f64475e4580546,
                  mid_getGlonassNavigationMessage_0543f4eba8117712,
                  mid_getGlonassNavigationMessage_fd3df630cc1fdbe1,
                  mid_getLNFifthString_f2f64475e4580546,
                  mid_getLNThirdString_f2f64475e4580546,
                  mid_getM_f2f64475e4580546,
                  mid_getN4_f2f64475e4580546,
                  mid_getNA_f2f64475e4580546,
                  mid_getNt_f2f64475e4580546,
                  mid_getP_f2f64475e4580546,
                  mid_getP1_f2f64475e4580546,
                  mid_getP2_f2f64475e4580546,
                  mid_getP3_f2f64475e4580546,
                  mid_getP4_f2f64475e4580546,
                  mid_getTauC_456d9a2f64d6b28d,
                  mid_getTauGps_456d9a2f64d6b28d,
                  mid_getTk_456d9a2f64d6b28d,
                  mid_isHealthAvailable_e470b6d9e0d979db,
                  mid_setAreAdditionalDataAvailable_50a2e0b139e80a58,
                  mid_setBN_0a2a1ac2721c0336,
                  mid_setDeltaTN_77e0f9a1f260e2e5,
                  mid_setEn_0a2a1ac2721c0336,
                  mid_setFT_0a2a1ac2721c0336,
                  mid_setGlonassNavigationMessage_9f037303855bf75b,
                  mid_setHealthAvailabilityIndicator_50a2e0b139e80a58,
                  mid_setLNFifthString_0a2a1ac2721c0336,
                  mid_setLNThirdString_0a2a1ac2721c0336,
                  mid_setM_0a2a1ac2721c0336,
                  mid_setN4_0a2a1ac2721c0336,
                  mid_setNA_0a2a1ac2721c0336,
                  mid_setNt_0a2a1ac2721c0336,
                  mid_setP_0a2a1ac2721c0336,
                  mid_setP1_0a2a1ac2721c0336,
                  mid_setP2_0a2a1ac2721c0336,
                  mid_setP3_0a2a1ac2721c0336,
                  mid_setP4_0a2a1ac2721c0336,
                  mid_setTauC_77e0f9a1f260e2e5,
                  mid_setTauGps_77e0f9a1f260e2e5,
                  mid_setTk_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1020Data(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1020Data(const Rtcm1020Data& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {}

                Rtcm1020Data();

                jboolean areAdditionalDataAvailable() const;
                jint getBN() const;
                jdouble getDeltaTN() const;
                jint getEn() const;
                jint getFT() const;
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage getGlonassNavigationMessage() const;
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage getGlonassNavigationMessage(const ::org::orekit::time::TimeScales &) const;
                jint getLNFifthString() const;
                jint getLNThirdString() const;
                jint getM() const;
                jint getN4() const;
                jint getNA() const;
                jint getNt() const;
                jint getP() const;
                jint getP1() const;
                jint getP2() const;
                jint getP3() const;
                jint getP4() const;
                jdouble getTauC() const;
                jdouble getTauGps() const;
                jdouble getTk() const;
                jboolean isHealthAvailable() const;
                void setAreAdditionalDataAvailable(jboolean) const;
                void setBN(jint) const;
                void setDeltaTN(jdouble) const;
                void setEn(jint) const;
                void setFT(jint) const;
                void setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage &) const;
                void setHealthAvailabilityIndicator(jboolean) const;
                void setLNFifthString(jint) const;
                void setLNThirdString(jint) const;
                void setM(jint) const;
                void setN4(jint) const;
                void setNA(jint) const;
                void setNt(jint) const;
                void setP(jint) const;
                void setP1(jint) const;
                void setP2(jint) const;
                void setP3(jint) const;
                void setP4(jint) const;
                void setTauC(jdouble) const;
                void setTauGps(jdouble) const;
                void setTk(jdouble) const;
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
            namespace ephemeris {
              extern PyType_Def PY_TYPE_DEF(Rtcm1020Data);
              extern PyTypeObject *PY_TYPE(Rtcm1020Data);

              class t_Rtcm1020Data {
              public:
                PyObject_HEAD
                Rtcm1020Data object;
                static PyObject *wrap_Object(const Rtcm1020Data&);
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
