#ifndef org_orekit_files_ccsds_ndm_odm_ocm_EphemerisOcmWriter_H
#define org_orekit_files_ccsds_ndm_odm_ocm_EphemerisOcmWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmWriter;
              class TrajectoryStateHistoryMetadata;
              class OcmMetadata;
            }
            class OdmHeader;
          }
        }
        namespace utils {
          class FileFormat;
        }
      }
      namespace general {
        class EphemerisFileWriter;
        class EphemerisFile;
      }
    }
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

              class EphemerisOcmWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_9e67beef4cd7b138,
                  mid_write_e65e411976c35f1d,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EphemerisOcmWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                EphemerisOcmWriter(const EphemerisOcmWriter& obj) : ::java::lang::Object(obj) {}

                EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata &, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata &, const ::org::orekit::files::ccsds::utils::FileFormat &, const ::java::lang::String &, jdouble, jint);

                void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::EphemerisFile &) const;
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
              extern PyType_Def PY_TYPE_DEF(EphemerisOcmWriter);
              extern PyTypeObject *PY_TYPE(EphemerisOcmWriter);

              class t_EphemerisOcmWriter {
              public:
                PyObject_HEAD
                EphemerisOcmWriter object;
                static PyObject *wrap_Object(const EphemerisOcmWriter&);
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
