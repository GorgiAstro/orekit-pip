#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$FrameConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$FrameConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
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

            class ParseToken$FrameConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_849bc9e3b38b9bcb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$FrameConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$FrameConsumer(const ParseToken$FrameConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$FrameConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$FrameConsumer);

            class t_ParseToken$FrameConsumer {
            public:
              PyObject_HEAD
              ParseToken$FrameConsumer object;
              static PyObject *wrap_Object(const ParseToken$FrameConsumer&);
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
