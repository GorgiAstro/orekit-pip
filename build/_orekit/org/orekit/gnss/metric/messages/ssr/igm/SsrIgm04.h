#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              class SsrIgm04Header;
              class SsrIgm04Data;
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
    class Map;
  }
  namespace lang {
    class Class;
    class String;
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

              class SsrIgm04 : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage {
               public:
                enum {
                  mid_init$_29af0ca298a45f10,
                  mid_getSsrIgm04Data_6f5a75ccd8c04465,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm04(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm04(const SsrIgm04& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {}

                SsrIgm04(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header &, const ::java::util::List &);

                ::java::util::Map getSsrIgm04Data() const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm04);
              extern PyTypeObject *PY_TYPE(SsrIgm04);

              class t_SsrIgm04 {
              public:
                PyObject_HEAD
                SsrIgm04 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgm04 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgm04&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgm04&, PyTypeObject *, PyTypeObject *);
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
