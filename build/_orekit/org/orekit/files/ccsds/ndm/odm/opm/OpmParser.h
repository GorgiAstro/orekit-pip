#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              class Opm;
              class OpmParser;
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
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace time {
      class AbsoluteDate;
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
            namespace opm {

              class OpmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_83ca4b0a6886ddd3,
                  mid_finalizeData_9ab94ac1dc23b105,
                  mid_finalizeHeader_9ab94ac1dc23b105,
                  mid_finalizeMetadata_9ab94ac1dc23b105,
                  mid_getHeader_de29107d9fd9c097,
                  mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a,
                  mid_inData_9ab94ac1dc23b105,
                  mid_inHeader_9ab94ac1dc23b105,
                  mid_inMetadata_9ab94ac1dc23b105,
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

                explicit OpmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OpmParser(const OpmParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::odm::opm::Opm build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
                ::java::util::Map getSpecialXmlElementsBuilders() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
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
            namespace opm {
              extern PyType_Def PY_TYPE_DEF(OpmParser);
              extern PyTypeObject *PY_TYPE(OpmParser);

              class t_OpmParser {
              public:
                PyObject_HEAD
                OpmParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OpmParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OpmParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OpmParser&, PyTypeObject *, PyTypeObject *);
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
