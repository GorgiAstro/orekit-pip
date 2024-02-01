#ifndef org_orekit_files_ccsds_utils_lexical_PythonLexicalAnalyzer_H
#define org_orekit_files_ccsds_utils_lexical_PythonLexicalAnalyzer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class MessageParser;
            class LexicalAnalyzer;
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
          namespace lexical {

            class PythonLexicalAnalyzer : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_accept_b478c9bff3268dbb,
                mid_finalize_ff7cb6c242604316,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
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
