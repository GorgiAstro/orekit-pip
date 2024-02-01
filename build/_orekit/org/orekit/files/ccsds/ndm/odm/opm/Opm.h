#ifndef org_orekit_files_ccsds_ndm_odm_opm_Opm_H
#define org_orekit_files_ccsds_ndm_odm_opm_Opm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
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
    namespace data {
      class DataContext;
    }
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
                  mid_init$_f1d722872d5900a5,
                  mid_generateCartesianOrbit_9d4555873fac1cba,
                  mid_generateKeplerianOrbit_05c9859fe4d10dff,
                  mid_generateSpacecraftState_8fbfa58855031235,
                  mid_getData_9ce668c51409a4b2,
                  mid_getDate_80e11148db499dda,
                  mid_getManeuver_20fdf787b4d48b4b,
                  mid_getManeuvers_d751c1a57012b438,
                  mid_getMetadata_21307208c544fcb6,
                  mid_getNbManeuvers_d6ab429752e7c267,
                  mid_getPVCoordinates_674031698a428ce8,
                  mid_hasManeuvers_eee3de00fe971136,
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
