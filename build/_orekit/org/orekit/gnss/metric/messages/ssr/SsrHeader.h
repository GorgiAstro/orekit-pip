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
                mid_init$_ff7cb6c242604316,
                mid_getIodSsr_d6ab429752e7c267,
                mid_getSsrEpoch1s_9981f74b2d109da6,
                mid_getSsrMultipleMessageIndicator_d6ab429752e7c267,
                mid_getSsrProviderId_d6ab429752e7c267,
                mid_getSsrSolutionId_d6ab429752e7c267,
                mid_getSsrUpdateInterval_d6ab429752e7c267,
                mid_setIodSsr_8fd427ab23829bf5,
                mid_setSsrEpoch1s_1ad26e8c8c0cd65b,
                mid_setSsrMultipleMessageIndicator_8fd427ab23829bf5,
                mid_setSsrProviderId_8fd427ab23829bf5,
                mid_setSsrSolutionId_8fd427ab23829bf5,
                mid_setSsrUpdateInterval_8fd427ab23829bf5,
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
