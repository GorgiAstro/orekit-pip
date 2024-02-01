#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01_H

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
              class SsrIgm01Header;
              class SsrIgm01Data;
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

              class SsrIgm01 : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage {
               public:
                enum {
                  mid_init$_4ffdd930f08ed76f,
                  mid_getSsrIgm01Data_dbcb8bbac6b35e0d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm01(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm01(const SsrIgm01& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {}

                SsrIgm01(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header &, const ::java::util::List &);

                ::java::util::Map getSsrIgm01Data() const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm01);
              extern PyTypeObject *PY_TYPE(SsrIgm01);

              class t_SsrIgm01 {
              public:
                PyObject_HEAD
                SsrIgm01 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgm01 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgm01&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgm01&, PyTypeObject *, PyTypeObject *);
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
