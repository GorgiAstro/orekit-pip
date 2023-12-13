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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_areAdditionalDataAvailable_9ab94ac1dc23b105,
                  mid_getBN_55546ef6a647f39b,
                  mid_getDeltaTN_b74f83833fdad017,
                  mid_getEn_55546ef6a647f39b,
                  mid_getFT_55546ef6a647f39b,
                  mid_getGlonassNavigationMessage_c12b34246a5b4f75,
                  mid_getGlonassNavigationMessage_61b6937e41eaa40d,
                  mid_getLNFifthString_55546ef6a647f39b,
                  mid_getLNThirdString_55546ef6a647f39b,
                  mid_getM_55546ef6a647f39b,
                  mid_getN4_55546ef6a647f39b,
                  mid_getNA_55546ef6a647f39b,
                  mid_getNt_55546ef6a647f39b,
                  mid_getP_55546ef6a647f39b,
                  mid_getP1_55546ef6a647f39b,
                  mid_getP2_55546ef6a647f39b,
                  mid_getP3_55546ef6a647f39b,
                  mid_getP4_55546ef6a647f39b,
                  mid_getTauC_b74f83833fdad017,
                  mid_getTauGps_b74f83833fdad017,
                  mid_getTk_b74f83833fdad017,
                  mid_isHealthAvailable_9ab94ac1dc23b105,
                  mid_setAreAdditionalDataAvailable_fcb96c98de6fad04,
                  mid_setBN_44ed599e93e8a30c,
                  mid_setDeltaTN_8ba9fe7a847cecad,
                  mid_setEn_44ed599e93e8a30c,
                  mid_setFT_44ed599e93e8a30c,
                  mid_setGlonassNavigationMessage_1538465e20a8ec53,
                  mid_setHealthAvailabilityIndicator_fcb96c98de6fad04,
                  mid_setLNFifthString_44ed599e93e8a30c,
                  mid_setLNThirdString_44ed599e93e8a30c,
                  mid_setM_44ed599e93e8a30c,
                  mid_setN4_44ed599e93e8a30c,
                  mid_setNA_44ed599e93e8a30c,
                  mid_setNt_44ed599e93e8a30c,
                  mid_setP_44ed599e93e8a30c,
                  mid_setP1_44ed599e93e8a30c,
                  mid_setP2_44ed599e93e8a30c,
                  mid_setP3_44ed599e93e8a30c,
                  mid_setP4_44ed599e93e8a30c,
                  mid_setTauC_8ba9fe7a847cecad,
                  mid_setTauGps_8ba9fe7a847cecad,
                  mid_setTk_8ba9fe7a847cecad,
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
