#ifndef org_orekit_files_ccsds_utils_lexical_LexicalAnalyzerSelector_H
#define org_orekit_files_ccsds_utils_lexical_LexicalAnalyzerSelector_H

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
            class LexicalAnalyzer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

            class LexicalAnalyzerSelector : public ::java::lang::Object {
             public:
              enum {
                mid_select_7d53572d5e02d65f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LexicalAnalyzerSelector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LexicalAnalyzerSelector(const LexicalAnalyzerSelector& obj) : ::java::lang::Object(obj) {}

              static ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer select(const ::org::orekit::data::DataSource &);
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
            extern PyType_Def PY_TYPE_DEF(LexicalAnalyzerSelector);
            extern PyTypeObject *PY_TYPE(LexicalAnalyzerSelector);

            class t_LexicalAnalyzerSelector {
            public:
              PyObject_HEAD
              LexicalAnalyzerSelector object;
              static PyObject *wrap_Object(const LexicalAnalyzerSelector&);
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
