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
                  mid_init$_0640e6acf969ed28,
                  mid_getGpsCodeOnL2_412668abc8d889e9,
                  mid_getGpsFitInterval_412668abc8d889e9,
                  mid_getGpsL2PDataFlag_89b302893bdbe1f1,
                  mid_getGpsNavigationMessage_e97c0a268023bf7a,
                  mid_getGpsNavigationMessage_5a132e5828edd449,
                  mid_getGpsToc_557b8123390d8d0c,
                  mid_setGpsCodeOnL2_a3da1a935cb37f7b,
                  mid_setGpsFitInterval_a3da1a935cb37f7b,
                  mid_setGpsL2PDataFlag_ed2afdb8506b9742,
                  mid_setGpsNavigationMessage_32ebc1a815392aa5,
                  mid_setGpsToc_10f281d777284cea,
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
