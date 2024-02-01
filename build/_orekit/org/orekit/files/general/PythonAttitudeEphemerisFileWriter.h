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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_write_14fbf989f0a2cdb3,
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
