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
                  mid_init$_ff7cb6c242604316,
                  mid_addPhaseBias_a74a5094b1655efa,
                  mid_getNumberOfBiasesProcessed_d6ab429752e7c267,
                  mid_getPhaseBias_c805432fe36e034e,
                  mid_getPhaseBiases_dbcb8bbac6b35e0d,
                  mid_getYawAngle_9981f74b2d109da6,
                  mid_getYawRate_9981f74b2d109da6,
                  mid_setNumberOfBiasesProcessed_8fd427ab23829bf5,
                  mid_setYawAngle_1ad26e8c8c0cd65b,
                  mid_setYawRate_1ad26e8c8c0cd65b,
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
