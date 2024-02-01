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
                  mid_init$_ff7cb6c242604316,
                  mid_getNumberOfIonosphericLayers_d6ab429752e7c267,
                  mid_getVtecQualityIndicator_9981f74b2d109da6,
                  mid_setNumberOfIonosphericLayers_8fd427ab23829bf5,
                  mid_setVtecQualityIndicator_1ad26e8c8c0cd65b,
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
