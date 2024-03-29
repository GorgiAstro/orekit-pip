#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1020_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              class Rtcm1020Data;
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
            namespace ephemeris {

              class Rtcm1020 : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage {
               public:
                enum {
                  mid_init$_2e90a886a11e1715,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1020(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1020(const Rtcm1020& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {}

                Rtcm1020(jint, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1020);
              extern PyTypeObject *PY_TYPE(Rtcm1020);

              class t_Rtcm1020 {
              public:
                PyObject_HEAD
                Rtcm1020 object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_Rtcm1020 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1020&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1020&, PyTypeObject *);
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
