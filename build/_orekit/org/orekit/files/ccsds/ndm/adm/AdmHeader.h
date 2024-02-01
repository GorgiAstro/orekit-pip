#ifndef org_orekit_files_ccsds_ndm_adm_AdmHeader_H
#define org_orekit_files_ccsds_ndm_adm_AdmHeader_H

#include "org/orekit/files/ccsds/section/Header.h"

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
          namespace adm {

            class AdmHeader : public ::org::orekit::files::ccsds::section::Header {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmHeader(jobject obj) : ::org::orekit::files::ccsds::section::Header(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmHeader(const AdmHeader& obj) : ::org::orekit::files::ccsds::section::Header(obj) {}

              AdmHeader();
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
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AdmHeader);
            extern PyTypeObject *PY_TYPE(AdmHeader);

            class t_AdmHeader {
            public:
              PyObject_HEAD
              AdmHeader object;
              static PyObject *wrap_Object(const AdmHeader&);
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
