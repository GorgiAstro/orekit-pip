#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_RtcmEphemerisData_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_RtcmEphemerisData_H

#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class AccuracyProvider;
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

              class RtcmEphemerisData : public ::org::orekit::gnss::metric::messages::rtcm::RtcmData {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getAccuracyProvider_8088de65fb6ae567,
                  mid_getSatelliteID_55546ef6a647f39b,
                  mid_setAccuracyProvider_3b6061b08132bc3a,
                  mid_setSatelliteID_44ed599e93e8a30c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmEphemerisData(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmEphemerisData(const RtcmEphemerisData& obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(obj) {}

                RtcmEphemerisData();

                ::org::orekit::gnss::metric::messages::common::AccuracyProvider getAccuracyProvider() const;
                jint getSatelliteID() const;
                void setAccuracyProvider(const ::org::orekit::gnss::metric::messages::common::AccuracyProvider &) const;
                void setSatelliteID(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmEphemerisData);
              extern PyTypeObject *PY_TYPE(RtcmEphemerisData);

              class t_RtcmEphemerisData {
              public:
                PyObject_HEAD
                RtcmEphemerisData object;
                static PyObject *wrap_Object(const RtcmEphemerisData&);
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
