#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmData_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
            class StateVector;
            namespace opm {
              class Maneuver;
            }
            class CartesianCovariance;
            class SpacecraftParameters;
            class KeplerianElements;
          }
        }
        namespace section {
          class Data;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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

              class OpmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d04007a8638a42f5,
                  mid_getCovarianceBlock_e10d3bdd874e7ebe,
                  mid_getKeplerianElementsBlock_8313e8e884b218d3,
                  mid_getManeuver_b5f4acb06008530a,
                  mid_getManeuvers_e62d3bb06d56d7e3,
                  mid_getMass_b74f83833fdad017,
                  mid_getNbManeuvers_55546ef6a647f39b,
                  mid_getSpacecraftParametersBlock_ccfacaad97346180,
                  mid_getStateVectorBlock_22b74842fb82ffba,
                  mid_getUserDefinedBlock_757fcfae3141e23d,
                  mid_hasManeuvers_9ab94ac1dc23b105,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OpmData(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OpmData(const OpmData& obj) : ::java::lang::Object(obj) {}

                OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector &, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements &, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters &, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance &, const ::java::util::List &, const ::org::orekit::files::ccsds::ndm::odm::UserDefined &, jdouble);

                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance getCovarianceBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements getKeplerianElementsBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver getManeuver(jint) const;
                ::java::util::List getManeuvers() const;
                jdouble getMass() const;
                jint getNbManeuvers() const;
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters getSpacecraftParametersBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::StateVector getStateVectorBlock() const;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined getUserDefinedBlock() const;
                jboolean hasManeuvers() const;
                void validate(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(OpmData);
              extern PyTypeObject *PY_TYPE(OpmData);

              class t_OpmData {
              public:
                PyObject_HEAD
                OpmData object;
                static PyObject *wrap_Object(const OpmData&);
                static PyObject *wrap_jobject(const jobject&);
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
