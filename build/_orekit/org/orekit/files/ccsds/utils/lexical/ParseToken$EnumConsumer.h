#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$EnumConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$EnumConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Enum;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            class ParseToken$EnumConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_ad2697207e89116a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$EnumConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$EnumConsumer(const ParseToken$EnumConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::java::lang::Enum &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$EnumConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$EnumConsumer);

            class t_ParseToken$EnumConsumer {
            public:
              PyObject_HEAD
              ParseToken$EnumConsumer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ParseToken$EnumConsumer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ParseToken$EnumConsumer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ParseToken$EnumConsumer&, PyTypeObject *);
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
