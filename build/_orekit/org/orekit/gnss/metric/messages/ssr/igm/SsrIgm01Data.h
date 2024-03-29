#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm01Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

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

              class SsrIgm01Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getGnssIod_d6ab429752e7c267,
                  mid_getOrbitCorrection_a878e7837a73c516,
                  mid_setGnssIod_8fd427ab23829bf5,
                  mid_setOrbitCorrection_cdebebf3a62a7ec1,
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
