#ifndef org_orekit_files_general_PythonEphemerisFileParser_H
#define org_orekit_files_general_PythonEphemerisFileParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile;
        class EphemerisFileParser;
      }
    }
    namespace data {
      class DataSource;
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_parse_6c877fbfda00edef,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
