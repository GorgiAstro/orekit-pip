#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class XmlTokenBuilder;
          }
          class FileFormat;
        }
        namespace ndm {
          namespace odm {
            class OdmHeader;
            namespace opm {
              class Opm;
              class OpmParser;
            }
          }
          class ParsedUnitsBehavior;
        }
      }
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
                  mid_build_345001f3179e1657,
                  mid_finalizeData_eee3de00fe971136,
                  mid_finalizeHeader_eee3de00fe971136,
                  mid_finalizeMetadata_eee3de00fe971136,
                  mid_getHeader_662984e7008bcc88,
                  mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d,
                  mid_inData_eee3de00fe971136,
                  mid_inHeader_eee3de00fe971136,
                  mid_inMetadata_eee3de00fe971136,
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
