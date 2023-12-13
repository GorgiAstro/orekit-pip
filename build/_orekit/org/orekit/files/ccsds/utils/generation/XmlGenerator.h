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
                mid_init$_455a739b3cdb51af,
                mid_endMessage_734b91ac30d5f9b4,
                mid_enterSection_734b91ac30d5f9b4,
                mid_exitSection_1c1fa1e935d6cdcf,
                mid_getFormat_e4c64bde02ca34c3,
                mid_startMessage_03ff9b80a9f63d81,
                mid_writeComments_0e7c3032c7c93ed3,
                mid_writeEntry_bae21004607fffc6,
                mid_writeOneAttributeElement_09d55289065fbca9,
                mid_writeTwoAttributesElement_e39b9463875d2aea,
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
