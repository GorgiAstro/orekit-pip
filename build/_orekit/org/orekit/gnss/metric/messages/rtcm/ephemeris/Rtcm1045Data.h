#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1045Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1045Data_H

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
            class GalileoNavigationMessage;
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

              class Rtcm1045Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getGalileoDataValidityStatus_412668abc8d889e9,
                  mid_getGalileoNavigationMessage_5c5a0a2ca9495fcb,
                  mid_getGalileoNavigationMessage_f5bf78c7357e4450,
                  mid_getGalileoToc_557b8123390d8d0c,
                  mid_setGalileoDataValidityStatus_a3da1a935cb37f7b,
                  mid_setGalileoNavigationMessage_91f1ae10feea1e6d,
                  mid_setGalileoToc_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1045Data(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1045Data(const Rtcm1045Data& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {}

                Rtcm1045Data();

                jint getGalileoDataValidityStatus() const;
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage getGalileoNavigationMessage() const;
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage getGalileoNavigationMessage(const ::org::orekit::time::TimeScales &) const;
                jdouble getGalileoToc() const;
                void setGalileoDataValidityStatus(jint) const;
                void setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage &) const;
                void setGalileoToc(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1045Data);
              extern PyTypeObject *PY_TYPE(Rtcm1045Data);

              class t_Rtcm1045Data {
              public:
                PyObject_HEAD
                Rtcm1045Data object;
                static PyObject *wrap_Object(const Rtcm1045Data&);
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
