#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmParser_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

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
        namespace ndm {
          namespace adm {
            namespace apm {
              class ApmParser;
              class Apm;
            }
            class AdmHeader;
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
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
          namespace adm {
            namespace apm {

              class ApmParser : public ::org::orekit::files::ccsds::ndm::adm::AdmParser {
               public:
                enum {
                  mid_build_bbe3a1c434f459ae,
                  mid_finalizeData_b108b35ef48e27bd,
                  mid_finalizeHeader_b108b35ef48e27bd,
                  mid_finalizeMetadata_b108b35ef48e27bd,
                  mid_getHeader_58c0f76fc10a27f5,
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

                explicit ApmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ApmParser(const ApmParser& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {}

                ::org::orekit::files::ccsds::ndm::adm::apm::Apm build() const;
                jboolean finalizeData() const;
                jboolean finalizeHeader() const;
                jboolean finalizeMetadata() const;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader getHeader() const;
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
          namespace adm {
            namespace apm {
              extern PyType_Def PY_TYPE_DEF(ApmParser);
              extern PyTypeObject *PY_TYPE(ApmParser);

              class t_ApmParser {
              public:
                PyObject_HEAD
                ApmParser object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_ApmParser *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ApmParser&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ApmParser&, PyTypeObject *, PyTypeObject *);
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
