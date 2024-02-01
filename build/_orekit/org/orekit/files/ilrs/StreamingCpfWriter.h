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
    namespace files {
      namespace ilrs {
        class CPFHeader;
        class StreamingCpfWriter$Segment;
      }
    }
    namespace frames {
      class Frame;
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
            mid_init$_932be17914d0c040,
            mid_init$_13ea75a8bd428b91,
            mid_newSegment_0c2d846aef8d516d,
            mid_writeEndOfFile_ff7cb6c242604316,
            mid_writeHeader_ff7cb6c242604316,
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
