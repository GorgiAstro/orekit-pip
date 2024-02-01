#ifndef org_orekit_utils_units_Parser_H
#define org_orekit_utils_units_Parser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class PowerTerm;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        class Parser : public ::java::lang::Object {
         public:
          enum {
            mid_buildTermsList_7a823e7285fdf3d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Parser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Parser(const Parser& obj) : ::java::lang::Object(obj) {}

          static ::java::util::List buildTermsList(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        extern PyType_Def PY_TYPE_DEF(Parser);
        extern PyTypeObject *PY_TYPE(Parser);

        class t_Parser {
        public:
          PyObject_HEAD
          Parser object;
          static PyObject *wrap_Object(const Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
