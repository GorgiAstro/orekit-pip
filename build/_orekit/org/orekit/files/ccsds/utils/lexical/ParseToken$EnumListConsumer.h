#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$EnumListConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$EnumListConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
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

            class ParseToken$EnumListConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_65de9727799c5641,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$EnumListConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$EnumListConsumer(const ParseToken$EnumListConsumer& obj) : ::java::lang::Object(obj) {}

              void accept(const ::java::util::List &) const;
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
            extern PyType_Def PY_TYPE_DEF(ParseToken$EnumListConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$EnumListConsumer);

            class t_ParseToken$EnumListConsumer {
            public:
              PyObject_HEAD
              ParseToken$EnumListConsumer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ParseToken$EnumListConsumer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ParseToken$EnumListConsumer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ParseToken$EnumListConsumer&, PyTypeObject *);
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
