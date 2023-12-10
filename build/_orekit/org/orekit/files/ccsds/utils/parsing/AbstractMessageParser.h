#ifndef org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H
#define org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H

#include "java/lang/Object.h"

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
          class FileFormat;
          namespace parsing {
            class ProcessingState;
          }
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
          namespace parsing {

            class AbstractMessageParser : public ::java::lang::Object {
             public:
              enum {
                mid_anticipateNext_fcf5bfd61f1ca2c0,
                mid_getCurrent_50840dac38b5c0f6,
                mid_getFileFormat_b51f613f857a5e84,
                mid_getFormatVersionKey_0090f7797e403f43,
                mid_getSpecialXmlElementsBuilders_d6753b7055940a54,
                mid_parseMessage_691778b38b11996d,
                mid_process_9b91a684064d0956,
                mid_setEndTagSeen_50a2e0b139e80a58,
                mid_setFallback_fcf5bfd61f1ca2c0,
                mid_wasEndTagSeen_e470b6d9e0d979db,
                mid_reset_5d01efeee494ec15,
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
