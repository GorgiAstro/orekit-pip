#ifndef org_orekit_files_ccsds_ndm_odm_ocm_Ocm_H
#define org_orekit_files_ccsds_ndm_odm_ocm_Ocm_H

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
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmSatelliteEphemeris;
              class TrajectoryStateHistory;
              class OcmData;
              class OcmMetadata;
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
                  mid_init$_2b261aaf5054b0fb,
                  mid_getData_881b04544853ed71,
                  mid_getMetadata_ad80b8a9eaa21be5,
                  mid_getSatellites_6f5a75ccd8c04465,
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
