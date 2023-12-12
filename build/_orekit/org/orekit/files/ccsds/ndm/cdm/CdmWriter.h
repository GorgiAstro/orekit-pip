#ifndef org_orekit_files_ccsds_ndm_cdm_CdmWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmWriter_H

#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmData;
            class CdmRelativeMetadata;
            class CdmMetadata;
          }
        }
        namespace utils {
          namespace generation {
            class Generator;
          }
        }
        namespace section {
          class Segment;
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

            class CdmWriter : public ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter {
             public:
              enum {
                mid_init$_cba1f12fdff2950e,
                mid_writeRelativeMetadataContent_968820312130dbd5,
                mid_writeSegmentContent_e9836ce27ccfe3b9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmWriter(jobject obj) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmWriter(const CdmWriter& obj) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(obj) {}

              static jdouble CCSDS_CDM_VERS;
              static jint KVN_PADDING_WIDTH;

              CdmWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

              void writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator &, jdouble, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata &) const;
              void writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator &, jdouble, const ::org::orekit::files::ccsds::section::Segment &) const;
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
            extern PyType_Def PY_TYPE_DEF(CdmWriter);
            extern PyTypeObject *PY_TYPE(CdmWriter);

            class t_CdmWriter {
            public:
              PyObject_HEAD
              CdmWriter object;
              static PyObject *wrap_Object(const CdmWriter&);
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
