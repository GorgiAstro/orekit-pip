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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
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
              mid_init$_6a2001eff0605f71,
              mid_finalize_0fa09c18fee449d5,
              mid_intArrayToString_73683ad393ccda19,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              mid_writeContent_6d745cf7b26e9f5d,
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
