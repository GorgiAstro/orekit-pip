#ifndef org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1058_H
#define org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1058_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              class RtcmCorrectionHeader;
              class RtcmClockCorrectionData;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
            namespace correction {

              class Rtcm1058 : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage {
               public:
                enum {
                  mid_init$_a690f6f327f6cb67,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1058(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1058(const Rtcm1058& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {}

                Rtcm1058(jint, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader &, const ::java::util::List &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1058);
              extern PyTypeObject *PY_TYPE(Rtcm1058);

              class t_Rtcm1058 {
              public:
                PyObject_HEAD
                Rtcm1058 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Rtcm1058 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1058&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1058&, PyTypeObject *, PyTypeObject *);
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
