#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmParser_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
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
              class Ocm;
              class OcmParser;
            }
            class OdmHeader;
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
          }
          class FileFormat;
        }
      }
      namespace general {
        class EphemerisFileParser;
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
      class DataSource;
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

              class OcmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_bc04ab0415e87bf0,
                  mid_finalizeData_b108b35ef48e27bd,
                  mid_finalizeHeader_b108b35ef48e27bd,
                  mid_finalizeMetadata_b108b35ef48e27bd,
                  mid_getHeader_3423aca890fca0cd,
                  mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465,
                  mid_inData_b108b35ef48e27bd,
                  mid_inHeader_b108b35ef48e27bd,
                  mid_inMetadata_b108b35ef48e27bd,
                  mid_parse_27e6cf460659cd7c,
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

                explicit OcmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmParser(const OcmParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
                ::java::util::Map getSpecialXmlElementsBuilders() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm parse(const ::org::orekit::data::DataSource &) const;
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
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmParser);
              extern PyTypeObject *PY_TYPE(OcmParser);

              class t_OcmParser {
              public:
                PyObject_HEAD
                OcmParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OcmParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OcmParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OcmParser&, PyTypeObject *, PyTypeObject *);
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
