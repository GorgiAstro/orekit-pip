#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm03Header_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm03Header_H

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

              class SsrIgm03Header : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getCrsIndicator_412668abc8d889e9,
                  mid_setCrsIndicator_a3da1a935cb37f7b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm03Header(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm03Header(const SsrIgm03Header& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {}

                SsrIgm03Header();

                jint getCrsIndicator() const;
                void setCrsIndicator(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm03Header);
              extern PyTypeObject *PY_TYPE(SsrIgm03Header);

              class t_SsrIgm03Header {
              public:
                PyObject_HEAD
                SsrIgm03Header object;
                static PyObject *wrap_Object(const SsrIgm03Header&);
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
