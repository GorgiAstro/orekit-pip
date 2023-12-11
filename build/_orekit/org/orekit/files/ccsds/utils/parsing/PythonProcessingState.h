#ifndef org_orekit_files_ccsds_utils_parsing_PythonProcessingState_H
#define org_orekit_files_ccsds_utils_parsing_PythonProcessingState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            class ProcessingState;
          }
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            class PythonProcessingState : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_processToken_7f6d4ab73f1deb26,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonProcessingState(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonProcessingState(const PythonProcessingState& obj) : ::java::lang::Object(obj) {}

              PythonProcessingState();

              void finalize() const;
              jboolean processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonProcessingState);
            extern PyTypeObject *PY_TYPE(PythonProcessingState);

            class t_PythonProcessingState {
            public:
              PyObject_HEAD
              PythonProcessingState object;
              static PyObject *wrap_Object(const PythonProcessingState&);
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
