#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemParser_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
      class DataSource;
    }
    namespace utils {
      class IERSConventions;
    }
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
                  mid_build_41dbf5f5dbc535bb,
                  mid_finalizeData_b108b35ef48e27bd,
                  mid_finalizeHeader_b108b35ef48e27bd,
                  mid_finalizeMetadata_b108b35ef48e27bd,
                  mid_getHeader_3423aca890fca0cd,
                  mid_inData_b108b35ef48e27bd,
                  mid_inHeader_b108b35ef48e27bd,
                  mid_inMetadata_b108b35ef48e27bd,
                  mid_parse_6aaadb6771c9dc74,
                  mid_prepareData_b108b35ef48e27bd,
                  mid_prepareHeader_b108b35ef48e27bd,
                  mid_prepareMetadata_b108b35ef48e27bd,
                  mid_reset_e250621f009e45db,
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
