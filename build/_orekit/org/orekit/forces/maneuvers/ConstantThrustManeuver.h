#ifndef org_orekit_forces_maneuvers_ConstantThrustManeuver_H
#define org_orekit_forces_maneuvers_ConstantThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
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
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_4f93678b88c255da,
            mid_init$_553de90fa169df1b,
            mid_init$_5256b9ba65320d41,
            mid_init$_7b6bd86b98a97305,
            mid_init$_70317b76a6b31964,
            mid_init$_91944649ff91b0d4,
            mid_init$_4e43b10d66db1cc7,
            mid_getDirection_f88961cca75a2c0a,
            mid_getDirection_3df461fe15362b2b,
            mid_getDuration_557b8123390d8d0c,
            mid_getEndDate_7a97f7e149e79afb,
            mid_getFlowRate_557b8123390d8d0c,
            mid_getFlowRate_b0b988f941da47d8,
            mid_getIsp_557b8123390d8d0c,
            mid_getIsp_b0b988f941da47d8,
            mid_getStartDate_7a97f7e149e79afb,
            mid_getThrustMagnitude_557b8123390d8d0c,
            mid_getThrustMagnitude_b0b988f941da47d8,
            mid_getThrustVector_f88961cca75a2c0a,
            mid_getThrustVector_3df461fe15362b2b,
            mid_isFiring_4fda3059ab91dbfe,
            mid_isFiring_abdf3beb789bbd4e,
            mid_isFiring_981023bfa4a8a093,
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
