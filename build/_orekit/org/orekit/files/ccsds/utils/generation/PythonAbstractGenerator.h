#ifndef org_orekit_files_ccsds_utils_generation_PythonAbstractGenerator_H
#define org_orekit_files_ccsds_utils_generation_PythonAbstractGenerator_H

#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
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
          namespace generation {

            class PythonAbstractGenerator : public ::org::orekit::files::ccsds::utils::generation::AbstractGenerator {
             public:
              enum {
                mid_init$_da38cf1e116c8866,
                mid_endMessage_105e1eadb709d9ac,
                mid_finalize_ff7cb6c242604316,
                mid_getFormat_49975b0867f6c97c,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                mid_startMessage_04f72a78f21743a7,
                mid_writeComments_aa335fea495d60e0,
                mid_writeEntry_dbec4ebd43084884,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAbstractGenerator(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractGenerator(const PythonAbstractGenerator& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {}

              PythonAbstractGenerator(const ::java::lang::Appendable &, const ::java::lang::String &, jdouble, jboolean);

              void endMessage(const ::java::lang::String &) const;
              void finalize() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFormat() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void startMessage(const ::java::lang::String &, const ::java::lang::String &, jdouble) const;
              void writeComments(const ::java::util::List &) const;
              void writeEntry(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::utils::units::Unit &, jboolean) const;
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
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(PythonAbstractGenerator);
            extern PyTypeObject *PY_TYPE(PythonAbstractGenerator);

            class t_PythonAbstractGenerator {
            public:
              PyObject_HEAD
              PythonAbstractGenerator object;
              static PyObject *wrap_Object(const PythonAbstractGenerator&);
              static PyObject *wrap_jobject(const jobject&);
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
