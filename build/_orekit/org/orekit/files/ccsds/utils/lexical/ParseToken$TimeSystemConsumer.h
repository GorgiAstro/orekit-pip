#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$TimeSystemConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$TimeSystemConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeSystem;
        }
      }
    }
  }
}
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

            class ParseToken$TimeSystemConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_3dd15fb182523a58,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$TimeSystemConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$TimeSystemConsumer(const ParseToken$TimeSystemConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::orekit::files::ccsds::definitions::TimeSystem &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$TimeSystemConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$TimeSystemConsumer);

            class t_ParseToken$TimeSystemConsumer {
            public:
              PyObject_HEAD
              ParseToken$TimeSystemConsumer object;
              static PyObject *wrap_Object(const ParseToken$TimeSystemConsumer&);
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
