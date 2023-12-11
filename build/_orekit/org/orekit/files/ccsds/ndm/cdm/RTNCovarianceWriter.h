#ifndef org_orekit_files_ccsds_ndm_cdm_RTNCovarianceWriter_H
#define org_orekit_files_ccsds_ndm_cdm_RTNCovarianceWriter_H

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

            class RTNCovarianceWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_writeContent_0503da09b1f1eb3c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RTNCovarianceWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RTNCovarianceWriter(const RTNCovarianceWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}
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
            extern PyType_Def PY_TYPE_DEF(RTNCovarianceWriter);
            extern PyTypeObject *PY_TYPE(RTNCovarianceWriter);

            class t_RTNCovarianceWriter {
            public:
              PyObject_HEAD
              RTNCovarianceWriter object;
              static PyObject *wrap_Object(const RTNCovarianceWriter&);
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
