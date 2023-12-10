#ifndef org_orekit_files_general_AttitudeEphemerisFileWriter_H
#define org_orekit_files_general_AttitudeEphemerisFileWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
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

        class AttitudeEphemerisFileWriter : public ::java::lang::Object {
         public:
          enum {
            mid_write_e98d61264941bf32,
            mid_write_3e82c67d69401a38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttitudeEphemerisFileWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttitudeEphemerisFileWriter(const AttitudeEphemerisFileWriter& obj) : ::java::lang::Object(obj) {}

          void write(const ::java::lang::String &, const ::org::orekit::files::general::AttitudeEphemerisFile &) const;
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
        extern PyType_Def PY_TYPE_DEF(AttitudeEphemerisFileWriter);
        extern PyTypeObject *PY_TYPE(AttitudeEphemerisFileWriter);

        class t_AttitudeEphemerisFileWriter {
        public:
          PyObject_HEAD
          AttitudeEphemerisFileWriter object;
          static PyObject *wrap_Object(const AttitudeEphemerisFileWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
