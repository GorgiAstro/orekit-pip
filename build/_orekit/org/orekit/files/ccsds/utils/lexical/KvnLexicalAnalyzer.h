#ifndef org_orekit_files_ccsds_utils_lexical_KvnLexicalAnalyzer_H
#define org_orekit_files_ccsds_utils_lexical_KvnLexicalAnalyzer_H

#include "java/lang/Object.h"

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
    namespace data {
      class DataSource;
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

            class KvnLexicalAnalyzer : public ::java::lang::Object {
             public:
              enum {
                mid_init$_178426610ec237d4,
                mid_accept_b8fbb626a8a68048,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KvnLexicalAnalyzer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KvnLexicalAnalyzer(const KvnLexicalAnalyzer& obj) : ::java::lang::Object(obj) {}

              KvnLexicalAnalyzer(const ::org::orekit::data::DataSource &);

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
            extern PyType_Def PY_TYPE_DEF(KvnLexicalAnalyzer);
            extern PyTypeObject *PY_TYPE(KvnLexicalAnalyzer);

            class t_KvnLexicalAnalyzer {
            public:
              PyObject_HEAD
              KvnLexicalAnalyzer object;
              static PyObject *wrap_Object(const KvnLexicalAnalyzer&);
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
