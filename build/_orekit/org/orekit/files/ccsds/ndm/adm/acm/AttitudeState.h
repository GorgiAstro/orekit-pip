#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeState_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class RateElementsType;
              class AttitudeElementsType;
            }
          }
        }
      }
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
  }
}
namespace java {
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
            namespace acm {

              class AttitudeState : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_b70e5f4f46b7f371,
                  mid_getAttitudeType_8cc80fd874f53bfc,
                  mid_getAvailableDerivatives_410860c8cd87dc25,
                  mid_getDate_80e11148db499dda,
                  mid_getElements_be783177b060994b,
                  mid_getRateElementsType_29a8b143d426bd15,
                  mid_toAngular_ace5b88456b9b14e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeState(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeState(const AttitudeState& obj) : ::java::lang::Object(obj) {}

                AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType &, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType &, const ::org::orekit::time::AbsoluteDate &, const JArray< ::java::lang::String > &, jint);

                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType getAttitudeType() const;
                ::org::orekit::utils::AngularDerivativesFilter getAvailableDerivatives() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                JArray< jdouble > getElements() const;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType getRateElementsType() const;
                ::org::orekit::utils::TimeStampedAngularCoordinates toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudeState);
              extern PyTypeObject *PY_TYPE(AttitudeState);

              class t_AttitudeState {
              public:
                PyObject_HEAD
                AttitudeState object;
                static PyObject *wrap_Object(const AttitudeState&);
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
