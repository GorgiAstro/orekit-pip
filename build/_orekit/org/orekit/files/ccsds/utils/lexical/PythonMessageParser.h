#ifndef org_orekit_files_ccsds_utils_lexical_PythonMessageParser_H
#define org_orekit_files_ccsds_utils_lexical_PythonMessageParser_H

#include "java/lang/Object.h"

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
          namespace lexical {

            class PythonMessageParser : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_build_704a5bee58538972,
                mid_finalize_ff7cb6c242604316,
                mid_getFileFormat_49975b0867f6c97c,
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d,
                mid_parseMessage_7927c1c0838e396d,
                mid_process_db9439a3eec594be,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                mid_reset_a23f5f7531d9b583,
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
