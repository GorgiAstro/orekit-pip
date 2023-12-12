#ifndef org_orekit_files_ccsds_ndm_cdm_CdmParser_H
#define org_orekit_files_ccsds_ndm_cdm_CdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class Cdm;
            class CdmHeader;
            class CdmParser;
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
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
          namespace cdm {

            class CdmParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser {
             public:
              enum {
                mid_build_b402fdf8b50ee808,
                mid_finalizeData_89b302893bdbe1f1,
                mid_finalizeHeader_89b302893bdbe1f1,
                mid_finalizeMetadata_89b302893bdbe1f1,
                mid_getHeader_b9986681911b0c56,
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

              explicit CdmParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmParser(const CdmParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {}

              ::org::orekit::files::ccsds::ndm::cdm::Cdm build() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader getHeader() const;
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

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmParser);
            extern PyTypeObject *PY_TYPE(CdmParser);

            class t_CdmParser {
            public:
              PyObject_HEAD
              CdmParser object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_CdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CdmParser&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
