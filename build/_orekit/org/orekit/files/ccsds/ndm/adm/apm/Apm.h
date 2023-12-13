#ifndef org_orekit_files_ccsds_ndm_adm_apm_Apm_H
#define org_orekit_files_ccsds_ndm_adm_apm_Apm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
            class AdmMetadata;
            namespace apm {
              class ApmData;
            }
          }
        }
        namespace section {
          class Segment;
        }
      }
    }
    namespace utils {
      class IERSConventions;
      class PVCoordinatesProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
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
                  mid_init$_9603b9963356e980,
                  mid_getAttitude_0aeff0f42eb90e75,
                  mid_getData_4a6a5b4c1dc4980d,
                  mid_getMetadata_ced3497936df7291,
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
