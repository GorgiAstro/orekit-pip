#ifndef org_orekit_gnss_metric_messages_common_CodeBias_H
#define org_orekit_gnss_metric_messages_common_CodeBias_H

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
          namespace common {

            class CodeBias : public ::java::lang::Object {
             public:
              enum {
                mid_init$_d5322b8b512aeb26,
                mid_getCodeBias_b74f83833fdad017,
                mid_getSignalID_55546ef6a647f39b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CodeBias(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CodeBias(const CodeBias& obj) : ::java::lang::Object(obj) {}

              CodeBias(jint, jdouble);

              jdouble getCodeBias() const;
              jint getSignalID() const;
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
          namespace common {
            extern PyType_Def PY_TYPE_DEF(CodeBias);
            extern PyTypeObject *PY_TYPE(CodeBias);

            class t_CodeBias {
            public:
              PyObject_HEAD
              CodeBias object;
              static PyObject *wrap_Object(const CodeBias&);
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
