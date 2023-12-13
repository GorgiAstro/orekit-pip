#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Header_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Header_H

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

              class SsrIgm01Header : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getCrsIndicator_55546ef6a647f39b,
                  mid_setCrsIndicator_44ed599e93e8a30c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm01Header(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm01Header(const SsrIgm01Header& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {}

                SsrIgm01Header();

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
              extern PyType_Def PY_TYPE_DEF(SsrIgm01Header);
              extern PyTypeObject *PY_TYPE(SsrIgm01Header);

              class t_SsrIgm01Header {
              public:
                PyObject_HEAD
                SsrIgm01Header object;
                static PyObject *wrap_Object(const SsrIgm01Header&);
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
