#ifndef org_orekit_files_general_PythonEphemerisFileParser_H
#define org_orekit_files_general_PythonEphemerisFileParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace general {
        class EphemerisFile;
        class EphemerisFileParser;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonEphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_parse_c897b47d9e3916d0,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonEphemerisFileParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonEphemerisFileParser(const PythonEphemerisFileParser& obj) : ::java::lang::Object(obj) {}

          PythonEphemerisFileParser();

          void finalize() const;
          ::org::orekit::files::general::EphemerisFile parse(const ::org::orekit::data::DataSource &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonEphemerisFileParser);
        extern PyTypeObject *PY_TYPE(PythonEphemerisFileParser);

        class t_PythonEphemerisFileParser {
        public:
          PyObject_HEAD
          PythonEphemerisFileParser object;
          static PyObject *wrap_Object(const PythonEphemerisFileParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
