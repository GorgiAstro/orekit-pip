#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019Data_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GPSLegacyNavigationMessage;
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

              class Rtcm1019Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getGpsCodeOnL2_d6ab429752e7c267,
                  mid_getGpsFitInterval_d6ab429752e7c267,
                  mid_getGpsL2PDataFlag_eee3de00fe971136,
                  mid_getGpsNavigationMessage_4ed25e280f251036,
                  mid_getGpsNavigationMessage_6ee044ce63e763ab,
                  mid_getGpsToc_9981f74b2d109da6,
                  mid_setGpsCodeOnL2_8fd427ab23829bf5,
                  mid_setGpsFitInterval_8fd427ab23829bf5,
                  mid_setGpsL2PDataFlag_b35db77cae58639e,
                  mid_setGpsNavigationMessage_721b6091f6242c29,
                  mid_setGpsToc_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1019Data(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1019Data(const Rtcm1019Data& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {}

                Rtcm1019Data();

                jint getGpsCodeOnL2() const;
                jint getGpsFitInterval() const;
                jboolean getGpsL2PDataFlag() const;
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage getGpsNavigationMessage() const;
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage getGpsNavigationMessage(const ::org::orekit::time::TimeScales &) const;
                jdouble getGpsToc() const;
                void setGpsCodeOnL2(jint) const;
                void setGpsFitInterval(jint) const;
                void setGpsL2PDataFlag(jboolean) const;
                void setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage &) const;
                void setGpsToc(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1019Data);
              extern PyTypeObject *PY_TYPE(Rtcm1019Data);

              class t_Rtcm1019Data {
              public:
                PyObject_HEAD
                Rtcm1019Data object;
                static PyObject *wrap_Object(const Rtcm1019Data&);
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
