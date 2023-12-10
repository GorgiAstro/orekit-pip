#ifndef org_orekit_files_ccsds_ndm_adm_aem_StreamingAemWriter_H
#define org_orekit_files_ccsds_ndm_adm_aem_StreamingAemWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class Generator;
          }
        }
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemMetadata;
              class StreamingAemWriter$SegmentWriter;
              class AemWriter;
            }
            class AdmHeader;
          }
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
    class AutoCloseable;
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
            namespace aem {

              class StreamingAemWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_93ec9a5fc43b7407,
                  mid_close_0fa09c18fee449d5,
                  mid_newSegment_a16bd808d4e206dc,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingAemWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingAemWriter(const StreamingAemWriter& obj) : ::java::lang::Object(obj) {}

                StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter &, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata &);

                void close() const;
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter newSegment() const;
              };
            }
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(StreamingAemWriter);
              extern PyTypeObject *PY_TYPE(StreamingAemWriter);

              class t_StreamingAemWriter {
              public:
                PyObject_HEAD
                StreamingAemWriter object;
                static PyObject *wrap_Object(const StreamingAemWriter&);
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
}

#endif
