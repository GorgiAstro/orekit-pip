#ifndef org_orekit_files_ccsds_utils_parsing_ProcessingState_H
#define org_orekit_files_ccsds_utils_parsing_ProcessingState_H

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
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
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
          namespace parsing {

            class ProcessingState : public ::java::lang::Object {
             public:
              enum {
                mid_processToken_aa256c47fb7b26f1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ProcessingState(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ProcessingState(const ProcessingState& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(ProcessingState);
            extern PyTypeObject *PY_TYPE(ProcessingState);

            class t_ProcessingState {
            public:
              PyObject_HEAD
              ProcessingState object;
              static PyObject *wrap_Object(const ProcessingState&);
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
