#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalParametersWriter_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalParametersWriter_H

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

            class AdditionalParametersWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_writeContent_0503da09b1f1eb3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalParametersWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalParametersWriter(const AdditionalParametersWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}
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
            extern PyType_Def PY_TYPE_DEF(AdditionalParametersWriter);
            extern PyTypeObject *PY_TYPE(AdditionalParametersWriter);

            class t_AdditionalParametersWriter {
            public:
              PyObject_HEAD
              AdditionalParametersWriter object;
              static PyObject *wrap_Object(const AdditionalParametersWriter&);
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
