#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm06Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

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
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class Integer;
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
                  mid_init$_7ae3461a92a43152,
                  mid_addPhaseBias_0a16022ba7e9bf2f,
                  mid_getNumberOfBiasesProcessed_f2f64475e4580546,
                  mid_getPhaseBias_e35bfa945b1ed756,
                  mid_getPhaseBiases_d6753b7055940a54,
                  mid_getYawAngle_456d9a2f64d6b28d,
                  mid_getYawRate_456d9a2f64d6b28d,
                  mid_setNumberOfBiasesProcessed_0a2a1ac2721c0336,
                  mid_setYawAngle_77e0f9a1f260e2e5,
                  mid_setYawRate_77e0f9a1f260e2e5,
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
