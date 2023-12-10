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
              class Maneuver;
              class OpmData;
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
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_2b261aaf5054b0fb,
                  mid_generateCartesianOrbit_e5effdf9a992f1f2,
                  mid_generateKeplerianOrbit_3b8c2ada972e4fd7,
                  mid_generateSpacecraftState_c6311115fea01a34,
                  mid_getData_795b1cd6af2ec6a7,
                  mid_getDate_85703d13e302437e,
                  mid_getManeuver_7e1ee5600d637967,
                  mid_getManeuvers_2afa36052df4765d,
                  mid_getMetadata_db01ddc8c0b55b51,
                  mid_getNbManeuvers_570ce0828f81a2c1,
                  mid_getPVCoordinates_c204436deca11d94,
                  mid_hasManeuvers_b108b35ef48e27bd,
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
