#ifndef org_orekit_files_ccsds_utils_generation_KvnGenerator_H
#define org_orekit_files_ccsds_utils_generation_KvnGenerator_H

#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
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

            class KvnGenerator : public ::org::orekit::files::ccsds::utils::generation::AbstractGenerator {
             public:
              enum {
                mid_init$_c5141c41b8e79a6b,
                mid_endMessage_105e1eadb709d9ac,
                mid_enterSection_105e1eadb709d9ac,
                mid_exitSection_d2c8eb4129821f0e,
                mid_getFormat_49975b0867f6c97c,
                mid_startMessage_04f72a78f21743a7,
                mid_writeComments_aa335fea495d60e0,
                mid_writeEntry_dbec4ebd43084884,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KvnGenerator(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KvnGenerator(const KvnGenerator& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(obj) {}

              KvnGenerator(const ::java::lang::Appendable &, jint, const ::java::lang::String &, jdouble, jint);

              void endMessage(const ::java::lang::String &) const;
              void enterSection(const ::java::lang::String &) const;
              ::java::lang::String exitSection() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFormat() const;
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
            extern PyType_Def PY_TYPE_DEF(KvnGenerator);
            extern PyTypeObject *PY_TYPE(KvnGenerator);

            class t_KvnGenerator {
            public:
              PyObject_HEAD
              KvnGenerator object;
              static PyObject *wrap_Object(const KvnGenerator&);
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
