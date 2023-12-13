#ifndef org_orekit_files_ccsds_utils_lexical_XmlTokenBuilder_H
#define org_orekit_files_ccsds_utils_lexical_XmlTokenBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class List;
  }
  namespace lang {
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

            class XmlTokenBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_buildTokens_2c588550a962bd9d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XmlTokenBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XmlTokenBuilder(const XmlTokenBuilder& obj) : ::java::lang::Object(obj) {}

              ::java::util::List buildTokens(jboolean, jboolean, const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, jint, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(XmlTokenBuilder);
            extern PyTypeObject *PY_TYPE(XmlTokenBuilder);

            class t_XmlTokenBuilder {
            public:
              PyObject_HEAD
              XmlTokenBuilder object;
              static PyObject *wrap_Object(const XmlTokenBuilder&);
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
