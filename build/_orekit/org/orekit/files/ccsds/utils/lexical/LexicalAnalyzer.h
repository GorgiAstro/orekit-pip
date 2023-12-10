#ifndef org_orekit_files_ccsds_utils_lexical_LexicalAnalyzer_H
#define org_orekit_files_ccsds_utils_lexical_LexicalAnalyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class MessageParser;
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

            class LexicalAnalyzer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_94f8bc3acabdf0ba,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LexicalAnalyzer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LexicalAnalyzer(const LexicalAnalyzer& obj) : ::java::lang::Object(obj) {}

              ::java::lang::Object accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser &) const;
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
            extern PyType_Def PY_TYPE_DEF(LexicalAnalyzer);
            extern PyTypeObject *PY_TYPE(LexicalAnalyzer);

            class t_LexicalAnalyzer {
            public:
              PyObject_HEAD
              LexicalAnalyzer object;
              static PyObject *wrap_Object(const LexicalAnalyzer&);
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
