#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmHeader;
            class CdmSegment;
            class Cdm;
            class CdmRelativeMetadata;
            class CdmMetadata;
            class CdmData;
          }
        }
        namespace section {
          class Segment;
        }
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
          class ContextBinding;
        }
        namespace definitions {
          class TimeConverter;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class CdmMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_478a9a59660d41ab,
                mid_getContext_21a51eed276d81e3,
                mid_getDefaultVersion_456d9a2f64d6b28d,
                mid_getFormatVersionKey_0090f7797e403f43,
                mid_getRoot_0090f7797e403f43,
                mid_getTimeConverter_131aec6eeceff57f,
                mid_getVersion_456d9a2f64d6b28d,
                mid_setContext_b23a8b8e76c44cd4,
                mid_writeFooter_fb36c2e4ae059ab9,
                mid_writeHeader_325a769010976059,
                mid_writeRelativeMetadataContent_6f7f8f4354c51157,
                mid_writeSegment_253a7e5bc06c891d,
                mid_writeSegmentContent_17bd99da1e106002,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmMessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmMessageWriter(const CdmMessageWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DEFAULT_ORIGINATOR;

              CdmMessageWriter(const ::java::lang::String &, const ::java::lang::String &, jdouble, const ::org::orekit::files::ccsds::utils::ContextBinding &);

              ::org::orekit::files::ccsds::utils::ContextBinding getContext() const;
              jdouble getDefaultVersion() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              ::org::orekit::files::ccsds::definitions::TimeConverter getTimeConverter() const;
              jdouble getVersion() const;
              void setContext(const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
              void writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
              void writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader &) const;
              void writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator &, jdouble, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata &) const;
              void writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment &) const;
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
            extern PyType_Def PY_TYPE_DEF(CdmMessageWriter);
            extern PyTypeObject *PY_TYPE(CdmMessageWriter);

            class t_CdmMessageWriter {
            public:
              PyObject_HEAD
              CdmMessageWriter object;
              static PyObject *wrap_Object(const CdmMessageWriter&);
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
