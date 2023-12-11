#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm07Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm07Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

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

              class SsrIgm07Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getSsrUra_557b8123390d8d0c,
                  mid_setSsrUra_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm07Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm07Data(const SsrIgm07Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm07Data();

                jdouble getSsrUra() const;
                void setSsrUra(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm07Data);
              extern PyTypeObject *PY_TYPE(SsrIgm07Data);

              class t_SsrIgm07Data {
              public:
                PyObject_HEAD
                SsrIgm07Data object;
                static PyObject *wrap_Object(const SsrIgm07Data&);
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
