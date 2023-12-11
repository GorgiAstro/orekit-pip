#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$StringListConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$StringListConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken$StringListConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_4ccaedadb068bdeb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$StringListConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$StringListConsumer(const ParseToken$StringListConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::java::util::List &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$StringListConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$StringListConsumer);

            class t_ParseToken$StringListConsumer {
            public:
              PyObject_HEAD
              ParseToken$StringListConsumer object;
              static PyObject *wrap_Object(const ParseToken$StringListConsumer&);
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
