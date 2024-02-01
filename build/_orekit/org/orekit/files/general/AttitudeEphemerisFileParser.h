#ifndef org_orekit_files_general_AttitudeEphemerisFileParser_H
#define org_orekit_files_general_AttitudeEphemerisFileParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile;
      }
    }
    namespace data {
      class DataSource;
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

        class AttitudeEphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_parse_498b7d4fef347b9b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttitudeEphemerisFileParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttitudeEphemerisFileParser(const AttitudeEphemerisFileParser& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::files::general::AttitudeEphemerisFile parse(const ::org::orekit::data::DataSource &) const;
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
        extern PyType_Def PY_TYPE_DEF(AttitudeEphemerisFileParser);
        extern PyTypeObject *PY_TYPE(AttitudeEphemerisFileParser);

        class t_AttitudeEphemerisFileParser {
        public:
          PyObject_HEAD
          AttitudeEphemerisFileParser object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AttitudeEphemerisFileParser *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AttitudeEphemerisFileParser&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AttitudeEphemerisFileParser&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
