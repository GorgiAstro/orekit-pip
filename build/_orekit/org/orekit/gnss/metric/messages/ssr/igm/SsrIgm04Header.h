#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04Header_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04Header_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"

namespace java {
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

              class SsrIgm04Header : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm04Header(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm04Header(const SsrIgm04Header& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {}

                SsrIgm04Header();
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm04Header);
              extern PyTypeObject *PY_TYPE(SsrIgm04Header);

              class t_SsrIgm04Header {
              public:
                PyObject_HEAD
                SsrIgm04Header object;
                static PyObject *wrap_Object(const SsrIgm04Header&);
                static PyObject *wrap_jobject(const jobject&);
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
