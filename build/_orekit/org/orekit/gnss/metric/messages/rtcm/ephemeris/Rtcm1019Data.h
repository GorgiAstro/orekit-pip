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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getGpsCodeOnL2_55546ef6a647f39b,
                  mid_getGpsFitInterval_55546ef6a647f39b,
                  mid_getGpsL2PDataFlag_9ab94ac1dc23b105,
                  mid_getGpsNavigationMessage_aa68115a8276ce13,
                  mid_getGpsNavigationMessage_71b725e1cd81a850,
                  mid_getGpsToc_b74f83833fdad017,
                  mid_setGpsCodeOnL2_44ed599e93e8a30c,
                  mid_setGpsFitInterval_44ed599e93e8a30c,
                  mid_setGpsL2PDataFlag_fcb96c98de6fad04,
                  mid_setGpsNavigationMessage_cfa2ffa15867e7bd,
                  mid_setGpsToc_8ba9fe7a847cecad,
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
