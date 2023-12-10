#ifndef org_orekit_files_ccsds_utils_generation_PythonMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_PythonMessageWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Segment;
          class Header;
        }
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
        }
        namespace ndm {
          class NdmConstituent;
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

            class PythonMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_finalize_7ae3461a92a43152,
                mid_getFormatVersionKey_0090f7797e403f43,
                mid_getRoot_0090f7797e403f43,
                mid_getVersion_456d9a2f64d6b28d,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
                mid_writeFooter_fb36c2e4ae059ab9,
                mid_writeHeader_31a4dd6b0c8635b6,
                mid_writeSegment_412320e9d7a2723d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonMessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonMessageWriter(const PythonMessageWriter& obj) : ::java::lang::Object(obj) {}

              PythonMessageWriter();

              void finalize() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              jdouble getVersion() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
              void writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Header &) const;
              void writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Segment &) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonMessageWriter);
            extern PyTypeObject *PY_TYPE(PythonMessageWriter);

            class t_PythonMessageWriter {
            public:
              PyObject_HEAD
              PythonMessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_PythonMessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonMessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonMessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
