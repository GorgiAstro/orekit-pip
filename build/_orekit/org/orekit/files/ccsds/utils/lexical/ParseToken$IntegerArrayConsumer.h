#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IntegerArrayConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IntegerArrayConsumer_H

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

            class ParseToken$IntegerArrayConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_d147d7ce001e2d45,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IntegerArrayConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IntegerArrayConsumer(const ParseToken$IntegerArrayConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const JArray< jint > &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$IntegerArrayConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IntegerArrayConsumer);

            class t_ParseToken$IntegerArrayConsumer {
            public:
              PyObject_HEAD
              ParseToken$IntegerArrayConsumer object;
              static PyObject *wrap_Object(const ParseToken$IntegerArrayConsumer&);
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
