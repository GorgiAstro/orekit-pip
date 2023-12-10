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
              class Maneuver;
              class Euler;
              class ApmQuaternion;
              class Inertia;
              class SpinStabilized;
              class AngularVelocity;
            }
          }
        }
        namespace section {
          class Data;
          class CommentsContainer;
        }
      }
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
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_a3b345dc2e5e217e,
                  mid_addManeuver_2cacb852abdd9ab2,
                  mid_getAngularVelocityBlock_823b754c89de7444,
                  mid_getAttitude_c9f7c61258637afb,
                  mid_getComments_a6156df500549a58,
                  mid_getEpoch_aaa854c403487cf3,
                  mid_getEulerBlock_301234b29a78b283,
                  mid_getInertiaBlock_088066ecce55e9da,
                  mid_getManeuver_772b477dd100a5e5,
                  mid_getManeuvers_a6156df500549a58,
                  mid_getNbManeuvers_f2f64475e4580546,
                  mid_getQuaternionBlock_3c083987606cd635,
                  mid_getSpinStabilizedBlock_dbe935df64fa91c5,
                  mid_hasManeuvers_e470b6d9e0d979db,
                  mid_validate_77e0f9a1f260e2e5,
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
