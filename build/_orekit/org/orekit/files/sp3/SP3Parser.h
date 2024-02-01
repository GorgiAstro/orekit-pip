#ifndef org_orekit_files_sp3_SP3Parser_H
#define org_orekit_files_sp3_SP3Parser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3;
      }
      namespace general {
        class EphemerisFileParser;
      }
    }
    namespace data {
      class DataSource;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Parser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_parse_57bf1e8926783af6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Parser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Parser(const SP3Parser& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *SP3_FRAME_CENTER_STRING;

          SP3Parser();

          ::org::orekit::files::sp3::SP3 parse(const ::org::orekit::data::DataSource &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Parser);
        extern PyTypeObject *PY_TYPE(SP3Parser);

        class t_SP3Parser {
        public:
          PyObject_HEAD
          SP3Parser object;
          static PyObject *wrap_Object(const SP3Parser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
