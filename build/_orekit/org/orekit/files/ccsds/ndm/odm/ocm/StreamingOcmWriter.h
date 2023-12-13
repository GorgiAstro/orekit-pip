#ifndef org_orekit_files_ccsds_ndm_odm_ocm_StreamingOcmWriter_H
#define org_orekit_files_ccsds_ndm_odm_ocm_StreamingOcmWriter_H

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
          namespace odm {
            namespace ocm {
              class OcmMetadata;
              class TrajectoryStateHistoryMetadata;
              class StreamingOcmWriter$BlockWriter;
              class OcmWriter;
            }
            class OdmHeader;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class AutoCloseable;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class StreamingOcmWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d22074dea2788852,
                  mid_init$_6e2719a7f64ba2e5,
                  mid_close_a1fa5dae97ea5ed2,
                  mid_newBlock_a12f324dd1b48d02,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingOcmWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingOcmWriter(const StreamingOcmWriter& obj) : ::java::lang::Object(obj) {}

                StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata &, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata &);
                StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata &, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata &, jboolean);

                void close() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter newBlock() const;
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
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(StreamingOcmWriter);
              extern PyTypeObject *PY_TYPE(StreamingOcmWriter);

              class t_StreamingOcmWriter {
              public:
                PyObject_HEAD
                StreamingOcmWriter object;
                static PyObject *wrap_Object(const StreamingOcmWriter&);
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
