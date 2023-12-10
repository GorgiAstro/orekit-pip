#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmParser_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
          }
          class FileFormat;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmParser;
              class Ocm;
            }
            class OdmHeader;
          }
          class ParsedUnitsBehavior;
        }
      }
      namespace general {
        class EphemerisFileParser;
      }
    }
    namespace data {
      class DataSource;
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
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

              class OcmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_678bb31515c82aba,
                  mid_finalizeData_e470b6d9e0d979db,
                  mid_finalizeHeader_e470b6d9e0d979db,
                  mid_finalizeMetadata_e470b6d9e0d979db,
                  mid_getHeader_720b26b998d380f3,
                  mid_getSpecialXmlElementsBuilders_d6753b7055940a54,
                  mid_inData_e470b6d9e0d979db,
                  mid_inHeader_e470b6d9e0d979db,
                  mid_inMetadata_e470b6d9e0d979db,
                  mid_parse_642c909e98fcb86c,
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
