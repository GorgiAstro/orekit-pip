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
                  mid_init$_0640e6acf969ed28,
                  mid_getCnm_8cf5267aa13a77f3,
                  mid_getHeightIonosphericLayer_557b8123390d8d0c,
                  mid_getSnm_8cf5267aa13a77f3,
                  mid_getSphericalHarmonicsDegree_412668abc8d889e9,
                  mid_getSphericalHarmonicsOrder_412668abc8d889e9,
                  mid_setCnm_edb361bfdd1ad9ae,
                  mid_setHeightIonosphericLayer_10f281d777284cea,
                  mid_setSnm_edb361bfdd1ad9ae,
                  mid_setSphericalHarmonicsDegree_a3da1a935cb37f7b,
                  mid_setSphericalHarmonicsOrder_a3da1a935cb37f7b,
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
