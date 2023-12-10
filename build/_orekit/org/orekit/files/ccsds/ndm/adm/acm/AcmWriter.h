#ifndef org_orekit_files_ccsds_ndm_adm_acm_AcmWriter_H
#define org_orekit_files_ccsds_ndm_adm_acm_AcmWriter_H

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
            namespace acm {
              class Acm;
            }
            class AdmHeader;
          }
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
          namespace adm {
            namespace acm {

              class AcmWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
               public:
                enum {
                  mid_init$_80145525a2ecc4f8,
                  mid_writeSegmentContent_a4679b5cde76d825,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AcmWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AcmWriter(const AcmWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

                static jdouble CCSDS_ACM_VERS;
                static jint KVN_PADDING_WIDTH;

                AcmWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AcmWriter);
              extern PyTypeObject *PY_TYPE(AcmWriter);

              class t_AcmWriter {
              public:
                PyObject_HEAD
                AcmWriter object;
                PyTypeObject *parameters[3];
                static PyTypeObject **parameters_(t_AcmWriter *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AcmWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AcmWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
