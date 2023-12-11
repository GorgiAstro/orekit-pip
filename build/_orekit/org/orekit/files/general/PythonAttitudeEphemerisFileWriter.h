#ifndef org_orekit_files_general_PythonAttitudeEphemerisFileWriter_H
#define org_orekit_files_general_PythonAttitudeEphemerisFileWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Appendable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFileWriter;
        class AttitudeEphemerisFile;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonAttitudeEphemerisFileWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_write_dd179231c59f3177,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttitudeEphemerisFileWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttitudeEphemerisFileWriter(const PythonAttitudeEphemerisFileWriter& obj) : ::java::lang::Object(obj) {}

          PythonAttitudeEphemerisFileWriter();

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::AttitudeEphemerisFile &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAttitudeEphemerisFileWriter);
        extern PyTypeObject *PY_TYPE(PythonAttitudeEphemerisFileWriter);

        class t_PythonAttitudeEphemerisFileWriter {
        public:
          PyObject_HEAD
          PythonAttitudeEphemerisFileWriter object;
          static PyObject *wrap_Object(const PythonAttitudeEphemerisFileWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
