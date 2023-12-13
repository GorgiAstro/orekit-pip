#ifndef org_orekit_files_ccsds_utils_lexical_XmlLexicalAnalyzer_H
#define org_orekit_files_ccsds_utils_lexical_XmlLexicalAnalyzer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
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

            class XmlLexicalAnalyzer : public ::java::lang::Object {
             public:
              enum {
                mid_init$_4345325324782fee,
                mid_accept_315581e8824888b8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XmlLexicalAnalyzer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XmlLexicalAnalyzer(const XmlLexicalAnalyzer& obj) : ::java::lang::Object(obj) {}

              XmlLexicalAnalyzer(const ::org::orekit::data::DataSource &);

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
            extern PyType_Def PY_TYPE_DEF(XmlLexicalAnalyzer);
            extern PyTypeObject *PY_TYPE(XmlLexicalAnalyzer);

            class t_XmlLexicalAnalyzer {
            public:
              PyObject_HEAD
              XmlLexicalAnalyzer object;
              static PyObject *wrap_Object(const XmlLexicalAnalyzer&);
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
