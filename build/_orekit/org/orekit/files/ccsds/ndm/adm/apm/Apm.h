#ifndef org_orekit_files_ccsds_ndm_adm_apm_Apm_H
#define org_orekit_files_ccsds_ndm_adm_apm_Apm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Segment;
        }
        namespace ndm {
          namespace adm {
            class AdmMetadata;
            class AdmHeader;
            namespace apm {
              class ApmData;
            }
          }
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace data {
      class DataContext;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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

              class Apm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_7ebab4e4b79b3ed3,
                  mid_getAttitude_c9f7c61258637afb,
                  mid_getData_bf6e217552aaa6b8,
                  mid_getMetadata_ae810d18785bab2b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Apm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Apm(const Apm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

                ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinatesProvider &) const;
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData getData() const;
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata getMetadata() const;
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
              extern PyType_Def PY_TYPE_DEF(Apm);
              extern PyTypeObject *PY_TYPE(Apm);

              class t_Apm {
              public:
                PyObject_HEAD
                Apm object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Apm *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Apm&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Apm&, PyTypeObject *, PyTypeObject *);
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
