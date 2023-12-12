#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Cdm;
            class CdmHeader;
            class CdmRelativeMetadata;
            class CdmMetadata;
            class CdmData;
            class CdmSegment;
          }
        }
        namespace utils {
          class ContextBinding;
          namespace generation {
            class MessageWriter;
            class Generator;
          }
        }
        namespace definitions {
          class TimeConverter;
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
                mid_init$_17d2c89957221da8,
                mid_getContext_cfb32720392d108f,
                mid_getDefaultVersion_557b8123390d8d0c,
                mid_getFormatVersionKey_3cffd47377eca18a,
                mid_getRoot_3cffd47377eca18a,
                mid_getTimeConverter_98138020b4258bf0,
                mid_getVersion_557b8123390d8d0c,
                mid_setContext_f673e6e131e83586,
                mid_writeFooter_0503da09b1f1eb3c,
                mid_writeHeader_9f075cf20b3cbc79,
                mid_writeRelativeMetadataContent_968820312130dbd5,
                mid_writeSegment_d176b364c3b39f60,
                mid_writeSegmentContent_e9836ce27ccfe3b9,
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
