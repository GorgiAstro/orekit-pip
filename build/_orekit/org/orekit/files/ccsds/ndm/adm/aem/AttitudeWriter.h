#ifndef org_orekit_files_ccsds_ndm_adm_aem_AttitudeWriter_H
#define org_orekit_files_ccsds_ndm_adm_aem_AttitudeWriter_H

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
        namespace utils {
          class FileFormat;
        }
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemWriter;
              class AemMetadata;
            }
            class AdmHeader;
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile;
        class AttitudeEphemerisFileWriter;
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
          namespace adm {
            namespace aem {

              class AttitudeWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_c48c8a784d3f8fab,
                  mid_write_14fbf989f0a2cdb3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeWriter(const AttitudeWriter& obj) : ::java::lang::Object(obj) {}

                AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter &, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata &, const ::org::orekit::files::ccsds::utils::FileFormat &, const ::java::lang::String &, jdouble, jint);

                void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::AttitudeEphemerisFile &) const;
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
              extern PyType_Def PY_TYPE_DEF(AttitudeWriter);
              extern PyTypeObject *PY_TYPE(AttitudeWriter);

              class t_AttitudeWriter {
              public:
                PyObject_HEAD
                AttitudeWriter object;
                static PyObject *wrap_Object(const AttitudeWriter&);
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
