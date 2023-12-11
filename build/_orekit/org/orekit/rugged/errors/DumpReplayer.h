#ifndef org_orekit_rugged_errors_DumpReplayer_H
#define org_orekit_rugged_errors_DumpReplayer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class Rugged;
      }
      namespace errors {
        class DumpReplayer$Result;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class File;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class DumpReplayer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_createRugged_f145c77b35875136,
            mid_execute_ea85ae1307587c4c,
            mid_parse_5d6bcca91ae998ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DumpReplayer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DumpReplayer(const DumpReplayer& obj) : ::java::lang::Object(obj) {}

          DumpReplayer();

          ::org::orekit::rugged::api::Rugged createRugged() const;
          JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > execute(const ::org::orekit::rugged::api::Rugged &) const;
          void parse(const ::java::io::File &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        extern PyType_Def PY_TYPE_DEF(DumpReplayer);
        extern PyTypeObject *PY_TYPE(DumpReplayer);

        class t_DumpReplayer {
        public:
          PyObject_HEAD
          DumpReplayer object;
          static PyObject *wrap_Object(const DumpReplayer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
