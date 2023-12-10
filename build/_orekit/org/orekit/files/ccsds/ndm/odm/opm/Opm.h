#ifndef org_orekit_files_ccsds_ndm_odm_opm_Opm_H
#define org_orekit_files_ccsds_ndm_odm_opm_Opm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              class OpmData;
              class Maneuver;
            }
            class OdmHeader;
            class OdmCommonMetadata;
          }
        }
        namespace section {
          class Segment;
        }
      }
    }
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
    }
    namespace orbits {
      class CartesianOrbit;
      class KeplerianOrbit;
    }
    namespace propagation {
      class SpacecraftState;
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
          namespace odm {
            namespace opm {

              class Opm : public ::org::orekit::files::ccsds::ndm::NdmConstituent {
               public:
                enum {
                  mid_init$_c312acee610c8d08,
                  mid_generateCartesianOrbit_7b54ade357cb34f6,
                  mid_generateKeplerianOrbit_073190698893349f,
                  mid_generateSpacecraftState_dd3e4a8d51055f1f,
                  mid_getData_68c414576c8d207e,
                  mid_getDate_aaa854c403487cf3,
                  mid_getManeuver_c348bbaee3991177,
                  mid_getManeuvers_a6156df500549a58,
                  mid_getMetadata_e7e2c53afeab821b,
                  mid_getNbManeuvers_f2f64475e4580546,
                  mid_getPVCoordinates_6890805957bea2cd,
                  mid_hasManeuvers_e470b6d9e0d979db,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Opm(jobject obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Opm(const Opm& obj) : ::org::orekit::files::ccsds::ndm::NdmConstituent(obj) {}

                static ::java::lang::String *FORMAT_VERSION_KEY;
                static ::java::lang::String *ROOT;

                Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader &, const ::java::util::List &, const ::org::orekit::utils::IERSConventions &, const ::org::orekit::data::DataContext &, jdouble);

                ::org::orekit::orbits::CartesianOrbit generateCartesianOrbit() const;
                ::org::orekit::orbits::KeplerianOrbit generateKeplerianOrbit() const;
                ::org::orekit::propagation::SpacecraftState generateSpacecraftState() const;
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData getData() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver getManeuver(jint) const;
                ::java::util::List getManeuvers() const;
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata getMetadata() const;
                jint getNbManeuvers() const;
                ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates() const;
                jboolean hasManeuvers() const;
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
            namespace opm {
              extern PyType_Def PY_TYPE_DEF(Opm);
              extern PyTypeObject *PY_TYPE(Opm);

              class t_Opm {
              public:
                PyObject_HEAD
                Opm object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_Opm *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const Opm&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const Opm&, PyTypeObject *, PyTypeObject *);
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
