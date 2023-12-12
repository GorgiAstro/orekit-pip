#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm03Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm03Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class ClockCorrection;
            class OrbitCorrection;
          }
        }
      }
    }
  }
}
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

              class SsrIgm03Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_getClockCorrection_96d5462b84e1a874,
                  mid_getGnssIod_412668abc8d889e9,
                  mid_getOrbitCorrection_58d117cad6f91792,
                  mid_setClockCorrection_cf572ee5ddb143ac,
                  mid_setGnssIod_a3da1a935cb37f7b,
                  mid_setOrbitCorrection_9a400e8af37b7414,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm03Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm03Data(const SsrIgm03Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm03Data();

                ::org::orekit::gnss::metric::messages::common::ClockCorrection getClockCorrection() const;
                jint getGnssIod() const;
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection getOrbitCorrection() const;
                void setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection &) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm03Data);
              extern PyTypeObject *PY_TYPE(SsrIgm03Data);

              class t_SsrIgm03Data {
              public:
                PyObject_HEAD
                SsrIgm03Data object;
                static PyObject *wrap_Object(const SsrIgm03Data&);
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
