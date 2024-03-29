#ifndef org_orekit_files_general_PythonAttitudeEphemerisFile_H
#define org_orekit_files_general_PythonAttitudeEphemerisFile_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
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

        class PythonAttitudeEphemerisFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getSatellites_dbcb8bbac6b35e0d,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttitudeEphemerisFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttitudeEphemerisFile(const PythonAttitudeEphemerisFile& obj) : ::java::lang::Object(obj) {}

          PythonAttitudeEphemerisFile();

          void finalize() const;
          ::java::util::Map getSatellites() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAttitudeEphemerisFile);
        extern PyTypeObject *PY_TYPE(PythonAttitudeEphemerisFile);

        class t_PythonAttitudeEphemerisFile {
        public:
          PyObject_HEAD
          PythonAttitudeEphemerisFile object;
          static PyObject *wrap_Object(const PythonAttitudeEphemerisFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
