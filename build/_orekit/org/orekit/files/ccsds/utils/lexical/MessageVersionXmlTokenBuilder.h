#ifndef org_orekit_files_ccsds_utils_lexical_MessageVersionXmlTokenBuilder_H
#define org_orekit_files_ccsds_utils_lexical_MessageVersionXmlTokenBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
            class XmlTokenBuilder;
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

            class MessageVersionXmlTokenBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0fa09c18fee449d5,
                mid_buildTokens_e5e9154f880f1aad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageVersionXmlTokenBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MessageVersionXmlTokenBuilder(const MessageVersionXmlTokenBuilder& obj) : ::java::lang::Object(obj) {}

              MessageVersionXmlTokenBuilder();

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
            extern PyType_Def PY_TYPE_DEF(MessageVersionXmlTokenBuilder);
            extern PyTypeObject *PY_TYPE(MessageVersionXmlTokenBuilder);

            class t_MessageVersionXmlTokenBuilder {
            public:
              PyObject_HEAD
              MessageVersionXmlTokenBuilder object;
              static PyObject *wrap_Object(const MessageVersionXmlTokenBuilder&);
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
