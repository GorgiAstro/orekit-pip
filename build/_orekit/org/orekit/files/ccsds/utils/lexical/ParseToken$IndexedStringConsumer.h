#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedStringConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedStringConsumer_H

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

            class ParseToken$IndexedStringConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_da9d52f3cfda13c8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IndexedStringConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IndexedStringConsumer(const ParseToken$IndexedStringConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$IndexedStringConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IndexedStringConsumer);

            class t_ParseToken$IndexedStringConsumer {
            public:
              PyObject_HEAD
              ParseToken$IndexedStringConsumer object;
              static PyObject *wrap_Object(const ParseToken$IndexedStringConsumer&);
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
