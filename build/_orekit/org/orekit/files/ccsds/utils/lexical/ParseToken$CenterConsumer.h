#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$CenterConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$CenterConsumer_H

#include "java/lang/Object.h"

namespace java {
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

            class ParseToken$CenterConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_4937bc9292f008b1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$CenterConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$CenterConsumer(const ParseToken$CenterConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$CenterConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$CenterConsumer);

            class t_ParseToken$CenterConsumer {
            public:
              PyObject_HEAD
              ParseToken$CenterConsumer object;
              static PyObject *wrap_Object(const ParseToken$CenterConsumer&);
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
