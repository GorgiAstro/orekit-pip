#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgmHeader_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgmHeader_H

#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"

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

              class SsrIgmHeader : public ::org::orekit::gnss::metric::messages::ssr::SsrHeader {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getNumberOfSatellites_570ce0828f81a2c1,
                  mid_setNumberOfSatellites_99803b0791f320ff,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgmHeader(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgmHeader(const SsrIgmHeader& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(obj) {}

                SsrIgmHeader();

                jint getNumberOfSatellites() const;
                void setNumberOfSatellites(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgmHeader);
              extern PyTypeObject *PY_TYPE(SsrIgmHeader);

              class t_SsrIgmHeader {
              public:
                PyObject_HEAD
                SsrIgmHeader object;
                static PyObject *wrap_Object(const SsrIgmHeader&);
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
