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
                  mid_init$_ff7cb6c242604316,
                  mid_areAdditionalDataAvailable_eee3de00fe971136,
                  mid_getBN_d6ab429752e7c267,
                  mid_getDeltaTN_9981f74b2d109da6,
                  mid_getEn_d6ab429752e7c267,
                  mid_getFT_d6ab429752e7c267,
                  mid_getGlonassNavigationMessage_6a460ed0fedcf157,
                  mid_getGlonassNavigationMessage_137117e4fb481233,
                  mid_getLNFifthString_d6ab429752e7c267,
                  mid_getLNThirdString_d6ab429752e7c267,
                  mid_getM_d6ab429752e7c267,
                  mid_getN4_d6ab429752e7c267,
                  mid_getNA_d6ab429752e7c267,
                  mid_getNt_d6ab429752e7c267,
                  mid_getP_d6ab429752e7c267,
                  mid_getP1_d6ab429752e7c267,
                  mid_getP2_d6ab429752e7c267,
                  mid_getP3_d6ab429752e7c267,
                  mid_getP4_d6ab429752e7c267,
                  mid_getTauC_9981f74b2d109da6,
                  mid_getTauGps_9981f74b2d109da6,
                  mid_getTk_9981f74b2d109da6,
                  mid_isHealthAvailable_eee3de00fe971136,
                  mid_setAreAdditionalDataAvailable_b35db77cae58639e,
                  mid_setBN_8fd427ab23829bf5,
                  mid_setDeltaTN_1ad26e8c8c0cd65b,
                  mid_setEn_8fd427ab23829bf5,
                  mid_setFT_8fd427ab23829bf5,
                  mid_setGlonassNavigationMessage_7b95c4ccc6c58ac9,
                  mid_setHealthAvailabilityIndicator_b35db77cae58639e,
                  mid_setLNFifthString_8fd427ab23829bf5,
                  mid_setLNThirdString_8fd427ab23829bf5,
                  mid_setM_8fd427ab23829bf5,
                  mid_setN4_8fd427ab23829bf5,
                  mid_setNA_8fd427ab23829bf5,
                  mid_setNt_8fd427ab23829bf5,
                  mid_setP_8fd427ab23829bf5,
                  mid_setP1_8fd427ab23829bf5,
                  mid_setP2_8fd427ab23829bf5,
                  mid_setP3_8fd427ab23829bf5,
                  mid_setP4_8fd427ab23829bf5,
                  mid_setTauC_1ad26e8c8c0cd65b,
                  mid_setTauGps_1ad26e8c8c0cd65b,
                  mid_setTk_1ad26e8c8c0cd65b,
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
