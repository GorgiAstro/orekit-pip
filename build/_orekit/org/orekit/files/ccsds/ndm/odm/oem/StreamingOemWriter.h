#ifndef org_orekit_files_ccsds_ndm_odm_oem_StreamingOemWriter_H
#define org_orekit_files_ccsds_ndm_odm_oem_StreamingOemWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemMetadata;
              class OemWriter;
              class StreamingOemWriter$SegmentWriter;
            }
            class OdmHeader;
          }
        }
        namespace utils {
          namespace generation {
            class Generator;
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
          namespace odm {
            namespace oem {

              class StreamingOemWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_9bddc591c356b350,
                  mid_init$_84d0e31634d86141,
                  mid_init$_173d00a575c7ba59,
                  mid_close_ff7cb6c242604316,
                  mid_newSegment_edda82a133394bb2,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingOemWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingOemWriter(const StreamingOemWriter& obj) : ::java::lang::Object(obj) {}

                StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &);
                StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &, jboolean);
                StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &, jboolean, jboolean);

                void close() const;
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter newSegment() const;
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
          namespace odm {
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(StreamingOemWriter);
              extern PyTypeObject *PY_TYPE(StreamingOemWriter);

              class t_StreamingOemWriter {
              public:
                PyObject_HEAD
                StreamingOemWriter object;
                static PyObject *wrap_Object(const StreamingOemWriter&);
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
