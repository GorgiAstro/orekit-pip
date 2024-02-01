#ifndef org_orekit_files_ccsds_utils_generation_PythonAbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_PythonAbstractMessageWriter_H

#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class Generator;
          }
          class ContextBinding;
        }
        namespace section {
          class Segment;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            class PythonAbstractMessageWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
             public:
              enum {
                mid_init$_3026836a952fe988,
                mid_finalize_ff7cb6c242604316,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                mid_writeSegmentContent_305aa7864995b122,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAbstractMessageWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractMessageWriter(const PythonAbstractMessageWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

              PythonAbstractMessageWriter(const ::java::lang::String &, const ::java::lang::String &, jdouble, const ::org::orekit::files::ccsds::utils::ContextBinding &);

              void finalize() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator &, jdouble, const ::org::orekit::files::ccsds::section::Segment &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(PythonAbstractMessageWriter);
            extern PyTypeObject *PY_TYPE(PythonAbstractMessageWriter);

            class t_PythonAbstractMessageWriter {
            public:
              PyObject_HEAD
              PythonAbstractMessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_PythonAbstractMessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAbstractMessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAbstractMessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
