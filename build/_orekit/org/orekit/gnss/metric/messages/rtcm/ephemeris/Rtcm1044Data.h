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
                  mid_init$_7ae3461a92a43152,
                  mid_getQzssCodeOnL2_f2f64475e4580546,
                  mid_getQzssFitInterval_f2f64475e4580546,
                  mid_getQzssNavigationMessage_71cc6e0d8b6b7d6c,
                  mid_getQzssNavigationMessage_73041cd6a5a71992,
                  mid_getQzssToc_456d9a2f64d6b28d,
                  mid_setQzssCodeOnL2_0a2a1ac2721c0336,
                  mid_setQzssFitInterval_0a2a1ac2721c0336,
                  mid_setQzssNavigationMessage_c40499bedaddc366,
                  mid_setQzssToc_77e0f9a1f260e2e5,
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
