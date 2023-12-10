#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmParser_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          namespace odm {
            namespace omm {
              class Omm;
              class OmmParser;
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
    namespace data {
      class DataContext;
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
            namespace omm {

              class OmmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_3b62d6c77349b661,
                  mid_finalizeData_b108b35ef48e27bd,
                  mid_finalizeHeader_b108b35ef48e27bd,
                  mid_finalizeMetadata_b108b35ef48e27bd,
                  mid_getHeader_3423aca890fca0cd,
                  mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465,
                  mid_inData_b108b35ef48e27bd,
                  mid_inHeader_b108b35ef48e27bd,
                  mid_inMetadata_b108b35ef48e27bd,
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

                explicit OmmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmParser(const OmmParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::odm::omm::Omm build() const;
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmParser);
              extern PyTypeObject *PY_TYPE(OmmParser);

              class t_OmmParser {
              public:
                PyObject_HEAD
                OmmParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OmmParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OmmParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OmmParser&, PyTypeObject *, PyTypeObject *);
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
