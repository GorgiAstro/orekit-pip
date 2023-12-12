#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

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
    namespace data {
      class DataSource;
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          namespace adm {
            namespace acm {
              class AcmParser;
              class Acm;
            }
            class AdmHeader;
          }
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
                  mid_build_aa18c51f374d28c4,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_880defc2f8f9f844,
                  mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                  mid_inData_89b302893bdbe1f1,
                  mid_inHeader_89b302893bdbe1f1,
                  mid_inMetadata_89b302893bdbe1f1,
                  mid_parse_8d392a346a4b149f,
                  mid_prepareData_89b302893bdbe1f1,
                  mid_prepareHeader_89b302893bdbe1f1,
                  mid_prepareMetadata_89b302893bdbe1f1,
                  mid_reset_a580586827f4ec13,
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
