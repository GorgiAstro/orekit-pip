#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmData_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class KeplerianElements;
            class UserDefined;
            class StateVector;
            class SpacecraftParameters;
            namespace opm {
              class Maneuver;
            }
            class CartesianCovariance;
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
                  mid_init$_2effa3f20002c99c,
                  mid_getCovarianceBlock_5a3868cb67b566ca,
                  mid_getKeplerianElementsBlock_5ef7d45a76a827d2,
                  mid_getManeuver_c348bbaee3991177,
                  mid_getManeuvers_a6156df500549a58,
                  mid_getMass_456d9a2f64d6b28d,
                  mid_getNbManeuvers_f2f64475e4580546,
                  mid_getSpacecraftParametersBlock_df8be17b569173ba,
                  mid_getStateVectorBlock_f5a5aa01774b47f8,
                  mid_getUserDefinedBlock_dc0ba09fd1c52b52,
                  mid_hasManeuvers_e470b6d9e0d979db,
                  mid_validate_77e0f9a1f260e2e5,
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
