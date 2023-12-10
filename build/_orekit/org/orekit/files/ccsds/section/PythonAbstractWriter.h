#ifndef org_orekit_files_ccsds_section_PythonAbstractWriter_H
#define org_orekit_files_ccsds_section_PythonAbstractWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

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
        namespace utils {
          namespace generation {
            class Generator;
          }
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
        namespace section {

          class PythonAbstractWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
           public:
            enum {
              mid_init$_96073c87872b7a97,
              mid_finalize_7ae3461a92a43152,
              mid_intArrayToString_e3f5ec408434fab9,
              mid_pythonDecRef_7ae3461a92a43152,
              mid_pythonExtension_a27fc9afd27e559d,
              mid_pythonExtension_fefb08975c10f0a1,
              mid_writeContent_fb36c2e4ae059ab9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonAbstractWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonAbstractWriter(const PythonAbstractWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

            PythonAbstractWriter(const ::java::lang::String &, const ::java::lang::String &);

            void finalize() const;
            ::java::lang::String intArrayToString(const JArray< jint > &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            void writeContent(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
          };
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(PythonAbstractWriter);
          extern PyTypeObject *PY_TYPE(PythonAbstractWriter);

          class t_PythonAbstractWriter {
          public:
            PyObject_HEAD
            PythonAbstractWriter object;
            static PyObject *wrap_Object(const PythonAbstractWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
