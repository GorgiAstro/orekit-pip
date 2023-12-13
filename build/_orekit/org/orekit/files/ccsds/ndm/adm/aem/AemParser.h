#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemParser_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
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
      namespace general {
        class AttitudeEphemerisFileParser;
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataSource;
      class DataContext;
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
                  mid_build_a8b0b34af1805656,
                  mid_finalizeData_9ab94ac1dc23b105,
                  mid_finalizeHeader_9ab94ac1dc23b105,
                  mid_finalizeMetadata_9ab94ac1dc23b105,
                  mid_getHeader_beec2990b8b4fe1e,
                  mid_inData_9ab94ac1dc23b105,
                  mid_inHeader_9ab94ac1dc23b105,
                  mid_inMetadata_9ab94ac1dc23b105,
                  mid_parse_c30bbb64589ab6b2,
                  mid_prepareData_9ab94ac1dc23b105,
                  mid_prepareHeader_9ab94ac1dc23b105,
                  mid_prepareMetadata_9ab94ac1dc23b105,
                  mid_reset_28163d47221b3cf7,
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
