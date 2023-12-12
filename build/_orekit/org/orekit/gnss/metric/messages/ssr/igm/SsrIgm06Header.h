#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Header_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Header_H

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

              class SsrIgm06Header : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_isConsistencyMaintained_89b302893bdbe1f1,
                  mid_isMelbourneWubbenaConsistencyMaintained_89b302893bdbe1f1,
                  mid_setIsConsistencyMaintained_ed2afdb8506b9742,
                  mid_setIsMelbourneWubbenaConsistencyMaintained_ed2afdb8506b9742,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm06Header(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm06Header(const SsrIgm06Header& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(obj) {}

                SsrIgm06Header();

                jboolean isConsistencyMaintained() const;
                jboolean isMelbourneWubbenaConsistencyMaintained() const;
                void setIsConsistencyMaintained(jboolean) const;
                void setIsMelbourneWubbenaConsistencyMaintained(jboolean) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm06Header);
              extern PyTypeObject *PY_TYPE(SsrIgm06Header);

              class t_SsrIgm06Header {
              public:
                PyObject_HEAD
                SsrIgm06Header object;
                static PyObject *wrap_Object(const SsrIgm06Header&);
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
