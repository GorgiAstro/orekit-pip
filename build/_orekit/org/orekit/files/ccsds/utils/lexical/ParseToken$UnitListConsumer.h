#ifndef org_orekit_files_ccsds_utils_lexical_ParseToken$UnitListConsumer_H
#define org_orekit_files_ccsds_utils_lexical_ParseToken$UnitListConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
  }
}
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

            class ParseToken$UnitListConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_accept_aa335fea495d60e0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ParseToken$UnitListConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ParseToken$UnitListConsumer(const ParseToken$UnitListConsumer& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(ParseToken$UnitListConsumer);
            extern PyTypeObject *PY_TYPE(ParseToken$UnitListConsumer);

            class t_ParseToken$UnitListConsumer {
            public:
              PyObject_HEAD
              ParseToken$UnitListConsumer object;
              static PyObject *wrap_Object(const ParseToken$UnitListConsumer&);
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
