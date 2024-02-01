#ifndef org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H
#define org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace frames {
      class Transform;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
            mid_init$_6779991549f9fde6,
            mid_getOffsetToInertialDownlink_da06dd761109637f,
            mid_getState_8fbfa58855031235,
            mid_getStationDownlink_674031698a428ce8,
            mid_getTauD_9981f74b2d109da6,
            mid_getTransitPV_674031698a428ce8,
            mid_getTransitState_8fbfa58855031235,
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
