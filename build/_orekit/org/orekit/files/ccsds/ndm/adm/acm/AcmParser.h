#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

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
          namespace adm {
            namespace acm {
              class AcmParser;
              class Acm;
            }
            class AdmHeader;
          }
          class ParsedUnitsBehavior;
        }
      }
      namespace general {
        class AttitudeEphemerisFileParser;
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
          namespace adm {
            namespace acm {

              class AcmParser : public ::org::orekit::files::ccsds::ndm::adm::AdmParser {
               public:
                enum {
                  mid_build_fe21b0b85e8b60d9,
                  mid_finalizeData_e470b6d9e0d979db,
                  mid_finalizeHeader_e470b6d9e0d979db,
                  mid_finalizeMetadata_e470b6d9e0d979db,
                  mid_getHeader_c489cac8f838b2e9,
                  mid_getSpecialXmlElementsBuilders_d6753b7055940a54,
                  mid_inData_e470b6d9e0d979db,
                  mid_inHeader_e470b6d9e0d979db,
                  mid_inMetadata_e470b6d9e0d979db,
                  mid_parse_7c784a34c8278ccf,
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

                explicit AcmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmParser(const AcmParser& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::adm::acm::Acm build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader getHeader() const;
                ::java::util::Map getSpecialXmlElementsBuilders() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm parse(const ::org::orekit::data::DataSource &) const;
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmParser);
              extern PyTypeObject *PY_TYPE(AcmParser);

              class t_AcmParser {
              public:
                PyObject_HEAD
                AcmParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_AcmParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AcmParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AcmParser&, PyTypeObject *, PyTypeObject *);
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
