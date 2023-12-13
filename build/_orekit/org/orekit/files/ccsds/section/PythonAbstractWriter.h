#ifndef org_orekit_files_ccsds_section_PythonAbstractWriter_H
#define org_orekit_files_ccsds_section_PythonAbstractWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

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
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
              mid_init$_a627ad9c5959309d,
              mid_finalize_a1fa5dae97ea5ed2,
              mid_intArrayToString_e06025bc23ba70af,
              mid_pythonDecRef_a1fa5dae97ea5ed2,
              mid_pythonExtension_6c0ce7e438e5ded4,
              mid_pythonExtension_3d7dd2314a0dd456,
              mid_writeContent_fb222e851cd27682,
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
