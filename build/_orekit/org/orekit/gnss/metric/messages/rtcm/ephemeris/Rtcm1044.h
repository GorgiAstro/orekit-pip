#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1044_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1044_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              class Rtcm1044Data;
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

              class Rtcm1044 : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage {
               public:
                enum {
                  mid_init$_9677d77b5970d147,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1044(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1044(const Rtcm1044& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {}

                Rtcm1044(jint, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1044);
              extern PyTypeObject *PY_TYPE(Rtcm1044);

              class t_Rtcm1044 {
              public:
                PyObject_HEAD
                Rtcm1044 object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_Rtcm1044 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1044&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1044&, PyTypeObject *);
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
