#ifndef org_orekit_forces_maneuvers_ConstantThrustManeuver_H
#define org_orekit_forces_maneuvers_ConstantThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
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
      class FieldSpacecraftState;
      class SpacecraftState;
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
            mid_init$_0e049468e630fb0a,
            mid_init$_6df74997602d228f,
            mid_init$_4d8b3d27e4bb3628,
            mid_init$_97519142b48ff00e,
            mid_init$_69dee4bb0a05926f,
            mid_init$_4efcdf187980e995,
            mid_init$_786088b67d5db4af,
            mid_getDirection_d52645e0d4c07563,
            mid_getDirection_24461752d0eea1e3,
            mid_getDuration_dff5885c2c873297,
            mid_getEndDate_85703d13e302437e,
            mid_getFlowRate_dff5885c2c873297,
            mid_getFlowRate_bf1d7732f1acb697,
            mid_getIsp_dff5885c2c873297,
            mid_getIsp_bf1d7732f1acb697,
            mid_getStartDate_85703d13e302437e,
            mid_getThrustMagnitude_dff5885c2c873297,
            mid_getThrustMagnitude_bf1d7732f1acb697,
            mid_getThrustVector_d52645e0d4c07563,
            mid_getThrustVector_24461752d0eea1e3,
            mid_isFiring_1b0abd4f90ebd0eb,
            mid_isFiring_680f8463a473c3cb,
            mid_isFiring_db6d81809797ddaa,
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
