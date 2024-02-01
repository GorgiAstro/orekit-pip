#ifndef org_orekit_files_ccsds_ndm_odm_ocm_EphemerisOcmWriter_H
#define org_orekit_files_ccsds_ndm_odm_ocm_EphemerisOcmWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile;
        class EphemerisFileWriter;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class TrajectoryStateHistoryMetadata;
              class OcmMetadata;
              class OcmWriter;
            }
            class OdmHeader;
          }
        }
        namespace utils {
          class FileFormat;
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
    class Appendable;
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
          namespace odm {
            namespace ocm {

              class EphemerisOcmWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_b841797e4355eabe,
                  mid_write_12ce9ebfe43ac6e6,
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
