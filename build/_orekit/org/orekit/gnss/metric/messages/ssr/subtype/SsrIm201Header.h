#ifndef org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201Header_H
#define org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201Header_H

#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"

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
            namespace subtype {

              class SsrIm201Header : public ::org::orekit::gnss::metric::messages::ssr::SsrHeader {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getNumberOfIonosphericLayers_570ce0828f81a2c1,
                  mid_getVtecQualityIndicator_dff5885c2c873297,
                  mid_setNumberOfIonosphericLayers_99803b0791f320ff,
                  mid_setVtecQualityIndicator_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIm201Header(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIm201Header(const SsrIm201Header& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(obj) {}

                SsrIm201Header();

                jint getNumberOfIonosphericLayers() const;
                jdouble getVtecQualityIndicator() const;
                void setNumberOfIonosphericLayers(jint) const;
                void setVtecQualityIndicator(jdouble) const;
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
            namespace subtype {
              extern PyType_Def PY_TYPE_DEF(SsrIm201Header);
              extern PyTypeObject *PY_TYPE(SsrIm201Header);

              class t_SsrIm201Header {
              public:
                PyObject_HEAD
                SsrIm201Header object;
                static PyObject *wrap_Object(const SsrIm201Header&);
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
