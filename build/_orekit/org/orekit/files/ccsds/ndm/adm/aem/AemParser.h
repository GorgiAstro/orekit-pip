#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemParser_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemParser_H

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
            namespace aem {
              class AemParser;
              class Aem;
            }
            class AdmHeader;
          }
          class ParsedUnitsBehavior;
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
                  mid_build_352880c624bcf4a1,
                  mid_finalizeData_eee3de00fe971136,
                  mid_finalizeHeader_eee3de00fe971136,
                  mid_finalizeMetadata_eee3de00fe971136,
                  mid_getHeader_6b8c194dac7b9184,
                  mid_inData_eee3de00fe971136,
                  mid_inHeader_eee3de00fe971136,
                  mid_inMetadata_eee3de00fe971136,
                  mid_parse_fe00e53a07a6592a,
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
