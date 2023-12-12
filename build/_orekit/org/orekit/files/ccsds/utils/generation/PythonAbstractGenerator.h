#ifndef org_orekit_files_ccsds_utils_generation_PythonAbstractGenerator_H
#define org_orekit_files_ccsds_utils_generation_PythonAbstractGenerator_H

#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
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
                mid_init$_6e7c6a479ca124c5,
                mid_endMessage_f5ffdf29129ef90a,
                mid_finalize_0640e6acf969ed28,
                mid_getFormat_c3a4c5f37e67a25e,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_startMessage_9547058464ed819e,
                mid_writeComments_4ccaedadb068bdeb,
                mid_writeEntry_a717407bcf2f477f,
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
