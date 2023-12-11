#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$BooleanConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$BooleanConsumer_H

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

            class ParseToken$BooleanConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_ed2afdb8506b9742,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$BooleanConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$BooleanConsumer(const ParseToken$BooleanConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jboolean) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$BooleanConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$BooleanConsumer);

            class t_ParseToken$BooleanConsumer {
            public:
              PyObject_HEAD
              ParseToken$BooleanConsumer object;
              static PyObject *wrap_Object(const ParseToken$BooleanConsumer&);
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
