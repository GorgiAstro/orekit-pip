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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_addPhaseBias_85312602917c68b3,
                  mid_getNumberOfBiasesProcessed_55546ef6a647f39b,
                  mid_getPhaseBias_cd2696e26f8ba219,
                  mid_getPhaseBiases_810bed48fafb0b9a,
                  mid_getYawAngle_b74f83833fdad017,
                  mid_getYawRate_b74f83833fdad017,
                  mid_setNumberOfBiasesProcessed_44ed599e93e8a30c,
                  mid_setYawAngle_8ba9fe7a847cecad,
                  mid_setYawRate_8ba9fe7a847cecad,
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
