#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemParser_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFileParser;
      }
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
            namespace aem {
              class AemParser;
              class Aem;
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
      class DataContext;
      class DataSource;
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
          namespace adm {
            namespace aem {

              class AemParser : public ::org::orekit::files::ccsds::ndm::adm::AdmParser {
               public:
                enum {
                  mid_build_b1fdeef735795f49,
                  mid_finalizeData_b108b35ef48e27bd,
                  mid_finalizeHeader_b108b35ef48e27bd,
                  mid_finalizeMetadata_b108b35ef48e27bd,
                  mid_getHeader_58c0f76fc10a27f5,
                  mid_inData_b108b35ef48e27bd,
                  mid_inHeader_b108b35ef48e27bd,
                  mid_inMetadata_b108b35ef48e27bd,
                  mid_parse_cbb98714a27bf09f,
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

                explicit AemParser(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemParser(const AemParser& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::adm::aem::Aem build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader getHeader() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem parse(const ::org::orekit::data::DataSource &) const;
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemParser);
              extern PyTypeObject *PY_TYPE(AemParser);

              class t_AemParser {
              public:
                PyObject_HEAD
                AemParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_AemParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AemParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AemParser&, PyTypeObject *, PyTypeObject *);
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
