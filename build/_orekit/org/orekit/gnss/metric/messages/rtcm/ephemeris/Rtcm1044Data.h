#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1044Data_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1044Data_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class QZSSLegacyNavigationMessage;
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

              class Rtcm1044Data : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getQzssCodeOnL2_d6ab429752e7c267,
                  mid_getQzssFitInterval_d6ab429752e7c267,
                  mid_getQzssNavigationMessage_815b18da959df03f,
                  mid_getQzssNavigationMessage_26a7529e5c4522ab,
                  mid_getQzssToc_9981f74b2d109da6,
                  mid_setQzssCodeOnL2_8fd427ab23829bf5,
                  mid_setQzssFitInterval_8fd427ab23829bf5,
                  mid_setQzssNavigationMessage_6f75ae7b1b0acd17,
                  mid_setQzssToc_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1044Data(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1044Data(const Rtcm1044Data& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(obj) {}

                Rtcm1044Data();

                jint getQzssCodeOnL2() const;
                jint getQzssFitInterval() const;
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage getQzssNavigationMessage() const;
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage getQzssNavigationMessage(const ::org::orekit::time::TimeScales &) const;
                jdouble getQzssToc() const;
                void setQzssCodeOnL2(jint) const;
                void setQzssFitInterval(jint) const;
                void setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage &) const;
                void setQzssToc(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1044Data);
              extern PyTypeObject *PY_TYPE(Rtcm1044Data);

              class t_Rtcm1044Data {
              public:
                PyObject_HEAD
                Rtcm1044Data object;
                static PyObject *wrap_Object(const Rtcm1044Data&);
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
