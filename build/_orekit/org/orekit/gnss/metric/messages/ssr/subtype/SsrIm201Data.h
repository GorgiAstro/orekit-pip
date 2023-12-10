#ifndef org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201Data_H
#define org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201Data_H

#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"

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

              class SsrIm201Data : public ::org::orekit::gnss::metric::messages::ssr::SsrData {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getCnm_43de1192439efa92,
                  mid_getHeightIonosphericLayer_456d9a2f64d6b28d,
                  mid_getSnm_43de1192439efa92,
                  mid_getSphericalHarmonicsDegree_f2f64475e4580546,
                  mid_getSphericalHarmonicsOrder_f2f64475e4580546,
                  mid_setCnm_d660c7a97bf55272,
                  mid_setHeightIonosphericLayer_77e0f9a1f260e2e5,
                  mid_setSnm_d660c7a97bf55272,
                  mid_setSphericalHarmonicsDegree_0a2a1ac2721c0336,
                  mid_setSphericalHarmonicsOrder_0a2a1ac2721c0336,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIm201Data(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrData(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIm201Data(const SsrIm201Data& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrData(obj) {}

                SsrIm201Data();

                JArray< JArray< jdouble > > getCnm() const;
                jdouble getHeightIonosphericLayer() const;
                JArray< JArray< jdouble > > getSnm() const;
                jint getSphericalHarmonicsDegree() const;
                jint getSphericalHarmonicsOrder() const;
                void setCnm(const JArray< JArray< jdouble > > &) const;
                void setHeightIonosphericLayer(jdouble) const;
                void setSnm(const JArray< JArray< jdouble > > &) const;
                void setSphericalHarmonicsDegree(jint) const;
                void setSphericalHarmonicsOrder(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(SsrIm201Data);
              extern PyTypeObject *PY_TYPE(SsrIm201Data);

              class t_SsrIm201Data {
              public:
                PyObject_HEAD
                SsrIm201Data object;
                static PyObject *wrap_Object(const SsrIm201Data&);
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
