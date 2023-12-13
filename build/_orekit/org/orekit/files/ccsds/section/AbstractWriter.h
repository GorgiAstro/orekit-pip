#ifndef org_orekit_files_ccsds_section_AbstractWriter_H
#define org_orekit_files_ccsds_section_AbstractWriter_H

#include "java/lang/Object.h"

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
    class Class;
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

          class AbstractWriter : public ::java::lang::Object {
           public:
            enum {
              mid_enterSection_fb222e851cd27682,
              mid_exitSection_fb222e851cd27682,
              mid_write_fb222e851cd27682,
              mid_intArrayToString_e06025bc23ba70af,
              mid_writeContent_fb222e851cd27682,
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
