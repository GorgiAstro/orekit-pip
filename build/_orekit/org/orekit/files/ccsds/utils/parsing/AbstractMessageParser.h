#ifndef org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H
#define org_orekit_files_ccsds_utils_parsing_AbstractMessageParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
            class XmlTokenBuilder;
            class MessageParser;
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
                mid_anticipateNext_30e3b8a372059ddf,
                mid_getCurrent_1dbed63d6789950e,
                mid_getFileFormat_66298c6188053be6,
                mid_getFormatVersionKey_11b109bd155ca898,
                mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465,
                mid_parseMessage_455adfd4ae4ab630,
                mid_process_60c6e06c33a7585b,
                mid_setEndTagSeen_bd04c9335fb9e4cf,
                mid_setFallback_30e3b8a372059ddf,
                mid_wasEndTagSeen_b108b35ef48e27bd,
                mid_reset_b2bb54cd2f7ebe7d,
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
