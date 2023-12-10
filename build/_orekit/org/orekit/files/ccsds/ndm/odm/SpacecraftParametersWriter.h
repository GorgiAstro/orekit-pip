#ifndef org_orekit_files_ccsds_ndm_odm_SpacecraftParametersWriter_H
#define org_orekit_files_ccsds_ndm_odm_SpacecraftParametersWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class SpacecraftParameters;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class SpacecraftParametersWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_1c2d99aab8d4d96b,
                mid_writeContent_6d745cf7b26e9f5d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpacecraftParametersWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpacecraftParametersWriter(const SpacecraftParametersWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              SpacecraftParametersWriter(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters &);
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
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(SpacecraftParametersWriter);
            extern PyTypeObject *PY_TYPE(SpacecraftParametersWriter);

            class t_SpacecraftParametersWriter {
            public:
              PyObject_HEAD
              SpacecraftParametersWriter object;
              static PyObject *wrap_Object(const SpacecraftParametersWriter&);
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
