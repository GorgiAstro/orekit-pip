#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmWriter_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmWriter_H

#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              class Omm;
            }
            class OdmHeader;
          }
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
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
          namespace odm {
            namespace omm {

              class OmmWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
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

                explicit OmmWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmWriter(const OmmWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

                static jdouble CCSDS_OMM_VERS;
                static jint KVN_PADDING_WIDTH;

                OmmWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, const ::org::orekit::time::AbsoluteDate &);
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
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmWriter);
              extern PyTypeObject *PY_TYPE(OmmWriter);

              class t_OmmWriter {
              public:
                PyObject_HEAD
                OmmWriter object;
                PyTypeObject *parameters[3];
                static PyTypeObject **parameters_(t_OmmWriter *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OmmWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OmmWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
