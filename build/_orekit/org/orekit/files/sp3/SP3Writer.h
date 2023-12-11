#ifndef org_orekit_files_sp3_SP3Writer_H
#define org_orekit_files_sp3_SP3Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3;
      }
    }
    namespace time {
      class TimeScales;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Writer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7db31472897430b1,
            mid_write_5e3a00a527a3c075,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Writer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Writer(const SP3Writer& obj) : ::java::lang::Object(obj) {}

          SP3Writer(const ::java::lang::Appendable &, const ::java::lang::String &, const ::org::orekit::time::TimeScales &);

          void write(const ::org::orekit::files::sp3::SP3 &) const;
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
        extern PyType_Def PY_TYPE_DEF(SP3Writer);
        extern PyTypeObject *PY_TYPE(SP3Writer);

        class t_SP3Writer {
        public:
          PyObject_HEAD
          SP3Writer object;
          static PyObject *wrap_Object(const SP3Writer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
