#ifndef org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H
#define org_orekit_estimation_measurements_GroundReceiverCommonParametersWithoutDerivatives_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
    }
    namespace propagation {
      class SpacecraftState;
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
            mid_init$_07c57a746e2cf86f,
            mid_getOffsetToInertialDownlink_417755e67b7f769d,
            mid_getState_9d155cc8314c99cf,
            mid_getStationDownlink_136cc8ba23b21c29,
            mid_getTauD_b74f83833fdad017,
            mid_getTransitPV_136cc8ba23b21c29,
            mid_getTransitState_9d155cc8314c99cf,
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
