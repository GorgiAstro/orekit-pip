#ifndef org_orekit_forces_maneuvers_ConstantThrustManeuver_H
#define org_orekit_forces_maneuvers_ConstantThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class DateBasedManeuverTriggers;
        }
        namespace propulsion {
          class AbstractConstantThrustPropulsionModel;
        }
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_74034180fd61f214,
            mid_init$_db3ac5fd76ec2ad9,
            mid_init$_7196b47f4b26db4c,
            mid_init$_ed4aad723e1e1fe5,
            mid_init$_2f948334f1d5875b,
            mid_init$_9b205a950ebc27e1,
            mid_init$_8a4d34e8a5bc498f,
            mid_getDirection_032312bdeb3f2f93,
            mid_getDirection_8b37cafaaf55a3a5,
            mid_getDuration_9981f74b2d109da6,
            mid_getEndDate_80e11148db499dda,
            mid_getFlowRate_9981f74b2d109da6,
            mid_getFlowRate_209f08246d708042,
            mid_getIsp_9981f74b2d109da6,
            mid_getIsp_209f08246d708042,
            mid_getStartDate_80e11148db499dda,
            mid_getThrustMagnitude_9981f74b2d109da6,
            mid_getThrustMagnitude_209f08246d708042,
            mid_getThrustVector_032312bdeb3f2f93,
            mid_getThrustVector_8b37cafaaf55a3a5,
            mid_isFiring_712e981f67f3ccbe,
            mid_isFiring_34f098c1d43e614c,
            mid_isFiring_b16e79ba1b2830a1,
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
