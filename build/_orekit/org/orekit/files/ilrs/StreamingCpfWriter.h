#ifndef org_orekit_files_ilrs_StreamingCpfWriter_H
#define org_orekit_files_ilrs_StreamingCpfWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace files {
      namespace ilrs {
        class StreamingCpfWriter$Segment;
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

        class StreamingCpfWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_19c2513a0b4eaf1d,
            mid_init$_a385c366a36fa71f,
            mid_newSegment_a4bf1e7b62865aec,
            mid_writeEndOfFile_0fa09c18fee449d5,
            mid_writeHeader_0fa09c18fee449d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StreamingCpfWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StreamingCpfWriter(const StreamingCpfWriter& obj) : ::java::lang::Object(obj) {}

          StreamingCpfWriter(const ::java::lang::Appendable &, const ::org::orekit::time::TimeScale &, const ::org::orekit::files::ilrs::CPFHeader &);
          StreamingCpfWriter(const ::java::lang::Appendable &, const ::org::orekit::time::TimeScale &, const ::org::orekit::files::ilrs::CPFHeader &, jboolean);

          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment newSegment(const ::org::orekit::frames::Frame &) const;
          void writeEndOfFile() const;
          void writeHeader() const;
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
        extern PyType_Def PY_TYPE_DEF(StreamingCpfWriter);
        extern PyTypeObject *PY_TYPE(StreamingCpfWriter);

        class t_StreamingCpfWriter {
        public:
          PyObject_HEAD
          StreamingCpfWriter object;
          static PyObject *wrap_Object(const StreamingCpfWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
