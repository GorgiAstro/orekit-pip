#ifndef org_orekit_files_ccsds_ndm_odm_oem_OemParser_H
#define org_orekit_files_ccsds_ndm_odm_oem_OemParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class OemParser;
              class Oem;
            }
            class OdmHeader;
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
      namespace general {
        class EphemerisFileParser;
      }
    }
    namespace data {
      class DataSource;
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
          namespace odm {
            namespace oem {

              class OemParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
               public:
                enum {
                  mid_build_22885fb1ea7d5833,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_d7722dc369ae0874,
                  mid_inData_89b302893bdbe1f1,
                  mid_inHeader_89b302893bdbe1f1,
                  mid_inMetadata_89b302893bdbe1f1,
                  mid_parse_b41e0aee65ea46fa,
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

                explicit OemParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OemParser(const OemParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::odm::oem::Oem build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
                jboolean inData() const;
                jboolean inHeader() const;
                jboolean inMetadata() const;
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem parse(const ::org::orekit::data::DataSource &) const;
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
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(OemParser);
              extern PyTypeObject *PY_TYPE(OemParser);

              class t_OemParser {
              public:
                PyObject_HEAD
                OemParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_OemParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OemParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OemParser&, PyTypeObject *, PyTypeObject *);
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
