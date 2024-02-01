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
                mid_build_704a5bee58538972,
                mid_finalize_ff7cb6c242604316,
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
