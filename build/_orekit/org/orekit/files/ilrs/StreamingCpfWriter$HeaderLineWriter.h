#ifndef org_orekit_files_ilrs_StreamingCpfWriter$HeaderLineWriter_H
#define org_orekit_files_ilrs_StreamingCpfWriter$HeaderLineWriter_H

#include "java/lang/Enum.h"

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
      namespace ilrs {
        class CPFHeader;
        class StreamingCpfWriter$HeaderLineWriter;
      }
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class StreamingCpfWriter$HeaderLineWriter : public ::java::lang::Enum {
         public:
          enum {
            mid_getIdentifier_3cffd47377eca18a,
            mid_valueOf_1b3efe879e7f1d29,
            mid_values_add654cae3f6f9cd,
            mid_write_900728190d5e0bec,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StreamingCpfWriter$HeaderLineWriter(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StreamingCpfWriter$HeaderLineWriter(const StreamingCpfWriter$HeaderLineWriter& obj) : ::java::lang::Enum(obj) {}

          static StreamingCpfWriter$HeaderLineWriter *H1;
          static StreamingCpfWriter$HeaderLineWriter *H2;

          ::java::lang::String getIdentifier() const;
          static StreamingCpfWriter$HeaderLineWriter valueOf(const ::java::lang::String &);
          static JArray< StreamingCpfWriter$HeaderLineWriter > values();
          void write(const ::org::orekit::files::ilrs::CPFHeader &, const ::java::lang::Appendable &, const ::org::orekit::time::TimeScale &) const;
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
        extern PyType_Def PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter);
        extern PyTypeObject *PY_TYPE(StreamingCpfWriter$HeaderLineWriter);

        class t_StreamingCpfWriter$HeaderLineWriter {
        public:
          PyObject_HEAD
          StreamingCpfWriter$HeaderLineWriter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StreamingCpfWriter$HeaderLineWriter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StreamingCpfWriter$HeaderLineWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StreamingCpfWriter$HeaderLineWriter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
