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
        class EphemerisFileParser;
        class EphemerisFile;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_parse_c2184fda105f33cd,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
