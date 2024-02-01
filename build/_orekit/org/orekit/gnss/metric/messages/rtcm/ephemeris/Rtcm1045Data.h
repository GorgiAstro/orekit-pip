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
                  mid_init$_ff7cb6c242604316,
                  mid_getGalileoDataValidityStatus_d6ab429752e7c267,
                  mid_getGalileoNavigationMessage_371328c4ee9189ce,
                  mid_getGalileoNavigationMessage_62eb6e8ca002f16a,
                  mid_getGalileoToc_9981f74b2d109da6,
                  mid_setGalileoDataValidityStatus_8fd427ab23829bf5,
                  mid_setGalileoNavigationMessage_88a615ad5e35af17,
                  mid_setGalileoToc_1ad26e8c8c0cd65b,
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
