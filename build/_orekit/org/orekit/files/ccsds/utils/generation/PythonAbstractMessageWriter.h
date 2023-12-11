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
          class ContextBinding;
          namespace generation {
            class Generator;
          }
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
                mid_init$_17d2c89957221da8,
                mid_finalize_0640e6acf969ed28,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_writeSegmentContent_e9836ce27ccfe3b9,
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
