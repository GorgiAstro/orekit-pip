#ifndef org_orekit_files_ccsds_ndm_cdm_ODParametersWriter_H
#define org_orekit_files_ccsds_ndm_cdm_ODParametersWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class ODParametersWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_writeContent_fb36c2e4ae059ab9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ODParametersWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ODParametersWriter(const ODParametersWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(ODParametersWriter);
            extern PyTypeObject *PY_TYPE(ODParametersWriter);

            class t_ODParametersWriter {
            public:
              PyObject_HEAD
              ODParametersWriter object;
              static PyObject *wrap_Object(const ODParametersWriter&);
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
