#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmData_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Data;
          class CommentsContainer;
        }
        namespace ndm {
          namespace adm {
            namespace apm {
              class ApmQuaternion;
              class Inertia;
              class Maneuver;
              class AngularVelocity;
              class Euler;
              class SpinStabilized;
            }
          }
        }
      }
    }
    namespace attitudes {
      class Attitude;
    }
    namespace frames {
      class Frame;
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
                  mid_init$_a2df71d5b124c9b9,
                  mid_addManeuver_ff54c6b9e53ef2cf,
                  mid_getAngularVelocityBlock_9d728f0071a6aee8,
                  mid_getAttitude_d44cfca563ece87b,
                  mid_getComments_2afa36052df4765d,
                  mid_getEpoch_85703d13e302437e,
                  mid_getEulerBlock_15e988127d1d4e98,
                  mid_getInertiaBlock_4f694b9dd2b080cf,
                  mid_getManeuver_e35b80d65cc7de9d,
                  mid_getManeuvers_2afa36052df4765d,
                  mid_getNbManeuvers_570ce0828f81a2c1,
                  mid_getQuaternionBlock_7ac169a957cf30f9,
                  mid_getSpinStabilizedBlock_6f5c74988a32b146,
                  mid_hasManeuvers_b108b35ef48e27bd,
                  mid_validate_17db3a65980d3441,
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
