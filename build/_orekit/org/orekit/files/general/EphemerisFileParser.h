#ifndef org_orekit_files_general_EphemerisFileParser_H
#define org_orekit_files_general_EphemerisFileParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace general {
        class EphemerisFile;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class EphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_parse_08d07e742af2bd58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EphemerisFileParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EphemerisFileParser(const EphemerisFileParser& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::files::general::EphemerisFile parse(const ::org::orekit::data::DataSource &) const;
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
        extern PyType_Def PY_TYPE_DEF(EphemerisFileParser);
        extern PyTypeObject *PY_TYPE(EphemerisFileParser);

        class t_EphemerisFileParser {
        public:
          PyObject_HEAD
          EphemerisFileParser object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EphemerisFileParser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EphemerisFileParser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EphemerisFileParser&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
