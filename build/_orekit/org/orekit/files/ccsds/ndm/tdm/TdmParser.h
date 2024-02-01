#ifndef org_orekit_files_ccsds_ndm_tdm_TdmParser_H
#define org_orekit_files_ccsds_ndm_tdm_TdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TdmParser;
            class Tdm;
            class TdmHeader;
            class RangeUnitsConverter;
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
          namespace tdm {

            class TdmParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser {
             public:
              enum {
                mid_build_d36752ff95a8a459,
                mid_finalizeData_eee3de00fe971136,
                mid_finalizeHeader_eee3de00fe971136,
                mid_finalizeMetadata_eee3de00fe971136,
                mid_getHeader_d6fe92edb6cf381f,
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

              explicit TdmParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmParser(const TdmParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {}

              ::org::orekit::files::ccsds::ndm::tdm::Tdm build() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader getHeader() const;
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
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(TdmParser);
            extern PyTypeObject *PY_TYPE(TdmParser);

            class t_TdmParser {
            public:
              PyObject_HEAD
              TdmParser object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_TdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TdmParser&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
