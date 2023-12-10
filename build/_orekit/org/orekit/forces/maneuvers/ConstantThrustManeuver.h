#ifndef org_orekit_forces_maneuvers_ConstantThrustManeuver_H
#define org_orekit_forces_maneuvers_ConstantThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class DateBasedManeuverTriggers;
        }
        class Control3DVectorCostType;
        namespace propulsion {
          class AbstractConstantThrustPropulsionModel;
        }
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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
    namespace forces {
      namespace maneuvers {

        class ConstantThrustManeuver : public ::org::orekit::forces::maneuvers::Maneuver {
         public:
          enum {
            mid_init$_3071d0eebd2c86fa,
            mid_init$_cdd50e8ce11112ae,
            mid_init$_77049e19994346ba,
            mid_init$_34b07c65a9b7f665,
            mid_init$_3e3b0ad80f5b5c3f,
            mid_init$_08028e96353538f6,
            mid_init$_6b90ce2f1c6973f5,
            mid_getDirection_17a952530a808943,
            mid_getDirection_71c51b45829333ce,
            mid_getDuration_456d9a2f64d6b28d,
            mid_getEndDate_aaa854c403487cf3,
            mid_getFlowRate_456d9a2f64d6b28d,
            mid_getFlowRate_e912d21057defe63,
            mid_getIsp_456d9a2f64d6b28d,
            mid_getIsp_e912d21057defe63,
            mid_getStartDate_aaa854c403487cf3,
            mid_getThrustMagnitude_456d9a2f64d6b28d,
            mid_getThrustMagnitude_e912d21057defe63,
            mid_getThrustVector_17a952530a808943,
            mid_getThrustVector_71c51b45829333ce,
            mid_isFiring_91c945ca7903e8ac,
            mid_isFiring_97634138963fb58a,
            mid_isFiring_ee2067c5768b6768,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantThrustManeuver(jobject obj) : ::org::orekit::forces::maneuvers::Maneuver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantThrustManeuver(const ConstantThrustManeuver& obj) : ::org::orekit::forces::maneuvers::Maneuver(obj) {}

          ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers &, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::lang::String &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::lang::String &);
          ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &, const ::java::lang::String &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getDuration() const;
          ::org::orekit::time::AbsoluteDate getEndDate() const;
          jdouble getFlowRate() const;
          jdouble getFlowRate(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getIsp() const;
          jdouble getIsp(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::time::AbsoluteDate getStartDate() const;
          jdouble getThrustMagnitude() const;
          jdouble getThrustMagnitude(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::time::AbsoluteDate &) const;
          jboolean isFiring(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          jboolean isFiring(const ::org::orekit::propagation::SpacecraftState &) const;
          jboolean isFiring(const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        extern PyType_Def PY_TYPE_DEF(ConstantThrustManeuver);
        extern PyTypeObject *PY_TYPE(ConstantThrustManeuver);

        class t_ConstantThrustManeuver {
        public:
          PyObject_HEAD
          ConstantThrustManeuver object;
          static PyObject *wrap_Object(const ConstantThrustManeuver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
