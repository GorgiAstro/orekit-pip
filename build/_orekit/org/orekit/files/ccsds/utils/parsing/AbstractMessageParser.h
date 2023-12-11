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
                mid_anticipateNext_a4672268e69dcb47,
                mid_getCurrent_50ed54b038eedc45,
                mid_getFileFormat_c3a4c5f37e67a25e,
                mid_getFormatVersionKey_3cffd47377eca18a,
                mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                mid_parseMessage_850ca290e1713a38,
                mid_process_1eac6345cb6bda02,
                mid_setEndTagSeen_ed2afdb8506b9742,
                mid_setFallback_a4672268e69dcb47,
                mid_wasEndTagSeen_89b302893bdbe1f1,
                mid_reset_5f31019b1332b69c,
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
