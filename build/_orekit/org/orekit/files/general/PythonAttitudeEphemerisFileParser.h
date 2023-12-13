#ifndef org_orekit_files_general_PythonAttitudeEphemerisFileParser_H
#define org_orekit_files_general_PythonAttitudeEphemerisFileParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFileParser;
        class AttitudeEphemerisFile;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class BufferedReader;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonAttitudeEphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_parse_61d485826e6f03b7,
            mid_parse_BS_db082c9a970065cf,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttitudeEphemerisFileParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttitudeEphemerisFileParser(const PythonAttitudeEphemerisFileParser& obj) : ::java::lang::Object(obj) {}

          PythonAttitudeEphemerisFileParser();

          void finalize() const;
          ::org::orekit::files::general::AttitudeEphemerisFile parse(const ::org::orekit::data::DataSource &) const;
          ::org::orekit::files::general::AttitudeEphemerisFile parse_BS(const ::java::io::BufferedReader &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAttitudeEphemerisFileParser);
        extern PyTypeObject *PY_TYPE(PythonAttitudeEphemerisFileParser);

        class t_PythonAttitudeEphemerisFileParser {
        public:
          PyObject_HEAD
          PythonAttitudeEphemerisFileParser object;
          static PyObject *wrap_Object(const PythonAttitudeEphemerisFileParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
