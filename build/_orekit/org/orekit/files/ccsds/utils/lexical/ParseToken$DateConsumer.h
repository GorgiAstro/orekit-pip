#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$DateConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$DateConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

            class ParseToken$DateConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_600a2a61652bc473,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$DateConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$DateConsumer(const ParseToken$DateConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::orekit::time::AbsoluteDate &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$DateConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$DateConsumer);

            class t_ParseToken$DateConsumer {
            public:
              PyObject_HEAD
              ParseToken$DateConsumer object;
              static PyObject *wrap_Object(const ParseToken$DateConsumer&);
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
