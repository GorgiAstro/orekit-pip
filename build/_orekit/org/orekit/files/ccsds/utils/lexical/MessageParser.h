#ifndef org_orekit_files_ccsds_utils_lexical_MessageParser_H
#define org_orekit_files_ccsds_utils_lexical_MessageParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
                mid_build_dfd7647d9110ac9f,
                mid_getFileFormat_b51f613f857a5e84,
                mid_getFormatVersionKey_0090f7797e403f43,
                mid_getSpecialXmlElementsBuilders_d6753b7055940a54,
                mid_parseMessage_691778b38b11996d,
                mid_process_9b91a684064d0956,
                mid_reset_052c3a3464b50355,
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
