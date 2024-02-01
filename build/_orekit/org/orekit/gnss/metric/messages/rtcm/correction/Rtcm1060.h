#ifndef org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1060_H
#define org_orekit_gnss_metric_messages_rtcm_correction_Rtcm1060_H

#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              class RtcmCombinedCorrectionData;
              class RtcmOrbitCorrectionHeader;
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

              class Rtcm1060 : public ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage {
               public:
                enum {
                  mid_init$_a31f35e7af490700,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Rtcm1060(jobject obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Rtcm1060(const Rtcm1060& obj) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(obj) {}

                Rtcm1060(jint, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader &, const ::java::util::List &);
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
              extern PyType_Def PY_TYPE_DEF(Rtcm1060);
              extern PyTypeObject *PY_TYPE(Rtcm1060);

              class t_Rtcm1060 {
              public:
                PyObject_HEAD
                Rtcm1060 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Rtcm1060 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Rtcm1060&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Rtcm1060&, PyTypeObject *, PyTypeObject *);
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
