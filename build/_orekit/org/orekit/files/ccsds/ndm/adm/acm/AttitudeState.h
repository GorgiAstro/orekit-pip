#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeState_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeElementsType;
              class RateElementsType;
            }
          }
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
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
                  mid_init$_aba7050cfb4f77b8,
                  mid_getAttitudeType_ec3c84a694477494,
                  mid_getAvailableDerivatives_c14c1c09874639c8,
                  mid_getDate_aaa854c403487cf3,
                  mid_getElements_7cdc325af0834901,
                  mid_getRateElementsType_6a98691d179a0a11,
                  mid_toAngular_c59ccb47b97ee649,
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
