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
            class SpacecraftParameters;
            namespace opm {
              class Maneuver;
            }
            class CartesianCovariance;
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
                  mid_init$_ef88bee09a3b5466,
                  mid_getCovarianceBlock_ab1f5bcd3006ffba,
                  mid_getKeplerianElementsBlock_a7b00de16bb05023,
                  mid_getManeuver_8f5fc12e3129007b,
                  mid_getManeuvers_0d9551367f7ecdef,
                  mid_getMass_557b8123390d8d0c,
                  mid_getNbManeuvers_412668abc8d889e9,
                  mid_getSpacecraftParametersBlock_ac68c68a22df72d8,
                  mid_getStateVectorBlock_76c5443b4a833bb4,
                  mid_getUserDefinedBlock_e8dd2483e310f990,
                  mid_hasManeuvers_89b302893bdbe1f1,
                  mid_validate_10f281d777284cea,
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
