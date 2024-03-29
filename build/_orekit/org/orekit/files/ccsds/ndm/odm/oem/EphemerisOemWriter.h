#ifndef org_orekit_files_ccsds_ndm_odm_oem_EphemerisOemWriter_H
#define org_orekit_files_ccsds_ndm_odm_oem_EphemerisOemWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile;
        class EphemerisFile$EphemerisSegment;
        class EphemerisFileWriter;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemMetadata;
              class OemWriter;
            }
            class OdmHeader;
          }
        }
        namespace utils {
          class FileFormat;
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
            namespace oem {

              class EphemerisOemWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_ea551678138489b1,
                  mid_write_12ce9ebfe43ac6e6,
                  mid_writeSegment_9fe3766494d1e809,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EphemerisOemWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                EphemerisOemWriter(const EphemerisOemWriter& obj) : ::java::lang::Object(obj) {}

                EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter &, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata &, const ::org::orekit::files::ccsds::utils::FileFormat &, const ::java::lang::String &, jdouble, jint);

                void write(const ::java::lang::Appendable &, const ::org::orekit::files::general::EphemerisFile &) const;
                void writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment &) const;
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
              extern PyType_Def PY_TYPE_DEF(EphemerisOemWriter);
              extern PyTypeObject *PY_TYPE(EphemerisOemWriter);

              class t_EphemerisOemWriter {
              public:
                PyObject_HEAD
                EphemerisOemWriter object;
                static PyObject *wrap_Object(const EphemerisOemWriter&);
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
