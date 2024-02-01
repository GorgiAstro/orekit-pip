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
                mid_init$_ff7cb6c242604316,
                mid_getMessageFor_d2c8eb4129821f0e,
                mid_setMessageFor_105e1eadb709d9ac,
                mid_validate_1ad26e8c8c0cd65b,
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
