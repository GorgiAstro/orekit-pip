#ifndef org_orekit_files_general_PythonEphemerisFileWriter_H
#define org_orekit_files_general_PythonEphemerisFileWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Appendable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFileWriter;
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

        class PythonEphemerisFileWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_write_cb06ae4b8b65b727,
            mid_write_b257e3ad1002b2a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEphemerisFileWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEphemerisFileWriter(const PythonEphemerisFileWriter& obj) : ::java::lang::Object(obj) {}

          PythonEphemerisFileWriter();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonEphemerisFileWriter);
        extern PyTypeObject *PY_TYPE(PythonEphemerisFileWriter);

        class t_PythonEphemerisFileWriter {
        public:
          PyObject_HEAD
          PythonEphemerisFileWriter object;
          static PyObject *wrap_Object(const PythonEphemerisFileWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
