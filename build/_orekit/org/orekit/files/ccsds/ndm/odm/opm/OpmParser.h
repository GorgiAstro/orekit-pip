#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H

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
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          namespace odm {
            namespace opm {
              class OpmParser;
              class Opm;
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
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
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
            namespace opm {

              class OpmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_8424812d0f5a0a71,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_d7722dc369ae0874,
                  mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4,
                  mid_inData_89b302893bdbe1f1,
                  mid_inHeader_89b302893bdbe1f1,
                  mid_inMetadata_89b302893bdbe1f1,
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
