#ifndef org_orekit_files_ccsds_section_AbstractWriter_H
#define org_orekit_files_ccsds_section_AbstractWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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

          class AbstractWriter : public ::java::lang::Object {
           public:
            enum {
              mid_enterSection_fb36c2e4ae059ab9,
              mid_exitSection_fb36c2e4ae059ab9,
              mid_write_fb36c2e4ae059ab9,
              mid_writeContent_fb36c2e4ae059ab9,
              mid_intArrayToString_e3f5ec408434fab9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractWriter(const AbstractWriter& obj) : ::java::lang::Object(obj) {}

            void enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
            void exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
            void write(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractWriter);
          extern PyTypeObject *PY_TYPE(AbstractWriter);

          class t_AbstractWriter {
          public:
            PyObject_HEAD
            AbstractWriter object;
            static PyObject *wrap_Object(const AbstractWriter&);
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
