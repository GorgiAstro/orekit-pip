#ifndef org_orekit_files_ccsds_utils_parsing_ErrorState_H
#define org_orekit_files_ccsds_utils_parsing_ErrorState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          namespace parsing {
            class ProcessingState;
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
          namespace parsing {

            class ErrorState : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_processToken_5949d4df22f33350,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ErrorState(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ErrorState(const ErrorState& obj) : ::java::lang::Object(obj) {}

              ErrorState();

              jboolean processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
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
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(ErrorState);
            extern PyTypeObject *PY_TYPE(ErrorState);

            class t_ErrorState {
            public:
              PyObject_HEAD
              ErrorState object;
              static PyObject *wrap_Object(const ErrorState&);
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
