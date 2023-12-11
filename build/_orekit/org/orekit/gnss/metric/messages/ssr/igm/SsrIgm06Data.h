#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class Integer;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class PhaseBias;
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

              class SsrIgm06Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_0640e6acf969ed28,
                  mid_addPhaseBias_6aaab491eca22f6c,
                  mid_getNumberOfBiasesProcessed_412668abc8d889e9,
                  mid_getPhaseBias_7cfe504a3d90d1f0,
                  mid_getPhaseBiases_1e62c2f73fbdd1c4,
                  mid_getYawAngle_557b8123390d8d0c,
                  mid_getYawRate_557b8123390d8d0c,
                  mid_setNumberOfBiasesProcessed_a3da1a935cb37f7b,
                  mid_setYawAngle_10f281d777284cea,
                  mid_setYawRate_10f281d777284cea,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm06Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm06Data(const SsrIgm06Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm06Data();

                void addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias &) const;
                jint getNumberOfBiasesProcessed() const;
                ::org::orekit::gnss::metric::messages::common::PhaseBias getPhaseBias(jint) const;
                ::java::util::Map getPhaseBiases() const;
                jdouble getYawAngle() const;
                jdouble getYawRate() const;
                void setNumberOfBiasesProcessed(jint) const;
                void setYawAngle(jdouble) const;
                void setYawRate(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm06Data);
              extern PyTypeObject *PY_TYPE(SsrIgm06Data);

              class t_SsrIgm06Data {
              public:
                PyObject_HEAD
                SsrIgm06Data object;
                static PyObject *wrap_Object(const SsrIgm06Data&);
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
