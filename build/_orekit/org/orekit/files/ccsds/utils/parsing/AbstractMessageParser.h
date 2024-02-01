#ifndef org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H
#define org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H

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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
            class MessageParser;
            class ParseToken;
          }
          namespace parsing {
            class ProcessingState;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            class AbstractMessageParser : public ::java::lang::Object {
             public:
              enum {
                mid_anticipateNext_df22f5836a72eed0,
                mid_getCurrent_47fa4026cdb6bd6b,
                mid_getFileFormat_49975b0867f6c97c,
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d,
                mid_parseMessage_7927c1c0838e396d,
                mid_process_db9439a3eec594be,
                mid_setEndTagSeen_b35db77cae58639e,
                mid_setFallback_df22f5836a72eed0,
                mid_wasEndTagSeen_eee3de00fe971136,
                mid_reset_32b4342bd69ebf7d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractMessageParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractMessageParser(const AbstractMessageParser& obj) : ::java::lang::Object(obj) {}

              void anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState &) const;
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState getCurrent() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFileFormat() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::util::Map getSpecialXmlElementsBuilders() const;
              ::java::lang::Object parseMessage(const ::org::orekit::data::DataSource &) const;
              void process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
              void setEndTagSeen(jboolean) const;
              void setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState &) const;
              jboolean wasEndTagSeen() const;
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
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(AbstractMessageParser);
            extern PyTypeObject *PY_TYPE(AbstractMessageParser);

            class t_AbstractMessageParser {
            public:
              PyObject_HEAD
              AbstractMessageParser object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AbstractMessageParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractMessageParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractMessageParser&, PyTypeObject *);
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
