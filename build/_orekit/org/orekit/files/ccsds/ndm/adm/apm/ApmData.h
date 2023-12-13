#ifndef org_orekit_files_ccsds_ndm_adm_apm_ApmData_H
#define org_orekit_files_ccsds_ndm_adm_apm_ApmData_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              class ApmQuaternion;
              class SpinStabilized;
              class Inertia;
              class Euler;
              class Maneuver;
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
    namespace utils {
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
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
                  mid_init$_c9d5491d174d1eb2,
                  mid_addManeuver_f1ad24c585be4032,
                  mid_getAngularVelocityBlock_a664b9618d8007a9,
                  mid_getAttitude_0aeff0f42eb90e75,
                  mid_getComments_e62d3bb06d56d7e3,
                  mid_getEpoch_c325492395d89b24,
                  mid_getEulerBlock_a7c668c67fab35b8,
                  mid_getInertiaBlock_9d04d713e2db017a,
                  mid_getManeuver_0a5a3b3bba59a2a1,
                  mid_getManeuvers_e62d3bb06d56d7e3,
                  mid_getNbManeuvers_55546ef6a647f39b,
                  mid_getQuaternionBlock_bfe60d66e480f06b,
                  mid_getSpinStabilizedBlock_957b702a7fb38e4f,
                  mid_hasManeuvers_9ab94ac1dc23b105,
                  mid_validate_8ba9fe7a847cecad,
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
