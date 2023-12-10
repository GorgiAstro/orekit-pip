#ifndef org_orekit_files_ccsds_utils_generation_XmlGenerator_H
#define org_orekit_files_ccsds_utils_generation_XmlGenerator_H

#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
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

            class XmlGenerator : public ::org::orekit::files::ccsds::utils::generation::AbstractGenerator {
             public:
              enum {
                mid_init$_d73bd3f88c49d68d,
                mid_endMessage_d0bc48d5b00dc40c,
                mid_enterSection_d0bc48d5b00dc40c,
                mid_exitSection_11b109bd155ca898,
                mid_getFormat_66298c6188053be6,
                mid_startMessage_d68f2e10a4896937,
                mid_writeComments_de3e021e7266b71e,
                mid_writeEntry_ddc5f91684d983c2,
                mid_writeOneAttributeElement_984b533a39fac42d,
                mid_writeTwoAttributesElement_0be9bb25c5e386d0,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit XmlGenerator(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              XmlGenerator(const XmlGenerator& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {}

              static jint DEFAULT_INDENT;
              static ::java::lang::String *NDM_XML_V3_SCHEMA_LOCATION;
              static ::java::lang::String *UNITS;

              XmlGenerator(const ::java::lang::Appendable &, jint, const ::java::lang::String &, jdouble, jboolean, const ::java::lang::String &);

              void endMessage(const ::java::lang::String &) const;
              void enterSection(const ::java::lang::String &) const;
              ::java::lang::String exitSection() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFormat() const;
              void startMessage(const ::java::lang::String &, const ::java::lang::String &, jdouble) const;
              void writeComments(const ::java::util::List &) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::utils::units::Unit &, jboolean) const;
              void writeOneAttributeElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
              void writeTwoAttributesElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(XmlGenerator);
            extern PyTypeObject *PY_TYPE(XmlGenerator);

            class t_XmlGenerator {
            public:
              PyObject_HEAD
              XmlGenerator object;
              static PyObject *wrap_Object(const XmlGenerator&);
              static PyObject *wrap_jobject(const jobject&);
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
