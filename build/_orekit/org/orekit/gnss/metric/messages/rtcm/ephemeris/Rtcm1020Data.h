#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020Data_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSNavigationMessage;
          }
        }
      }
    }
    namespace time {
      class TimeScales;
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
                  mid_init$_0fa09c18fee449d5,
                  mid_areAdditionalDataAvailable_b108b35ef48e27bd,
                  mid_getBN_570ce0828f81a2c1,
                  mid_getDeltaTN_dff5885c2c873297,
                  mid_getEn_570ce0828f81a2c1,
                  mid_getFT_570ce0828f81a2c1,
                  mid_getGlonassNavigationMessage_17df07811745e427,
                  mid_getGlonassNavigationMessage_42c1c61c25a503ca,
                  mid_getLNFifthString_570ce0828f81a2c1,
                  mid_getLNThirdString_570ce0828f81a2c1,
                  mid_getM_570ce0828f81a2c1,
                  mid_getN4_570ce0828f81a2c1,
                  mid_getNA_570ce0828f81a2c1,
                  mid_getNt_570ce0828f81a2c1,
                  mid_getP_570ce0828f81a2c1,
                  mid_getP1_570ce0828f81a2c1,
                  mid_getP2_570ce0828f81a2c1,
                  mid_getP3_570ce0828f81a2c1,
                  mid_getP4_570ce0828f81a2c1,
                  mid_getTauC_dff5885c2c873297,
                  mid_getTauGps_dff5885c2c873297,
                  mid_getTk_dff5885c2c873297,
                  mid_isHealthAvailable_b108b35ef48e27bd,
                  mid_setAreAdditionalDataAvailable_bd04c9335fb9e4cf,
                  mid_setBN_99803b0791f320ff,
                  mid_setDeltaTN_17db3a65980d3441,
                  mid_setEn_99803b0791f320ff,
                  mid_setFT_99803b0791f320ff,
                  mid_setGlonassNavigationMessage_03382bf5f212b94b,
                  mid_setHealthAvailabilityIndicator_bd04c9335fb9e4cf,
                  mid_setLNFifthString_99803b0791f320ff,
                  mid_setLNThirdString_99803b0791f320ff,
                  mid_setM_99803b0791f320ff,
                  mid_setN4_99803b0791f320ff,
                  mid_setNA_99803b0791f320ff,
                  mid_setNt_99803b0791f320ff,
                  mid_setP_99803b0791f320ff,
                  mid_setP1_99803b0791f320ff,
                  mid_setP2_99803b0791f320ff,
                  mid_setP3_99803b0791f320ff,
                  mid_setP4_99803b0791f320ff,
                  mid_setTauC_17db3a65980d3441,
                  mid_setTauGps_17db3a65980d3441,
                  mid_setTk_17db3a65980d3441,
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
