#ifndef org_orekit_files_ilrs_CPFWriter_H
#define org_orekit_files_ilrs_CPFWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPFHeader;
      }
      namespace general {
        class EphemerisFileWriter;
        class EphemerisFile;
      }
    }
    namespace time {
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CPFWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cebeba69e4eb8c33,
            mid_init$_fadbe4ef40d3e215,
            mid_write_b257e3ad1002b2a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPFWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPFWriter(const CPFWriter& obj) : ::java::lang::Object(obj) {}

          CPFWriter(const ::org::orekit::files::ilrs::CPFHeader &, const ::org::orekit::time::TimeScale &);
          CPFWriter(const ::org::orekit::files::ilrs::CPFHeader &, const ::org::orekit::time::TimeScale &, jboolean);

          void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::EphemerisFile &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CPFWriter);
        extern PyTypeObject *PY_TYPE(CPFWriter);

        class t_CPFWriter {
        public:
          PyObject_HEAD
          CPFWriter object;
          static PyObject *wrap_Object(const CPFWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
