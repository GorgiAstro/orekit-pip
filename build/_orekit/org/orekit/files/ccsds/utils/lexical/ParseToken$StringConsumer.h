#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$StringConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$StringConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
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

            class ParseToken$StringConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_e939c6558ae8d313,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$StringConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$StringConsumer(const ParseToken$StringConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$StringConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$StringConsumer);

            class t_ParseToken$StringConsumer {
            public:
              PyObject_HEAD
              ParseToken$StringConsumer object;
              static PyObject *wrap_Object(const ParseToken$StringConsumer&);
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
