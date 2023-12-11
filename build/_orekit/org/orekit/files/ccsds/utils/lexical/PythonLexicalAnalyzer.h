#ifndef org_orekit_files_ccsds_utils_lexical_PythonLexicalAnalyzer_H
#define org_orekit_files_ccsds_utils_lexical_PythonLexicalAnalyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class LexicalAnalyzer;
            class MessageParser;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
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

            class PythonLexicalAnalyzer : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_accept_dc31073a650e82af,
                mid_finalize_0640e6acf969ed28,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonLexicalAnalyzer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonLexicalAnalyzer(const PythonLexicalAnalyzer& obj) : ::java::lang::Object(obj) {}

              PythonLexicalAnalyzer();

              ::java::lang::Object accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser &) const;
              void finalize() const;
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
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(PythonLexicalAnalyzer);
            extern PyTypeObject *PY_TYPE(PythonLexicalAnalyzer);

            class t_PythonLexicalAnalyzer {
            public:
              PyObject_HEAD
              PythonLexicalAnalyzer object;
              static PyObject *wrap_Object(const PythonLexicalAnalyzer&);
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
