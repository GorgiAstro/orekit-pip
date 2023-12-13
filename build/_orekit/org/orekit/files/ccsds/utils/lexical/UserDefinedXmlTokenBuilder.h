#ifndef org_orekit_files_ccsds_utils_lexical_UserDefinedXmlTokenBuilder_H
#define org_orekit_files_ccsds_utils_lexical_UserDefinedXmlTokenBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
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

            class UserDefinedXmlTokenBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_buildTokens_2c588550a962bd9d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDefinedXmlTokenBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDefinedXmlTokenBuilder(const UserDefinedXmlTokenBuilder& obj) : ::java::lang::Object(obj) {}

              UserDefinedXmlTokenBuilder();

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
            extern PyType_Def PY_TYPE_DEF(UserDefinedXmlTokenBuilder);
            extern PyTypeObject *PY_TYPE(UserDefinedXmlTokenBuilder);

            class t_UserDefinedXmlTokenBuilder {
            public:
              PyObject_HEAD
              UserDefinedXmlTokenBuilder object;
              static PyObject *wrap_Object(const UserDefinedXmlTokenBuilder&);
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
