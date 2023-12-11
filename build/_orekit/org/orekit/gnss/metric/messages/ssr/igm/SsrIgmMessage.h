#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgmMessage_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgmMessage_H

#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              class SsrIgmHeader;
            }
          }
        }
      }
      class SatelliteSystem;
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
          namespace ssr {
            namespace igm {

              class SsrIgmMessage : public ::org::orekit::gnss::metric::messages::ssr::SsrMessage {
               public:
                enum {
                  mid_init$_8f8b8c5c70a833b4,
                  mid_getSatelliteSystem_8b86408cc2633961,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgmMessage(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgmMessage(const SsrIgmMessage& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(obj) {}

                SsrIgmMessage(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader &, const ::java::util::List &);

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
          namespace ssr {
            namespace igm {
              extern PyType_Def PY_TYPE_DEF(SsrIgmMessage);
              extern PyTypeObject *PY_TYPE(SsrIgmMessage);

              class t_SsrIgmMessage {
              public:
                PyObject_HEAD
                SsrIgmMessage object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgmMessage *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgmMessage&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgmMessage&, PyTypeObject *, PyTypeObject *);
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
