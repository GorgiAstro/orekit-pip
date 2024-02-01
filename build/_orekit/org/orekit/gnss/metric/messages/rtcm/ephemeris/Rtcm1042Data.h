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
                  mid_init$_ff7cb6c242604316,
                  mid_getBeidouNavigationMessage_e6f42604e7feb12a,
                  mid_getBeidouNavigationMessage_731fc97e60c82f35,
                  mid_getBeidouToc_9981f74b2d109da6,
                  mid_getSvHealth_9981f74b2d109da6,
                  mid_setBeidouNavigationMessage_2d17a52d9df6bdec,
                  mid_setBeidouToc_1ad26e8c8c0cd65b,
                  mid_setSvHealth_1ad26e8c8c0cd65b,
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
