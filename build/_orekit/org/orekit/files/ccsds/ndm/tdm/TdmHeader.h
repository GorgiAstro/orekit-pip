#ifndef org_orekit_files_ccsds_ndm_tdm_TdmHeader_H
#define org_orekit_files_ccsds_ndm_tdm_TdmHeader_H

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
          namespace tdm {

            class TdmHeader : public ::org::orekit::files::ccsds::section::Header {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TdmHeader(jobject obj) : ::org::orekit::files::ccsds::section::Header(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmHeader(const TdmHeader& obj) : ::org::orekit::files::ccsds::section::Header(obj) {}

              TdmHeader();
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
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(TdmHeader);
            extern PyTypeObject *PY_TYPE(TdmHeader);

            class t_TdmHeader {
            public:
              PyObject_HEAD
              TdmHeader object;
              static PyObject *wrap_Object(const TdmHeader&);
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
