#ifndef org_orekit_files_ccsds_ndm_odm_ocm_Ocm_H
#define org_orekit_files_ccsds_ndm_odm_ocm_Ocm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmMetadata;
              class OcmData;
              class OcmSatelliteEphemeris;
              class TrajectoryStateHistory;
            }
            class OdmHeader;
          }
        }
        namespace section {
          class Segment;
        }
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
    }
    namespace data {
      class DataContext;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class Ocm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_9639e27fba1a1f36,
                  mid_getData_af84f99ccaa2105d,
                  mid_getMetadata_e957b96fac0918bd,
                  mid_getSatellites_810bed48fafb0b9a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Ocm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Ocm(const Ocm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *COV_LINE;
                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *MAN_LINE;
                static ::java::lang::String *ROOT;
                static ::java::lang::String *TRAJ_LINE;
                static ::java::lang::String *UNKNOWN_OBJECT;

                Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, jdouble);

                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData getData() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata getMetadata() const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(Ocm);
              extern PyTypeObject *PY_TYPE(Ocm);

              class t_Ocm {
              public:
                PyObject_HEAD
                Ocm object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Ocm *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Ocm&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Ocm&, PyTypeObject *, PyTypeObject *);
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
