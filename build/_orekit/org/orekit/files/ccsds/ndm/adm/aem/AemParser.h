#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemParser_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

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
            namespace aem {
              class AemParser;
              class Aem;
            }
            class AdmHeader;
          }
        }
        namespace utils {
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
                  mid_build_1866fa061237087b,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_880defc2f8f9f844,
                  mid_inData_89b302893bdbe1f1,
                  mid_inHeader_89b302893bdbe1f1,
                  mid_inMetadata_89b302893bdbe1f1,
                  mid_parse_ddfc9cfbbf6a749c,
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
