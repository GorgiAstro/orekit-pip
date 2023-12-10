#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IntConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IntConsumer_H

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

            class ParseToken$IntConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_0a2a1ac2721c0336,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IntConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IntConsumer(const ParseToken$IntConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$IntConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IntConsumer);

            class t_ParseToken$IntConsumer {
            public:
              PyObject_HEAD
              ParseToken$IntConsumer object;
              static PyObject *wrap_Object(const ParseToken$IntConsumer&);
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
