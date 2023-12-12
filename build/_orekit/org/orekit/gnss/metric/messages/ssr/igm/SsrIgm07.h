#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm07_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm07_H

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
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              class SsrIgm07Header;
              class SsrIgm07Data;
            }
          }
        }
      }
      class SatelliteSystem;
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

              class SsrIgm07 : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage {
               public:
                enum {
                  mid_init$_88bc970f6a867404,
                  mid_getSsrIgm07Data_1e62c2f73fbdd1c4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm07(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm07(const SsrIgm07& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {}

                SsrIgm07(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header &, const ::java::util::List &);

                ::java::util::Map getSsrIgm07Data() const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm07);
              extern PyTypeObject *PY_TYPE(SsrIgm07);

              class t_SsrIgm07 {
              public:
                PyObject_HEAD
                SsrIgm07 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgm07 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgm07&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgm07&, PyTypeObject *, PyTypeObject *);
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
