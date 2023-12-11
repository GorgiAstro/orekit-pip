#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmData_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              class Inertia;
              class AngularVelocity;
              class SpinStabilized;
              class Maneuver;
              class Euler;
              class ApmQuaternion;
            }
          }
        }
        namespace section {
          class CommentsContainer;
          class Data;
        }
      }
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class Attitude;
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
                  mid_init$_d076a969b76543d3,
                  mid_addManeuver_97d51943868d9ed6,
                  mid_getAngularVelocityBlock_06f6fa90aa75a35a,
                  mid_getAttitude_01bb94f66a53b35f,
                  mid_getComments_0d9551367f7ecdef,
                  mid_getEpoch_7a97f7e149e79afb,
                  mid_getEulerBlock_fbcd84ef1de4cd5e,
                  mid_getInertiaBlock_3fe2d2b2719cb298,
                  mid_getManeuver_2b0d6c2893b478cf,
                  mid_getManeuvers_0d9551367f7ecdef,
                  mid_getNbManeuvers_412668abc8d889e9,
                  mid_getQuaternionBlock_4bf964b085beb1a5,
                  mid_getSpinStabilizedBlock_5fd684779f02edc8,
                  mid_hasManeuvers_89b302893bdbe1f1,
                  mid_validate_10f281d777284cea,
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
