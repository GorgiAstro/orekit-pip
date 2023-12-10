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
            mid_init$_e793b63d9cc45475,
            mid_getOffsetToInertialDownlink_09afc11266121652,
            mid_getState_c6311115fea01a34,
            mid_getStationDownlink_c204436deca11d94,
            mid_getTauD_dff5885c2c873297,
            mid_getTransitPV_c204436deca11d94,
            mid_getTransitState_c6311115fea01a34,
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
