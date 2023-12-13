#ifndef org_orekit_files_ccsds_utils_lexical_MessageParser_H
#define org_orekit_files_ccsds_utils_lexical_MessageParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
            class ParseToken;
          }
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
          namespace lexical {

            class MessageParser : public ::java::lang::Object {
             public:
              enum {
                mid_build_541690f9ee81d3ad,
                mid_getFileFormat_e4c64bde02ca34c3,
                mid_getFormatVersionKey_1c1fa1e935d6cdcf,
                mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a,
                mid_parseMessage_653fe7fd2fcbf113,
                mid_process_19d473d3b0277de6,
                mid_reset_28163d47221b3cf7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MessageParser(const MessageParser& obj) : ::java::lang::Object(obj) {}

              ::java::lang::Object build() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFileFormat() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::util::Map getSpecialXmlElementsBuilders() const;
              ::java::lang::Object parseMessage(const ::org::orekit::data::DataSource &) const;
              void process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
              void reset(const ::org::orekit::files::ccsds::utils::FileFormat &) const;
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
          namespace lexical {
            extern PyType_Def PY_TYPE_DEF(MessageParser);
            extern PyTypeObject *PY_TYPE(MessageParser);

            class t_MessageParser {
            public:
              PyObject_HEAD
              MessageParser object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_MessageParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MessageParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MessageParser&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
