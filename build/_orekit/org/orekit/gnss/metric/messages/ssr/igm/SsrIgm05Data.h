#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm05Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm05Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

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

              class SsrIgm05Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_addCodeBias_11ea247653e32ba8,
                  mid_getCodeBias_74273a2498bf7efb,
                  mid_getCodeBiases_dbcb8bbac6b35e0d,
                  mid_getNumberOfBiasesProcessed_d6ab429752e7c267,
                  mid_setNumberOfBiasesProcessed_8fd427ab23829bf5,
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
