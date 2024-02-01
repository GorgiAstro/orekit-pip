#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedDoubleConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedDoubleConsumer_H

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

            class ParseToken$IndexedDoubleConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_4320462275d66e78,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IndexedDoubleConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IndexedDoubleConsumer(const ParseToken$IndexedDoubleConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint, jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IndexedDoubleConsumer);

            class t_ParseToken$IndexedDoubleConsumer {
            public:
              PyObject_HEAD
              ParseToken$IndexedDoubleConsumer object;
              static PyObject *wrap_Object(const ParseToken$IndexedDoubleConsumer&);
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
