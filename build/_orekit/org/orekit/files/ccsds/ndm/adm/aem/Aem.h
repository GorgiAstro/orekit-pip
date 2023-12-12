#ifndef org_orekit_files_ccsds_ndm_adm_aem_Aem_H
#define org_orekit_files_ccsds_ndm_adm_aem_Aem_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFile;
      }
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AdmHeader;
            namespace aem {
              class AemSatelliteEphemeris;
              class AemSegment;
            }
          }
        }
      }
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
          namespace adm {
            namespace aem {

              class Aem : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_f4c63464eb8f0477,
                  mid_getSatellites_1e62c2f73fbdd1c4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Aem(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Aem(const Aem& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &);

                ::java::util::Map getSatellites() const;
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
              extern PyType_Def PY_TYPE_DEF(Aem);
              extern PyTypeObject *PY_TYPE(Aem);

              class t_Aem {
              public:
                PyObject_HEAD
                Aem object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Aem *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Aem&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Aem&, PyTypeObject *, PyTypeObject *);
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
