#ifndef org_orekit_files_ccsds_utils_parsing_PythonAbstractMessageParser_H
#define org_orekit_files_ccsds_utils_parsing_PythonAbstractMessageParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
        }
      }
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

            class PythonAbstractMessageParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser {
             public:
              enum {
                mid_build_e661fe3ba2fafb22,
                mid_finalize_0640e6acf969ed28,
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

              explicit PythonAbstractMessageParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractMessageParser(const PythonAbstractMessageParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {}

              ::java::lang::Object build() const;
              void finalize() const;
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
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(PythonAbstractMessageParser);
            extern PyTypeObject *PY_TYPE(PythonAbstractMessageParser);

            class t_PythonAbstractMessageParser {
            public:
              PyObject_HEAD
              PythonAbstractMessageParser object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_PythonAbstractMessageParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAbstractMessageParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAbstractMessageParser&, PyTypeObject *);
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
