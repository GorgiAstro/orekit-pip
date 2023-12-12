#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmParser_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class ParsedUnitsBehavior;
          namespace adm {
            namespace apm {
              class ApmParser;
              class Apm;
            }
            class AdmHeader;
          }
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
                  mid_build_691c47b62bac3b4a,
                  mid_finalizeData_89b302893bdbe1f1,
                  mid_finalizeHeader_89b302893bdbe1f1,
                  mid_finalizeMetadata_89b302893bdbe1f1,
                  mid_getHeader_880defc2f8f9f844,
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
