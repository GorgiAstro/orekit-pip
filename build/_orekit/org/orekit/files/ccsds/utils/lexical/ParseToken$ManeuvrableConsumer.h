#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$ManeuvrableConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$ManeuvrableConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Maneuvrable;
          }
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

            class ParseToken$ManeuvrableConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_62776a7b9220fcf1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$ManeuvrableConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$ManeuvrableConsumer(const ParseToken$ManeuvrableConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$ManeuvrableConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$ManeuvrableConsumer);

            class t_ParseToken$ManeuvrableConsumer {
            public:
              PyObject_HEAD
              ParseToken$ManeuvrableConsumer object;
              static PyObject *wrap_Object(const ParseToken$ManeuvrableConsumer&);
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
