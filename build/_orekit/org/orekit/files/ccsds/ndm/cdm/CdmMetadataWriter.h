#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadataWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadataWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmMetadata;
          }
        }
      }
    }
  }
}
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

            class CdmMetadataWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_39a326a1f81e0f3e,
                mid_writeContent_fb36c2e4ae059ab9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmMetadataWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmMetadataWriter(const CdmMetadataWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata &);
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
            extern PyType_Def PY_TYPE_DEF(CdmMetadataWriter);
            extern PyTypeObject *PY_TYPE(CdmMetadataWriter);

            class t_CdmMetadataWriter {
            public:
              PyObject_HEAD
              CdmMetadataWriter object;
              static PyObject *wrap_Object(const CdmMetadataWriter&);
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
