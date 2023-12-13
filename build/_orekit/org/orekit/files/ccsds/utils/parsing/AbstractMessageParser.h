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
          namespace parsing {
            class ProcessingState;
          }
          namespace lexical {
            class XmlTokenBuilder;
            class ParseToken;
            class MessageParser;
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
                mid_anticipateNext_c4aced5b6da74a0c,
                mid_getCurrent_f164c3688294cf91,
                mid_getFileFormat_e4c64bde02ca34c3,
                mid_getFormatVersionKey_1c1fa1e935d6cdcf,
                mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a,
                mid_parseMessage_653fe7fd2fcbf113,
                mid_process_19d473d3b0277de6,
                mid_setEndTagSeen_fcb96c98de6fad04,
                mid_setFallback_c4aced5b6da74a0c,
                mid_wasEndTagSeen_9ab94ac1dc23b105,
                mid_reset_4a64e4a74b40b4f0,
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
