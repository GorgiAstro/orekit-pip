#ifndef org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H
#define org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundReceiverCommonParametersWithoutDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_29f39efa7fe2fa67,
            mid_getOffsetToInertialDownlink_631c2f99a847a383,
            mid_getState_dd3e4a8d51055f1f,
            mid_getStationDownlink_6890805957bea2cd,
            mid_getTauD_456d9a2f64d6b28d,
            mid_getTransitPV_6890805957bea2cd,
            mid_getTransitState_dd3e4a8d51055f1f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundReceiverCommonParametersWithoutDerivatives(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundReceiverCommonParametersWithoutDerivatives(const GroundReceiverCommonParametersWithoutDerivatives& obj) : ::java::lang::Object(obj) {}

          GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::Transform &, const ::org::orekit::utils::TimeStampedPVCoordinates &, jdouble, const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::utils::TimeStampedPVCoordinates &);

          ::org::orekit::frames::Transform getOffsetToInertialDownlink() const;
          ::org::orekit::propagation::SpacecraftState getState() const;
          ::org::orekit::utils::TimeStampedPVCoordinates getStationDownlink() const;
          jdouble getTauD() const;
          ::org::orekit::utils::TimeStampedPVCoordinates getTransitPV() const;
          ::org::orekit::propagation::SpacecraftState getTransitState() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(GroundReceiverCommonParametersWithoutDerivatives);
        extern PyTypeObject *PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives);

        class t_GroundReceiverCommonParametersWithoutDerivatives {
        public:
          PyObject_HEAD
          GroundReceiverCommonParametersWithoutDerivatives object;
          static PyObject *wrap_Object(const GroundReceiverCommonParametersWithoutDerivatives&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
