#ifndef org_orekit_gnss_metric_messages_ssr_SsrHeader_H
#define org_orekit_gnss_metric_messages_ssr_SsrHeader_H

#include "java/lang/Object.h"

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

            class SsrHeader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getIodSsr_f2f64475e4580546,
                mid_getSsrEpoch1s_456d9a2f64d6b28d,
                mid_getSsrMultipleMessageIndicator_f2f64475e4580546,
                mid_getSsrProviderId_f2f64475e4580546,
                mid_getSsrSolutionId_f2f64475e4580546,
                mid_getSsrUpdateInterval_f2f64475e4580546,
                mid_setIodSsr_0a2a1ac2721c0336,
                mid_setSsrEpoch1s_77e0f9a1f260e2e5,
                mid_setSsrMultipleMessageIndicator_0a2a1ac2721c0336,
                mid_setSsrProviderId_0a2a1ac2721c0336,
                mid_setSsrSolutionId_0a2a1ac2721c0336,
                mid_setSsrUpdateInterval_0a2a1ac2721c0336,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SsrHeader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SsrHeader(const SsrHeader& obj) : ::java::lang::Object(obj) {}

              SsrHeader();

              jint getIodSsr() const;
              jdouble getSsrEpoch1s() const;
              jint getSsrMultipleMessageIndicator() const;
              jint getSsrProviderId() const;
              jint getSsrSolutionId() const;
              jint getSsrUpdateInterval() const;
              void setIodSsr(jint) const;
              void setSsrEpoch1s(jdouble) const;
              void setSsrMultipleMessageIndicator(jint) const;
              void setSsrProviderId(jint) const;
              void setSsrSolutionId(jint) const;
              void setSsrUpdateInterval(jint) const;
            };
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
            extern PyType_Def PY_TYPE_DEF(SsrHeader);
            extern PyTypeObject *PY_TYPE(SsrHeader);

            class t_SsrHeader {
            public:
              PyObject_HEAD
              SsrHeader object;
              static PyObject *wrap_Object(const SsrHeader&);
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

#endif
