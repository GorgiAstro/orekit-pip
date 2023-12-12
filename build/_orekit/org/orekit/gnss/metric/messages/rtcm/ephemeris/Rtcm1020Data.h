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
                  mid_init$_0640e6acf969ed28,
                  mid_areAdditionalDataAvailable_89b302893bdbe1f1,
                  mid_getBN_412668abc8d889e9,
                  mid_getDeltaTN_557b8123390d8d0c,
                  mid_getEn_412668abc8d889e9,
                  mid_getFT_412668abc8d889e9,
                  mid_getGlonassNavigationMessage_5224aff0852264c8,
                  mid_getGlonassNavigationMessage_df267878cf34cf89,
                  mid_getLNFifthString_412668abc8d889e9,
                  mid_getLNThirdString_412668abc8d889e9,
                  mid_getM_412668abc8d889e9,
                  mid_getN4_412668abc8d889e9,
                  mid_getNA_412668abc8d889e9,
                  mid_getNt_412668abc8d889e9,
                  mid_getP_412668abc8d889e9,
                  mid_getP1_412668abc8d889e9,
                  mid_getP2_412668abc8d889e9,
                  mid_getP3_412668abc8d889e9,
                  mid_getP4_412668abc8d889e9,
                  mid_getTauC_557b8123390d8d0c,
                  mid_getTauGps_557b8123390d8d0c,
                  mid_getTk_557b8123390d8d0c,
                  mid_isHealthAvailable_89b302893bdbe1f1,
                  mid_setAreAdditionalDataAvailable_ed2afdb8506b9742,
                  mid_setBN_a3da1a935cb37f7b,
                  mid_setDeltaTN_10f281d777284cea,
                  mid_setEn_a3da1a935cb37f7b,
                  mid_setFT_a3da1a935cb37f7b,
                  mid_setGlonassNavigationMessage_2ccd3101dfe293f5,
                  mid_setHealthAvailabilityIndicator_ed2afdb8506b9742,
                  mid_setLNFifthString_a3da1a935cb37f7b,
                  mid_setLNThirdString_a3da1a935cb37f7b,
                  mid_setM_a3da1a935cb37f7b,
                  mid_setN4_a3da1a935cb37f7b,
                  mid_setNA_a3da1a935cb37f7b,
                  mid_setNt_a3da1a935cb37f7b,
                  mid_setP_a3da1a935cb37f7b,
                  mid_setP1_a3da1a935cb37f7b,
                  mid_setP2_a3da1a935cb37f7b,
                  mid_setP3_a3da1a935cb37f7b,
                  mid_setP4_a3da1a935cb37f7b,
                  mid_setTauC_10f281d777284cea,
                  mid_setTauGps_10f281d777284cea,
                  mid_setTk_10f281d777284cea,
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
