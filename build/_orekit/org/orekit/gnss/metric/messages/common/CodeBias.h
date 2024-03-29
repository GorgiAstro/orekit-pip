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
                mid_init$_4320462275d66e78,
                mid_getCodeBias_9981f74b2d109da6,
                mid_getSignalID_d6ab429752e7c267,
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
