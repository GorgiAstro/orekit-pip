#ifndef org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019_H
#define org_orekit_gnss_metric_messages_rtcm_ephemeris_Rtcm1019_H

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
              class Rtcm1019Data;
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

              class Rtcm1019 : public ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage {
               public:
                enum {
                  mid_init$_8a23d3d6d152d182,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1019(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1019(const Rtcm1019& obj) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(obj) {}

                Rtcm1019(jint, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1019);
              extern PyTypeObject *PY_TYPE(Rtcm1019);

              class t_Rtcm1019 {
              public:
                PyObject_HEAD
                Rtcm1019 object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_Rtcm1019 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1019&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1019&, PyTypeObject *);
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
