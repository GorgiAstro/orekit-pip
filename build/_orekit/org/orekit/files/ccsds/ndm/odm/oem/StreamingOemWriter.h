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
              class OemWriter;
              class OemMetadata;
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
                  mid_init$_945023d2895847d0,
                  mid_init$_1fcc7d486e776df4,
                  mid_init$_d3cf3d1523bc52fe,
                  mid_close_0640e6acf969ed28,
                  mid_newSegment_878e48bbd4ba0a8e,
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
