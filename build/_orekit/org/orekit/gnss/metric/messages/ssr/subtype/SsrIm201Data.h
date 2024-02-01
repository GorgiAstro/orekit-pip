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
                  mid_init$_ff7cb6c242604316,
                  mid_getCnm_eda3f19b8225f78f,
                  mid_getHeightIonosphericLayer_9981f74b2d109da6,
                  mid_getSnm_eda3f19b8225f78f,
                  mid_getSphericalHarmonicsDegree_d6ab429752e7c267,
                  mid_getSphericalHarmonicsOrder_d6ab429752e7c267,
                  mid_setCnm_11ecdbb5af7ed67d,
                  mid_setHeightIonosphericLayer_1ad26e8c8c0cd65b,
                  mid_setSnm_11ecdbb5af7ed67d,
                  mid_setSphericalHarmonicsDegree_8fd427ab23829bf5,
                  mid_setSphericalHarmonicsOrder_8fd427ab23829bf5,
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
