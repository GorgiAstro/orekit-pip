#ifndef org_orekit_forces_maneuvers_Maneuver_H
#define org_orekit_forces_maneuvers_Maneuver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace forces {
      class ForceModel;
      namespace maneuvers {
        namespace propulsion {
          class PropulsionModel;
        }
        namespace trigger {
          class ManeuverTriggers;
        }
        class Control3DVectorCostType;
      }
    }
    namespace propagation {
      class SpacecraftState;
      namespace numerical {
        class TimeDerivativesEquations;
        class FieldTimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
  }
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

        class Maneuver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab0f45ba20f8bea2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_acceleration_78989e44b99f7cc2,
            mid_addContribution_3ae28f2cc7cbb00b,
            mid_addContribution_170c8a5902f676b2,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getAttitudeOverride_5cce95036ae870ba,
            mid_getControl3DVectorCostType_9fb96072e0d6dbf0,
            mid_getEventDetectors_a68a17dd093f796d,
            mid_getFieldEventDetectors_1328ddb491531a35,
            mid_getManeuverTriggers_b6afe6b9afe270c6,
            mid_getName_0090f7797e403f43,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getPropulsionModel_5d177cae411efd0d,
            mid_init_3d13474d79f5e7bc,
            mid_init_acdd8180a5dc1a8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Maneuver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Maneuver(const Maneuver& obj) : ::java::lang::Object(obj) {}

          Maneuver(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers &, const ::org::orekit::forces::maneuvers::propulsion::PropulsionModel &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          void addContribution(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations &) const;
          void addContribution(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::numerical::TimeDerivativesEquations &) const;
          jboolean dependsOnPositionOnly() const;
          ::org::orekit::attitudes::AttitudeProvider getAttitudeOverride() const;
          ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
          ::java::util::stream::Stream getEventDetectors() const;
          ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers getManeuverTriggers() const;
          ::java::lang::String getName() const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::forces::maneuvers::propulsion::PropulsionModel getPropulsionModel() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(Maneuver);
        extern PyTypeObject *PY_TYPE(Maneuver);

        class t_Maneuver {
        public:
          PyObject_HEAD
          Maneuver object;
          static PyObject *wrap_Object(const Maneuver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
