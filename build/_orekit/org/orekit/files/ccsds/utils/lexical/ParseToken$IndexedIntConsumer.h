#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedIntConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedIntConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken$IndexedIntConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_a84c9a223722150c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IndexedIntConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IndexedIntConsumer(const ParseToken$IndexedIntConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint, jint) const;
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(ParseToken$IndexedIntConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IndexedIntConsumer);

            class t_ParseToken$IndexedIntConsumer {
            public:
              PyObject_HEAD
              ParseToken$IndexedIntConsumer object;
              static PyObject *wrap_Object(const ParseToken$IndexedIntConsumer&);
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
