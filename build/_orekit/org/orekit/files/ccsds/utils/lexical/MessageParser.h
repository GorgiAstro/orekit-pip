#ifndef org_orekit_files_ccsds_utils_lexical_MessageParser_H
#define org_orekit_files_ccsds_utils_lexical_MessageParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
            class XmlTokenBuilder;
          }
          class FileFormat;
        }
      }
    }
    namespace data {
      class DataSource;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
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
                mid_build_4d26fd885228c716,
                mid_getFileFormat_66298c6188053be6,
                mid_getFormatVersionKey_11b109bd155ca898,
                mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465,
                mid_parseMessage_455adfd4ae4ab630,
                mid_process_60c6e06c33a7585b,
                mid_reset_e250621f009e45db,
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
