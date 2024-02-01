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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
              mid_enterSection_05c6d36d73082fa6,
              mid_exitSection_05c6d36d73082fa6,
              mid_write_05c6d36d73082fa6,
              mid_writeContent_05c6d36d73082fa6,
              mid_intArrayToString_c9e8e005aec406fb,
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
