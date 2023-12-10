#ifndef org_orekit_files_ccsds_utils_lexical_TokenType_H
#define org_orekit_files_ccsds_utils_lexical_TokenType_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class TokenType;
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

            class TokenType : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_4babde021c68952a,
                mid_values_7723d6ba8a1c6e23,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenType(const TokenType& obj) : ::java::lang::Enum(obj) {}

              static TokenType *ENTRY;
              static TokenType *RAW_LINE;
              static TokenType *START;
              static TokenType *STOP;

              static TokenType valueOf(const ::java::lang::String &);
              static JArray< TokenType > values();
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
            extern PyType_Def PY_TYPE_DEF(TokenType);
            extern PyTypeObject *PY_TYPE(TokenType);

            class t_TokenType {
            public:
              PyObject_HEAD
              TokenType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_TokenType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TokenType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TokenType&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
