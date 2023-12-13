#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$DoubleArrayConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$DoubleArrayConsumer_H

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

            class ParseToken$DoubleArrayConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_ab69da052b88f50c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$DoubleArrayConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$DoubleArrayConsumer(const ParseToken$DoubleArrayConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const JArray< jdouble > &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$DoubleArrayConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$DoubleArrayConsumer);

            class t_ParseToken$DoubleArrayConsumer {
            public:
              PyObject_HEAD
              ParseToken$DoubleArrayConsumer object;
              static PyObject *wrap_Object(const ParseToken$DoubleArrayConsumer&);
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
