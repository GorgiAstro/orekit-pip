#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042Data_H

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
            class BeidouLegacyNavigationMessage;
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

              class Rtcm1042Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getBeidouNavigationMessage_006e221904e033c6,
                  mid_getBeidouNavigationMessage_0da0f002b5100811,
                  mid_getBeidouToc_557b8123390d8d0c,
                  mid_getSvHealth_557b8123390d8d0c,
                  mid_setBeidouNavigationMessage_b3ed48b5bc32689f,
                  mid_setBeidouToc_10f281d777284cea,
                  mid_setSvHealth_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1042Data(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1042Data(const Rtcm1042Data& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {}

                Rtcm1042Data();

                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage getBeidouNavigationMessage() const;
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage getBeidouNavigationMessage(const ::org::orekit::time::TimeScales &) const;
                jdouble getBeidouToc() const;
                jdouble getSvHealth() const;
                void setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage &) const;
                void setBeidouToc(jdouble) const;
                void setSvHealth(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1042Data);
              extern PyTypeObject *PY_TYPE(Rtcm1042Data);

              class t_Rtcm1042Data {
              public:
                PyObject_HEAD
                Rtcm1042Data object;
                static PyObject *wrap_Object(const Rtcm1042Data&);
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
