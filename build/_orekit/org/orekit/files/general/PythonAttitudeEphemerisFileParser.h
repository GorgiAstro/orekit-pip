#ifndef org_orekit_files_general_PythonAttitudeEphemerisFileParser_H
#define org_orekit_files_general_PythonAttitudeEphemerisFileParser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class BufferedReader;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonAttitudeEphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_parse_498b7d4fef347b9b,
            mid_parse_BS_5814c1ff8a49014a,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
