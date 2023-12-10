#ifndef org_orekit_files_ccsds_utils_lexical_PythonXmlTokenBuilder_H
#define org_orekit_files_ccsds_utils_lexical_PythonXmlTokenBuilder_H

#include "java/lang/Object.h"

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
                mid_init$_7ae3461a92a43152,
                mid_buildTokens_9b67b2bd574b1d70,
                mid_finalize_7ae3461a92a43152,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
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
