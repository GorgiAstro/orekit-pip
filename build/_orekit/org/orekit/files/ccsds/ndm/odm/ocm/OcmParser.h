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
    namespace data {
      class DataSource;
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          namespace odm {
            namespace ocm {
              class OcmParser;
              class Ocm;
            }
            class OdmHeader;
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
        class EphemerisFileParser;
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
          namespace odm {
            namespace ocm {

              class OcmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_65119184c47c28d4,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_d7722dc369ae0874,
                  mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                  mid_inData_89b302893bdbe1f1,
                  mid_inHeader_89b302893bdbe1f1,
                  mid_inMetadata_89b302893bdbe1f1,
                  mid_parse_17620dfc90b03975,
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
