#ifndef org_orekit_files_ccsds_utils_lexical_PythonMessageParser_H
#define org_orekit_files_ccsds_utils_lexical_PythonMessageParser_H

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
    class Throwable;
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

            class PythonMessageParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_build_e661fe3ba2fafb22,
                mid_finalize_0640e6acf969ed28,
                mid_getFileFormat_c3a4c5f37e67a25e,
                mid_getFormatVersionKey_3cffd47377eca18a,
                mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                mid_parseMessage_850ca290e1713a38,
                mid_process_1eac6345cb6bda02,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_reset_a580586827f4ec13,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonMessageParser(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonMessageParser(const PythonMessageParser& obj) : ::java::lang::Object(obj) {}

              PythonMessageParser();

              ::java::lang::Object build() const;
              void finalize() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFileFormat() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::util::Map getSpecialXmlElementsBuilders() const;
              ::java::lang::Object parseMessage(const ::org::orekit::data::DataSource &) const;
              void process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonMessageParser);
            extern PyTypeObject *PY_TYPE(PythonMessageParser);

            class t_PythonMessageParser {
            public:
              PyObject_HEAD
              PythonMessageParser object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_PythonMessageParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonMessageParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonMessageParser&, PyTypeObject *);
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
