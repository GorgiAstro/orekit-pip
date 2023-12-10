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
      class TimeStampedAngularCoordinates;
      class IERSConventions;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class AemSegment;
              class AemSatelliteEphemeris;
            }
            class AdmHeader;
          }
        }
      }
      namespace general {
        class AttitudeEphemerisFile;
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
                  mid_init$_61c8f32249f88749,
                  mid_getSatellites_6f5a75ccd8c04465,
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
