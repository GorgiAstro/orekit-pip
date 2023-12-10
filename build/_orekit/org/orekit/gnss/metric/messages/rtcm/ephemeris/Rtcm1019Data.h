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
                  mid_init$_7ae3461a92a43152,
                  mid_getGpsCodeOnL2_f2f64475e4580546,
                  mid_getGpsFitInterval_f2f64475e4580546,
                  mid_getGpsL2PDataFlag_e470b6d9e0d979db,
                  mid_getGpsNavigationMessage_5dc75ceaa4fde100,
                  mid_getGpsNavigationMessage_d94d6f9929872471,
                  mid_getGpsToc_456d9a2f64d6b28d,
                  mid_setGpsCodeOnL2_0a2a1ac2721c0336,
                  mid_setGpsFitInterval_0a2a1ac2721c0336,
                  mid_setGpsL2PDataFlag_50a2e0b139e80a58,
                  mid_setGpsNavigationMessage_5e4004300df49c74,
                  mid_setGpsToc_77e0f9a1f260e2e5,
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
