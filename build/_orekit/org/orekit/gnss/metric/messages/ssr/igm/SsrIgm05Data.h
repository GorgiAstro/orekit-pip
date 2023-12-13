#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm05Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm05Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            class CodeBias;
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

              class SsrIgm05Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_addCodeBias_60ac0826d948b529,
                  mid_getCodeBias_aad40fde1ab180ca,
                  mid_getCodeBiases_810bed48fafb0b9a,
                  mid_getNumberOfBiasesProcessed_55546ef6a647f39b,
                  mid_setNumberOfBiasesProcessed_44ed599e93e8a30c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm05Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm05Data(const SsrIgm05Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm05Data();

                void addCodeBias(const ::org::orekit::gnss::metric::messages::common::CodeBias &) const;
                ::org::orekit::gnss::metric::messages::common::CodeBias getCodeBias(jint) const;
                ::java::util::Map getCodeBiases() const;
                jint getNumberOfBiasesProcessed() const;
                void setNumberOfBiasesProcessed(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm05Data);
              extern PyTypeObject *PY_TYPE(SsrIgm05Data);

              class t_SsrIgm05Data {
              public:
                PyObject_HEAD
                SsrIgm05Data object;
                static PyObject *wrap_Object(const SsrIgm05Data&);
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
