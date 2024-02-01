#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
      class DataSource;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class Acm;
              class AcmParser;
            }
            class AdmHeader;
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
        class AttitudeEphemerisFileParser;
      }
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
                  mid_build_f1675a7d93255dee,
                  mid_finalizeData_eee3de00fe971136,
                  mid_finalizeHeader_eee3de00fe971136,
                  mid_finalizeMetadata_eee3de00fe971136,
                  mid_getHeader_6b8c194dac7b9184,
                  mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d,
                  mid_inData_eee3de00fe971136,
                  mid_inHeader_eee3de00fe971136,
                  mid_inMetadata_eee3de00fe971136,
                  mid_parse_d60ae6cbf486e902,
                  mid_prepareData_eee3de00fe971136,
                  mid_prepareHeader_eee3de00fe971136,
                  mid_prepareMetadata_eee3de00fe971136,
                  mid_reset_a23f5f7531d9b583,
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
