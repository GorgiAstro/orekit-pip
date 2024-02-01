#ifndef org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04Data_H
#define org_orekit_gnss_metric_messages_ssr_igm_SsrIgm04Data_H

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"

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

              class SsrIgm04Data : public ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getHighRateClockCorrection_9981f74b2d109da6,
                  mid_setHighRateClockCorrection_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIgm04Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIgm04Data(const SsrIgm04Data& obj) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(obj) {}

                SsrIgm04Data();

                jdouble getHighRateClockCorrection() const;
                void setHighRateClockCorrection(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIgm04Data);
              extern PyTypeObject *PY_TYPE(SsrIgm04Data);

              class t_SsrIgm04Data {
              public:
                PyObject_HEAD
                SsrIgm04Data object;
                static PyObject *wrap_Object(const SsrIgm04Data&);
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
