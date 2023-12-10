#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmWriter_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmWriter_H

#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"

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
            class AdmHeader;
            namespace apm {
              class Apm;
            }
          }
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

              class ApmWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
               public:
                enum {
                  mid_init$_6f30abb95e05bcdd,
                  mid_writeSegmentContent_a4679b5cde76d825,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ApmWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ApmWriter(const ApmWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

                static jdouble CCSDS_APM_VERS;
                static jint KVN_PADDING_WIDTH;

                ApmWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, const ::org::orekit::time::AbsoluteDate &);
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
              extern PyType_Def PY_TYPE_DEF(ApmWriter);
              extern PyTypeObject *PY_TYPE(ApmWriter);

              class t_ApmWriter {
              public:
                PyObject_HEAD
                ApmWriter object;
                PyTypeObject *parameters[3];
                static PyTypeObject **parameters_(t_ApmWriter *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ApmWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ApmWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
}

#endif
