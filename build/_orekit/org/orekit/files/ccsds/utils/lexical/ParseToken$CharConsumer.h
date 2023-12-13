#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$CharConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$CharConsumer_H

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

            class ParseToken$CharConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_df95ad02f5b4acd9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$CharConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$CharConsumer(const ParseToken$CharConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jchar) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$CharConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$CharConsumer);

            class t_ParseToken$CharConsumer {
            public:
              PyObject_HEAD
              ParseToken$CharConsumer object;
              static PyObject *wrap_Object(const ParseToken$CharConsumer&);
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
