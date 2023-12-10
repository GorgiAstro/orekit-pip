#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemParser_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFileParser;
      }
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmHeader;
            namespace oem {
              class Oem;
              class OemParser;
            }
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace data {
      class DataSource;
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
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

              class OemParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_6d486fddb64861be,
                  mid_finalizeData_e470b6d9e0d979db,
                  mid_finalizeHeader_e470b6d9e0d979db,
                  mid_finalizeMetadata_e470b6d9e0d979db,
                  mid_getHeader_720b26b998d380f3,
                  mid_inData_e470b6d9e0d979db,
                  mid_inHeader_e470b6d9e0d979db,
                  mid_inMetadata_e470b6d9e0d979db,
                  mid_parse_cd6052b624eba070,
                  mid_prepareData_e470b6d9e0d979db,
                  mid_prepareHeader_e470b6d9e0d979db,
                  mid_prepareMetadata_e470b6d9e0d979db,
                  mid_reset_052c3a3464b50355,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OemParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemParser(const OemParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::odm::oem::Oem build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem parse(const ::org::orekit::data::DataSource &) const;
                jboolean prepareData() const;
                jboolean prepareHeader() const;
                jboolean prepareMetadata() const;
                void reset(const ::org::orekit::files::ccsds::utils::FileFormat &) const;
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
              extern PyType_Def PY_TYPE_DEF(OemParser);
              extern PyTypeObject *PY_TYPE(OemParser);

              class t_OemParser {
              public:
                PyObject_HEAD
                OemParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OemParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OemParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OemParser&, PyTypeObject *, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
