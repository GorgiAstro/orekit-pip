#ifndef org_orekit_files_ccsds_ndm_odm_opm_Opm_H
#define org_orekit_files_ccsds_ndm_odm_opm_Opm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class CartesianOrbit;
      class KeplerianOrbit;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmCommonMetadata;
            namespace opm {
              class OpmData;
              class Maneuver;
            }
            class OdmHeader;
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
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
    }
    namespace data {
      class DataContext;
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
                  mid_init$_66443a7cc3b43b5d,
                  mid_generateCartesianOrbit_0b5f23f972fe7789,
                  mid_generateKeplerianOrbit_48360cd036a5e97b,
                  mid_generateSpacecraftState_15e85d5301b90ef8,
                  mid_getData_2b9b4229a136e2bd,
                  mid_getDate_7a97f7e149e79afb,
                  mid_getManeuver_8f5fc12e3129007b,
                  mid_getManeuvers_0d9551367f7ecdef,
                  mid_getMetadata_ece27d931e37ca4f,
                  mid_getNbManeuvers_412668abc8d889e9,
                  mid_getPVCoordinates_daf15abc21907508,
                  mid_hasManeuvers_89b302893bdbe1f1,
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
