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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getIodSsr_55546ef6a647f39b,
                mid_getSsrEpoch1s_b74f83833fdad017,
                mid_getSsrMultipleMessageIndicator_55546ef6a647f39b,
                mid_getSsrProviderId_55546ef6a647f39b,
                mid_getSsrSolutionId_55546ef6a647f39b,
                mid_getSsrUpdateInterval_55546ef6a647f39b,
                mid_setIodSsr_44ed599e93e8a30c,
                mid_setSsrEpoch1s_8ba9fe7a847cecad,
                mid_setSsrMultipleMessageIndicator_44ed599e93e8a30c,
                mid_setSsrProviderId_44ed599e93e8a30c,
                mid_setSsrSolutionId_44ed599e93e8a30c,
                mid_setSsrUpdateInterval_44ed599e93e8a30c,
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
