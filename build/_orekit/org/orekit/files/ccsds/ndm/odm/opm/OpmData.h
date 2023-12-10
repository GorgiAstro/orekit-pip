#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmData_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class SpacecraftParameters;
            class KeplerianElements;
            class CartesianCovariance;
            namespace opm {
              class Maneuver;
            }
            class UserDefined;
            class StateVector;
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
                  mid_init$_6f39f621f1439de3,
                  mid_getCovarianceBlock_cf101600575330c7,
                  mid_getKeplerianElementsBlock_c379fe2f6979132e,
                  mid_getManeuver_7e1ee5600d637967,
                  mid_getManeuvers_2afa36052df4765d,
                  mid_getMass_dff5885c2c873297,
                  mid_getNbManeuvers_570ce0828f81a2c1,
                  mid_getSpacecraftParametersBlock_60188820d73f1019,
                  mid_getStateVectorBlock_59e2ee0a61476728,
                  mid_getUserDefinedBlock_8d3e5fabdafb8483,
                  mid_hasManeuvers_b108b35ef48e27bd,
                  mid_validate_17db3a65980d3441,
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
