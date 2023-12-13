#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$LabeledDoubleConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$LabeledDoubleConsumer_H

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

            class ParseToken$LabeledDoubleConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_aff7cdf8651ba042,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$LabeledDoubleConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$LabeledDoubleConsumer(const ParseToken$LabeledDoubleConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(jchar, jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$LabeledDoubleConsumer);

            class t_ParseToken$LabeledDoubleConsumer {
            public:
              PyObject_HEAD
              ParseToken$LabeledDoubleConsumer object;
              static PyObject *wrap_Object(const ParseToken$LabeledDoubleConsumer&);
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
