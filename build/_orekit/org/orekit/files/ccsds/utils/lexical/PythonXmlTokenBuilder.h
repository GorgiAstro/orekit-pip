#ifndef org_orekit_files_ccsds_utils_lexical_PythonXmlTokenBuilder_H
#define org_orekit_files_ccsds_utils_lexical_PythonXmlTokenBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
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
          namespace lexical {

            class PythonXmlTokenBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_buildTokens_bb6f0a25fbefd346,
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

              explicit PythonXmlTokenBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonXmlTokenBuilder(const PythonXmlTokenBuilder& obj) : ::java::lang::Object(obj) {}

              PythonXmlTokenBuilder();

              ::java::util::List buildTokens(jboolean, jboolean, const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, jint, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonXmlTokenBuilder);
            extern PyTypeObject *PY_TYPE(PythonXmlTokenBuilder);

            class t_PythonXmlTokenBuilder {
            public:
              PyObject_HEAD
              PythonXmlTokenBuilder object;
              static PyObject *wrap_Object(const PythonXmlTokenBuilder&);
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
