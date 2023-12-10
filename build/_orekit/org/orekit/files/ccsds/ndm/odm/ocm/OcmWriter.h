#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmWriter_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmWriter_H

#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmHeader;
            namespace ocm {
              class Ocm;
            }
          }
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
          namespace odm {
            namespace ocm {

              class OcmWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
               public:
                enum {
                  mid_init$_9d1c41cc4d1bd153,
                  mid_getEquatorialRadius_456d9a2f64d6b28d,
                  mid_getFlattening_456d9a2f64d6b28d,
                  mid_writeSegmentContent_17bd99da1e106002,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmWriter(const OcmWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

                static jdouble CCSDS_OCM_VERS;
                static jint KVN_PADDING_WIDTH;

                OcmWriter(const ::org::orekit::utils::IERSConventions &, jdouble, jdouble, const ::org::orekit::data::DataContext &);

                jdouble getEquatorialRadius() const;
                jdouble getFlattening() const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmWriter);
              extern PyTypeObject *PY_TYPE(OcmWriter);

              class t_OcmWriter {
              public:
                PyObject_HEAD
                OcmWriter object;
                PyTypeObject *parameters[3];
                static PyTypeObject **parameters_(t_OcmWriter *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OcmWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OcmWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
