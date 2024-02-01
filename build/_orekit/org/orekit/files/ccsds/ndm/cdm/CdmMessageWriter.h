#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeConverter;
        }
        namespace ndm {
          namespace cdm {
            class CdmSegment;
            class CdmHeader;
            class Cdm;
            class CdmRelativeMetadata;
            class CdmData;
            class CdmMetadata;
          }
        }
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
          class ContextBinding;
        }
        namespace section {
          class Segment;
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
                mid_init$_3026836a952fe988,
                mid_getContext_fc8d452549dd65ec,
                mid_getDefaultVersion_9981f74b2d109da6,
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getRoot_d2c8eb4129821f0e,
                mid_getTimeConverter_45cb786b56bfc0bf,
                mid_getVersion_9981f74b2d109da6,
                mid_setContext_1564c35f88556e3e,
                mid_writeFooter_05c6d36d73082fa6,
                mid_writeHeader_c0e1369736d25fb3,
                mid_writeRelativeMetadataContent_d892bd325a5da5c3,
                mid_writeSegment_caac2f59668a092a,
                mid_writeSegmentContent_305aa7864995b122,
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
