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
        class StreamingCpfWriter$HeaderLineWriter;
        class CPFHeader;
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
            mid_getIdentifier_11b109bd155ca898,
            mid_valueOf_c1c1c1cefb07ad13,
            mid_values_86ce42271e03c949,
            mid_write_5ea53a4031a3df60,
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
