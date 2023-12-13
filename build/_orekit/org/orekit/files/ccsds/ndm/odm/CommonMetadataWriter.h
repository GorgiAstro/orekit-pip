#ifndef org_orekit_files_ccsds_ndm_odm_CommonMetadataWriter_H
#define org_orekit_files_ccsds_ndm_odm_CommonMetadataWriter_H

#include "org/orekit/files/ccsds/section/AbstractWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmCommonMetadata;
          }
        }
        namespace definitions {
          class TimeConverter;
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
          namespace odm {

            class CommonMetadataWriter : public ::org::orekit::files::ccsds::section::AbstractWriter {
             public:
              enum {
                mid_init$_81a6fb4556427432,
                mid_writeContent_fb222e851cd27682,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CommonMetadataWriter(jobject obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CommonMetadataWriter(const CommonMetadataWriter& obj) : ::org::orekit::files::ccsds::section::AbstractWriter(obj) {}

              CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata &, const ::org::orekit::files::ccsds::definitions::TimeConverter &);
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
            extern PyType_Def PY_TYPE_DEF(CommonMetadataWriter);
            extern PyTypeObject *PY_TYPE(CommonMetadataWriter);

            class t_CommonMetadataWriter {
            public:
              PyObject_HEAD
              CommonMetadataWriter object;
              static PyObject *wrap_Object(const CommonMetadataWriter&);
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
