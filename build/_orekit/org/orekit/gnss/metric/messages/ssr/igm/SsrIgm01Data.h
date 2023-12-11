#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class OrbitCorrection;
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

              class SsrIgm01Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getGnssIod_412668abc8d889e9,
                  mid_getOrbitCorrection_58d117cad6f91792,
                  mid_setGnssIod_a3da1a935cb37f7b,
                  mid_setOrbitCorrection_9a400e8af37b7414,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm01Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm01Data(const SsrIgm01Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm01Data();

                jint getGnssIod() const;
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection getOrbitCorrection() const;
                void setGnssIod(jint) const;
                void setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection &) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm01Data);
              extern PyTypeObject *PY_TYPE(SsrIgm01Data);

              class t_SsrIgm01Data {
              public:
                PyObject_HEAD
                SsrIgm01Data object;
                static PyObject *wrap_Object(const SsrIgm01Data&);
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
