#ifndef org_orekit_files_ccsds_ndm_odm_opm_OpmData_H
#define org_orekit_files_ccsds_ndm_odm_opm_OpmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class StateVector;
            class CartesianCovariance;
            class KeplerianElements;
            namespace opm {
              class Maneuver;
            }
            class UserDefined;
            class SpacecraftParameters;
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
                  mid_init$_f4ead9c0c743c5d5,
                  mid_getCovarianceBlock_2b28f441350fd9e6,
                  mid_getKeplerianElementsBlock_4af716cba10d823b,
                  mid_getManeuver_20fdf787b4d48b4b,
                  mid_getManeuvers_d751c1a57012b438,
                  mid_getMass_9981f74b2d109da6,
                  mid_getNbManeuvers_d6ab429752e7c267,
                  mid_getSpacecraftParametersBlock_36c0b14eddf66774,
                  mid_getStateVectorBlock_a573c85f4a837535,
                  mid_getUserDefinedBlock_b8dba07746e1b089,
                  mid_hasManeuvers_eee3de00fe971136,
                  mid_validate_1ad26e8c8c0cd65b,
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
