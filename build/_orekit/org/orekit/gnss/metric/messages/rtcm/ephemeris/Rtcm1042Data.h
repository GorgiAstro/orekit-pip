#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042Data_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouLegacyNavigationMessage;
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

              class Rtcm1042Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getBeidouNavigationMessage_13d1af32939a6e9c,
                  mid_getBeidouNavigationMessage_a0991862b918be40,
                  mid_getBeidouToc_b74f83833fdad017,
                  mid_getSvHealth_b74f83833fdad017,
                  mid_setBeidouNavigationMessage_3bdf636f6ee36324,
                  mid_setBeidouToc_8ba9fe7a847cecad,
                  mid_setSvHealth_8ba9fe7a847cecad,
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
