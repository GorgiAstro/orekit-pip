#ifndef org_orekit_forces_maneuvers_ConstantThrustManeuver_H
#define org_orekit_forces_maneuvers_ConstantThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class AbstractConstantThrustPropulsionModel;
        }
        class Control3DVectorCostType;
        namespace trigger {
          class DateBasedManeuverTriggers;
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
            mid_init$_222f3ac3ba5526f6,
            mid_init$_b92ace1679db3ad4,
            mid_init$_1d766a862a2fba89,
            mid_init$_159216b8eab5f883,
            mid_init$_421685bf274cf624,
            mid_init$_b1f761fead489272,
            mid_init$_2c8f4d747b28c68e,
            mid_getDirection_8b724f8b4fdad1a2,
            mid_getDirection_082e6346b274f880,
            mid_getDuration_b74f83833fdad017,
            mid_getEndDate_c325492395d89b24,
            mid_getFlowRate_b74f83833fdad017,
            mid_getFlowRate_fd347811007a6ba3,
            mid_getIsp_b74f83833fdad017,
            mid_getIsp_fd347811007a6ba3,
            mid_getStartDate_c325492395d89b24,
            mid_getThrustMagnitude_b74f83833fdad017,
            mid_getThrustMagnitude_fd347811007a6ba3,
            mid_getThrustVector_8b724f8b4fdad1a2,
            mid_getThrustVector_082e6346b274f880,
            mid_isFiring_e6d9e841ca2e035c,
            mid_isFiring_97df9017614a1945,
            mid_isFiring_a35647bda2901f54,
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
