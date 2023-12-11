#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_RtcmEphemerisMessage_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_RtcmEphemerisMessage_H

#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              class RtcmEphemerisData;
            }
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

              class RtcmEphemerisMessage : public ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage {
               public:
                enum {
                  mid_init$_b637eaca7786a504,
                  mid_getEphemerisData_0d91fc2e9dc67222,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RtcmEphemerisMessage(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RtcmEphemerisMessage(const RtcmEphemerisMessage& obj) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(obj) {}

                RtcmEphemerisMessage(jint, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData &);

                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData getEphemerisData() const;
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
              extern PyType_Def PY_TYPE_DEF(RtcmEphemerisMessage);
              extern PyTypeObject *PY_TYPE(RtcmEphemerisMessage);

              class t_RtcmEphemerisMessage {
              public:
                PyObject_HEAD
                RtcmEphemerisMessage object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_RtcmEphemerisMessage *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RtcmEphemerisMessage&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RtcmEphemerisMessage&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
