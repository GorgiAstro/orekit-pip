#ifndef org_orekit_files_ccsds_ndm_tdm_Tdm_H
#define org_orekit_files_ccsds_ndm_tdm_Tdm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Segment;
        }
        namespace ndm {
          namespace tdm {
            class TdmHeader;
            class TdmMetadata;
            class ObservationsBlock;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class Tdm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
             public:
              enum {
                mid_init$_ac37bee91ea1886e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Tdm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Tdm(const Tdm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

              static ::java::lang::String *FORMAT_VERSION_KEY;
              static ::java::lang::String *ROOT;

              Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);
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
            extern PyType_Def PY_TYPE_DEF(Tdm);
            extern PyTypeObject *PY_TYPE(Tdm);

            class t_Tdm {
            public:
              PyObject_HEAD
              Tdm object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_Tdm *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const Tdm&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const Tdm&, PyTypeObject *, PyTypeObject *);
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

#endif
