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
                mid_init$_0fa09c18fee449d5,
                mid_build_4d26fd885228c716,
                mid_finalize_0fa09c18fee449d5,
                mid_getFileFormat_66298c6188053be6,
                mid_getFormatVersionKey_11b109bd155ca898,
                mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465,
                mid_parseMessage_455adfd4ae4ab630,
                mid_process_60c6e06c33a7585b,
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
                mid_reset_e250621f009e45db,
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
