#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06_H

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
              class SsrIgm06Header;
              class SsrIgm06Data;
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

              class SsrIgm06 : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage {
               public:
                enum {
                  mid_init$_be132917c655f519,
                  mid_getSsrIgm06Data_6f5a75ccd8c04465,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm06(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm06(const SsrIgm06& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(obj) {}

                SsrIgm06(jint, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header &, const ::java::util::List &);

                ::java::util::Map getSsrIgm06Data() const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm06);
              extern PyTypeObject *PY_TYPE(SsrIgm06);

              class t_SsrIgm06 {
              public:
                PyObject_HEAD
                SsrIgm06 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIgm06 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIgm06&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIgm06&, PyTypeObject *, PyTypeObject *);
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
