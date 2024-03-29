#ifndef org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionMessage_H
#define org_orekit_gnss_metric_messages_rtcm_correction_RtcmCorrectionMessage_H

#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"

namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              class RtcmCorrectionHeader;
            }
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              class RtcmCorrectionMessage : public ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage {
               public:
                enum {
                  mid_init$_673ab50160791be9,
                  mid_getDataMap_dbcb8bbac6b35e0d,
                  mid_getHeader_efa3071feaa2ce16,
                  mid_getSatelliteSystem_fb0bd27fcc3ba9fc,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmCorrectionMessage(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmCorrectionMessage(const RtcmCorrectionMessage& obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(obj) {}

                RtcmCorrectionMessage(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader &, const ::java::util::List &);

                ::java::util::Map getDataMap() const;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader getHeader() const;
                ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
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
            namespace correction {
              extern PyType_Def PY_TYPE_DEF(RtcmCorrectionMessage);
              extern PyTypeObject *PY_TYPE(RtcmCorrectionMessage);

              class t_RtcmCorrectionMessage {
              public:
                PyObject_HEAD
                RtcmCorrectionMessage object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_RtcmCorrectionMessage *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RtcmCorrectionMessage&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RtcmCorrectionMessage&, PyTypeObject *, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
