#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$CenterListConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$CenterListConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken$CenterListConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_de3e021e7266b71e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$CenterListConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$CenterListConsumer(const ParseToken$CenterListConsumer& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(ParseToken$CenterListConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$CenterListConsumer);

            class t_ParseToken$CenterListConsumer {
            public:
              PyObject_HEAD
              ParseToken$CenterListConsumer object;
              static PyObject *wrap_Object(const ParseToken$CenterListConsumer&);
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
