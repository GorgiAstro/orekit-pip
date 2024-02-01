#ifndef org_orekit_files_ccsds_utils_parsing_AbstractConstituentParser_H
#define org_orekit_files_ccsds_utils_parsing_AbstractConstituentParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"

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
        namespace section {
          class Header;
        }
        namespace ndm {
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
        namespace utils {
          namespace parsing {

            class AbstractConstituentParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser {
             public:
              enum {
                mid_finalizeData_eee3de00fe971136,
                mid_finalizeHeader_eee3de00fe971136,
                mid_finalizeMetadata_eee3de00fe971136,
                mid_getConventions_635853a14837ea6f,
                mid_getDataContext_66ee964ea58dd871,
                mid_getHeader_a5bdfcd14307795f,
                mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7,
                mid_inData_eee3de00fe971136,
                mid_inHeader_eee3de00fe971136,
                mid_inMetadata_eee3de00fe971136,
                mid_isSimpleEOP_eee3de00fe971136,
                mid_prepareData_eee3de00fe971136,
                mid_prepareHeader_eee3de00fe971136,
                mid_prepareMetadata_eee3de00fe971136,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractConstituentParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractConstituentParser(const AbstractConstituentParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser(obj) {}

              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::utils::IERSConventions getConventions() const;
              ::org::orekit::data::DataContext getDataContext() const;
              ::org::orekit::files::ccsds::section::Header getHeader() const;
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior getParsedUnitsBehavior() const;
              jboolean inData() const;
              jboolean inHeader() const;
              jboolean inMetadata() const;
              jboolean isSimpleEOP() const;
              jboolean prepareData() const;
              jboolean prepareHeader() const;
              jboolean prepareMetadata() const;
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
        namespace utils {
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(AbstractConstituentParser);
            extern PyTypeObject *PY_TYPE(AbstractConstituentParser);

            class t_AbstractConstituentParser {
            public:
              PyObject_HEAD
              AbstractConstituentParser object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_AbstractConstituentParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractConstituentParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractConstituentParser&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
