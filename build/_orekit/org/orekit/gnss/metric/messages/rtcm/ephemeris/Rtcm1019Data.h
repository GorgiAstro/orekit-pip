#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019Data_H

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
            class GPSLegacyNavigationMessage;
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

              class Rtcm1019Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getGpsCodeOnL2_570ce0828f81a2c1,
                  mid_getGpsFitInterval_570ce0828f81a2c1,
                  mid_getGpsL2PDataFlag_b108b35ef48e27bd,
                  mid_getGpsNavigationMessage_1dc0f2491ce745f8,
                  mid_getGpsNavigationMessage_4910099d75fee3ff,
                  mid_getGpsToc_dff5885c2c873297,
                  mid_setGpsCodeOnL2_99803b0791f320ff,
                  mid_setGpsFitInterval_99803b0791f320ff,
                  mid_setGpsL2PDataFlag_bd04c9335fb9e4cf,
                  mid_setGpsNavigationMessage_16aa3ee67a4aead2,
                  mid_setGpsToc_17db3a65980d3441,
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
