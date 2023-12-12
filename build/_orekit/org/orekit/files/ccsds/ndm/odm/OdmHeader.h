#ifndef org_orekit_files_ccsds_ndm_odm_OdmHeader_H
#define org_orekit_files_ccsds_ndm_odm_OdmHeader_H

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
          namespace odm {

            class OdmHeader : public ::org::orekit::files::ccsds::section::Header {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OdmHeader(jobject obj) : ::org::orekit::files::ccsds::section::Header(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OdmHeader(const OdmHeader& obj) : ::org::orekit::files::ccsds::section::Header(obj) {}

              OdmHeader();
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
            extern PyType_Def PY_TYPE_DEF(OdmHeader);
            extern PyTypeObject *PY_TYPE(OdmHeader);

            class t_OdmHeader {
            public:
              PyObject_HEAD
              OdmHeader object;
              static PyObject *wrap_Object(const OdmHeader&);
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
