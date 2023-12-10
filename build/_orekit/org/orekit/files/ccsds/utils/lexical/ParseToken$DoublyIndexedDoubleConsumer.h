#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$DoublyIndexedDoubleConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$DoublyIndexedDoubleConsumer_H

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

            class ParseToken$DoublyIndexedDoubleConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_78e41e7b5124a628,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$DoublyIndexedDoubleConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$DoublyIndexedDoubleConsumer(const ParseToken$DoublyIndexedDoubleConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jint, jint, jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer);

            class t_ParseToken$DoublyIndexedDoubleConsumer {
            public:
              PyObject_HEAD
              ParseToken$DoublyIndexedDoubleConsumer object;
              static PyObject *wrap_Object(const ParseToken$DoublyIndexedDoubleConsumer&);
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
