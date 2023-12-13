#ifndef org_orekit_files_ccsds_ndm_odm_opm_Opm_H
#define org_orekit_files_ccsds_ndm_odm_opm_Opm_H

#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmCommonMetadata;
            namespace opm {
              class Maneuver;
              class OpmData;
            }
            class OdmHeader;
          }
        }
        namespace section {
          class Segment;
        }
      }
    }
    namespace utils {
      class IERSConventions;
      class TimeStampedPVCoordinates;
    }
    namespace data {
      class DataContext;
    }
    namespace orbits {
      class KeplerianOrbit;
      class CartesianOrbit;
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
                  mid_init$_9639e27fba1a1f36,
                  mid_generateCartesianOrbit_0e89356511a1622a,
                  mid_generateKeplerianOrbit_f50f1bbccaeb207e,
                  mid_generateSpacecraftState_9d155cc8314c99cf,
                  mid_getData_6abd8fe67a2faefe,
                  mid_getDate_c325492395d89b24,
                  mid_getManeuver_b5f4acb06008530a,
                  mid_getManeuvers_e62d3bb06d56d7e3,
                  mid_getMetadata_c7fe65359339297c,
                  mid_getNbManeuvers_55546ef6a647f39b,
                  mid_getPVCoordinates_136cc8ba23b21c29,
                  mid_hasManeuvers_9ab94ac1dc23b105,
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
