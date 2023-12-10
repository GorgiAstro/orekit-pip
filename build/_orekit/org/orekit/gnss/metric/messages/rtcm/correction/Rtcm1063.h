#ifndef org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1063_H
#define org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1063_H

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
              class RtcmOrbitCorrectionData;
              class RtcmOrbitCorrectionHeader;
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

              class Rtcm1063 : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage {
               public:
                enum {
                  mid_init$_c862bfeb63a17bd5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1063(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1063(const Rtcm1063& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {}

                Rtcm1063(jint, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader &, const ::java::util::List &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1063);
              extern PyTypeObject *PY_TYPE(Rtcm1063);

              class t_Rtcm1063 {
              public:
                PyObject_HEAD
                Rtcm1063 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Rtcm1063 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1063&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1063&, PyTypeObject *, PyTypeObject *);
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
