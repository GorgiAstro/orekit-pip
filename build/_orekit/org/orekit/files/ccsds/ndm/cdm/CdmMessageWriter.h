#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class Generator;
            class MessageWriter;
          }
          class ContextBinding;
        }
        namespace section {
          class Segment;
        }
        namespace ndm {
          namespace cdm {
            class CdmMetadata;
            class CdmSegment;
            class CdmRelativeMetadata;
            class CdmData;
            class Cdm;
            class CdmHeader;
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
                mid_init$_171dbda6f9dc03f2,
                mid_getContext_f24ed3335bf508bc,
                mid_getDefaultVersion_b74f83833fdad017,
                mid_getFormatVersionKey_1c1fa1e935d6cdcf,
                mid_getRoot_1c1fa1e935d6cdcf,
                mid_getTimeConverter_cf100f800540ff49,
                mid_getVersion_b74f83833fdad017,
                mid_setContext_db5d6d07a090d1f4,
                mid_writeFooter_fb222e851cd27682,
                mid_writeHeader_6a412104eaccbb1b,
                mid_writeRelativeMetadataContent_d31fad1cabdbc982,
                mid_writeSegment_9224bf4e294cad7a,
                mid_writeSegmentContent_309d7ce7156c8c23,
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
