#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedDoubleArrayConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$IndexedDoubleArrayConsumer_H

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

            class ParseToken$IndexedDoubleArrayConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_3246bd31f432242d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$IndexedDoubleArrayConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$IndexedDoubleArrayConsumer(const ParseToken$IndexedDoubleArrayConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint, const JArray< jdouble > &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$IndexedDoubleArrayConsumer);

            class t_ParseToken$IndexedDoubleArrayConsumer {
            public:
              PyObject_HEAD
              ParseToken$IndexedDoubleArrayConsumer object;
              static PyObject *wrap_Object(const ParseToken$IndexedDoubleArrayConsumer&);
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
