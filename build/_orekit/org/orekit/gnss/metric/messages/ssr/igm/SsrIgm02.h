#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm02_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm02_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              class SsrIgm02Header;
              class SsrIgm02Data;
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
          namespace ssr {
            namespace igm {

              class SsrIgm02 : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage {
               public:
                enum {
                  mid_init$_d008f0618d420855,
                  mid_getSsrIgm02Data_dbcb8bbac6b35e0d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm02(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm02(const SsrIgm02& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {}

                SsrIgm02(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header &, const ::java::util::List &);

                ::java::util::Map getSsrIgm02Data() const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm02);
              extern PyTypeObject *PY_TYPE(SsrIgm02);

              class t_SsrIgm02 {
              public:
                PyObject_HEAD
                SsrIgm02 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgm02 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgm02&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgm02&, PyTypeObject *, PyTypeObject *);
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
