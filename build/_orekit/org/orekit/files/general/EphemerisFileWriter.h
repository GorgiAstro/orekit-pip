#ifndef org_orekit_files_general_EphemerisFileWriter_H
#define org_orekit_files_general_EphemerisFileWriter_H

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
      namespace general {
        class EphemerisFile;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class EphemerisFileWriter : public ::java::lang::Object {
         public:
          enum {
            mid_write_cb06ae4b8b65b727,
            mid_write_b257e3ad1002b2a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EphemerisFileWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EphemerisFileWriter(const EphemerisFileWriter& obj) : ::java::lang::Object(obj) {}

          void write(const ::java::lang::String &, const ::org::orekit::files::general::EphemerisFile &) const;
          void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::EphemerisFile &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        extern PyType_Def PY_TYPE_DEF(EphemerisFileWriter);
        extern PyTypeObject *PY_TYPE(EphemerisFileWriter);

        class t_EphemerisFileWriter {
        public:
          PyObject_HEAD
          EphemerisFileWriter object;
          static PyObject *wrap_Object(const EphemerisFileWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
