#ifndef org_orekit_files_ccsds_ndm_tdm_TdmParser_H
#define org_orekit_files_ccsds_ndm_tdm_TdmParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
        }
        namespace ndm {
          namespace tdm {
            class Tdm;
            class TdmParser;
            class TdmHeader;
            class RangeUnitsConverter;
          }
          class ParsedUnitsBehavior;
        }
      }
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
                mid_build_cd716eaefbd82b27,
                mid_finalizeData_e470b6d9e0d979db,
                mid_finalizeHeader_e470b6d9e0d979db,
                mid_finalizeMetadata_e470b6d9e0d979db,
                mid_getHeader_9737196e7d067d1b,
                mid_inData_e470b6d9e0d979db,
                mid_inHeader_e470b6d9e0d979db,
                mid_inMetadata_e470b6d9e0d979db,
                mid_prepareData_e470b6d9e0d979db,
                mid_prepareHeader_e470b6d9e0d979db,
                mid_prepareMetadata_e470b6d9e0d979db,
                mid_reset_052c3a3464b50355,
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
