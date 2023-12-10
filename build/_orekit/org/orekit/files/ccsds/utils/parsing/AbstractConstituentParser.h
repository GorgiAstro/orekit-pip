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
                mid_finalizeData_b108b35ef48e27bd,
                mid_finalizeHeader_b108b35ef48e27bd,
                mid_finalizeMetadata_b108b35ef48e27bd,
                mid_getConventions_60f9ded87ab7ca4c,
                mid_getDataContext_0b7cf48ee6a922ee,
                mid_getHeader_0e1b4a5061fb71d6,
                mid_getParsedUnitsBehavior_8df14555f7513c0c,
                mid_inData_b108b35ef48e27bd,
                mid_inHeader_b108b35ef48e27bd,
                mid_inMetadata_b108b35ef48e27bd,
                mid_isSimpleEOP_b108b35ef48e27bd,
                mid_prepareData_b108b35ef48e27bd,
                mid_prepareHeader_b108b35ef48e27bd,
                mid_prepareMetadata_b108b35ef48e27bd,
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
