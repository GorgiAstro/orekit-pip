#ifndef org_orekit_files_ccsds_ndm_adm_AdmCommonMetadataWriter_H
#define org_orekit_files_ccsds_ndm_adm_AdmCommonMetadataWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmMetadata;
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
          namespace adm {

            class AdmCommonMetadataWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_fd63369ca1bc1f43,
                mid_writeContent_fb222e851cd27682,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdmCommonMetadataWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdmCommonMetadataWriter(const AdmCommonMetadataWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata &);
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
            extern PyType_Def PY_TYPE_DEF(AdmCommonMetadataWriter);
            extern PyTypeObject *PY_TYPE(AdmCommonMetadataWriter);

            class t_AdmCommonMetadataWriter {
            public:
              PyObject_HEAD
              AdmCommonMetadataWriter object;
              static PyObject *wrap_Object(const AdmCommonMetadataWriter&);
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
