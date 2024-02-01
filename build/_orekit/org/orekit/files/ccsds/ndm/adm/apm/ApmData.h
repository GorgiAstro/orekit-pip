#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmData_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class CommentsContainer;
          class Data;
        }
        namespace ndm {
          namespace adm {
            namespace apm {
              class Inertia;
              class AngularVelocity;
              class Maneuver;
              class SpinStabilized;
              class Euler;
              class ApmQuaternion;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class Attitude;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
          namespace adm {
            namespace apm {

              class ApmData : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_abbb4aa8bb4f8a57,
                  mid_addManeuver_14bdf6dc3919ab18,
                  mid_getAngularVelocityBlock_34c3506af9d52146,
                  mid_getAttitude_0a584a2048d30c01,
                  mid_getComments_d751c1a57012b438,
                  mid_getEpoch_80e11148db499dda,
                  mid_getEulerBlock_c67a0a2484d37758,
                  mid_getInertiaBlock_b71face14f681398,
                  mid_getManeuver_ea5eebdbf9aca7df,
                  mid_getManeuvers_d751c1a57012b438,
                  mid_getNbManeuvers_d6ab429752e7c267,
                  mid_getQuaternionBlock_776042c45e9edc02,
                  mid_getSpinStabilizedBlock_fa9613ab3e0993aa,
                  mid_hasManeuvers_eee3de00fe971136,
                  mid_validate_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ApmData(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ApmData(const ApmData& obj) : ::java::lang::Object(obj) {}

                ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion &, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler &, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity &, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized &, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia &);

                void addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver &) const;
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity getAngularVelocityBlock() const;
                ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinatesProvider &) const;
                ::java::util::List getComments() const;
                ::org::orekit::time::AbsoluteDate getEpoch() const;
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler getEulerBlock() const;
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia getInertiaBlock() const;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver getManeuver(jint) const;
                ::java::util::List getManeuvers() const;
                jint getNbManeuvers() const;
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion getQuaternionBlock() const;
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized getSpinStabilizedBlock() const;
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
          namespace adm {
            namespace apm {
              extern PyType_Def PY_TYPE_DEF(ApmData);
              extern PyTypeObject *PY_TYPE(ApmData);

              class t_ApmData {
              public:
                PyObject_HEAD
                ApmData object;
                static PyObject *wrap_Object(const ApmData&);
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
