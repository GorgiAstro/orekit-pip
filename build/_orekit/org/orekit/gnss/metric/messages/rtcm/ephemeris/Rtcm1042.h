#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1042_H

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              class Rtcm1042Data;
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

              class Rtcm1042 : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage {
               public:
                enum {
                  mid_init$_c12363dea05be2ec,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1042(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1042(const Rtcm1042& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {}

                Rtcm1042(jint, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1042);
              extern PyTypeObject *PY_TYPE(Rtcm1042);

              class t_Rtcm1042 {
              public:
                PyObject_HEAD
                Rtcm1042 object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_Rtcm1042 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1042&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1042&, PyTypeObject *);
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
