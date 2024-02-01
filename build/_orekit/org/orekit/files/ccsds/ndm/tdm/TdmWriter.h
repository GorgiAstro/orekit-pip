#ifndef org_orekit_files_ccsds_ndm_tdm_TdmWriter_H
#define org_orekit_files_ccsds_ndm_tdm_TdmWriter_H

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
          namespace tdm {
            class Tdm;
            class TdmHeader;
            class RangeUnitsConverter;
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
          namespace tdm {

            class TdmWriter : public ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter {
             public:
              enum {
                mid_init$_335e456c2be37fcf,
                mid_writeSegmentContent_305aa7864995b122,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TdmWriter(jobject obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TdmWriter(const TdmWriter& obj) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(obj) {}

              static jdouble CCSDS_TDM_VERS;
              static jint KVN_PADDING_WIDTH;

              TdmWriter(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &);
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
            extern PyType_Def PY_TYPE_DEF(TdmWriter);
            extern PyTypeObject *PY_TYPE(TdmWriter);

            class t_TdmWriter {
            public:
              PyObject_HEAD
              TdmWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_TdmWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const TdmWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const TdmWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
