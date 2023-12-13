#ifndef org_orekit_files_ccsds_ndm_cdm_CdmHeader_H
#define org_orekit_files_ccsds_ndm_cdm_CdmHeader_H

#include "org/orekit/files/ccsds/section/Header.h"

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
          namespace cdm {

            class CdmHeader : public ::org::orekit::files::ccsds::section::Header {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getMessageFor_1c1fa1e935d6cdcf,
                mid_setMessageFor_734b91ac30d5f9b4,
                mid_validate_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmHeader(jobject obj) : ::org::orekit::files::ccsds::section::Header(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmHeader(const CdmHeader& obj) : ::org::orekit::files::ccsds::section::Header(obj) {}

              CdmHeader();

              ::java::lang::String getMessageFor() const;
              void setMessageFor(const ::java::lang::String &) const;
              void validate(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(CdmHeader);
            extern PyTypeObject *PY_TYPE(CdmHeader);

            class t_CdmHeader {
            public:
              PyObject_HEAD
              CdmHeader object;
              static PyObject *wrap_Object(const CdmHeader&);
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
