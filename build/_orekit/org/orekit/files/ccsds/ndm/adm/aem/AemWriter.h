#ifndef org_orekit_files_ccsds_ndm_adm_aem_AemWriter_H
#define org_orekit_files_ccsds_ndm_adm_aem_AemWriter_H

#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
            namespace aem {
              class AemSegment;
              class Aem;
            }
          }
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
            namespace aem {

              class AemWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
               public:
                enum {
                  mid_init$_751257c373115a80,
                  mid_writeSegmentContent_0f6e49d0ad394f83,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AemWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AemWriter(const AemWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

                static jdouble CCSDS_AEM_VERS;
                static jint KVN_PADDING_WIDTH;

                AemWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, const ::org::orekit::time::AbsoluteDate &);
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(AemWriter);
              extern PyTypeObject *PY_TYPE(AemWriter);

              class t_AemWriter {
              public:
                PyObject_HEAD
                AemWriter object;
                PyTypeObject *parameters[3];
                static PyTypeObject **parameters_(t_AemWriter *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AemWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AemWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
