#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$DoubleConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$DoubleConsumer_H

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

            class ParseToken$DoubleConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$DoubleConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$DoubleConsumer(const ParseToken$DoubleConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$DoubleConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$DoubleConsumer);

            class t_ParseToken$DoubleConsumer {
            public:
              PyObject_HEAD
              ParseToken$DoubleConsumer object;
              static PyObject *wrap_Object(const ParseToken$DoubleConsumer&);
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
