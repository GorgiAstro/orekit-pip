#ifndef org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1241_H
#define org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1241_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"

namespace java {
  namespace util {
    class List;
  }
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
            namespace correction {
              class RtcmClockCorrectionData;
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

              class Rtcm1241 : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage {
               public:
                enum {
                  mid_init$_fca910fb352c04ac,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1241(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1241(const Rtcm1241& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {}

                Rtcm1241(jint, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader &, const ::java::util::List &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1241);
              extern PyTypeObject *PY_TYPE(Rtcm1241);

              class t_Rtcm1241 {
              public:
                PyObject_HEAD
                Rtcm1241 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Rtcm1241 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1241&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1241&, PyTypeObject *, PyTypeObject *);
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
