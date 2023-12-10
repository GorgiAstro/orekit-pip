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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class PropulsionModel;
        }
        class Control3DVectorCostType;
        namespace trigger {
          class ManeuverTriggers;
        }
      }
      class ForceModel;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
            mid_init$_1b49064004922e0f,
            mid_acceleration_8954761face5e1a7,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_addContribution_5852b6ea0a71dcb4,
            mid_addContribution_9d1574df69c5f1ff,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getAttitudeOverride_a904f3d015a354a0,
            mid_getControl3DVectorCostType_67739b20d9566a8c,
            mid_getEventDetectors_20f6d2b462aaef4b,
            mid_getFieldEventDetectors_361313cd1a9c693a,
            mid_getManeuverTriggers_37940bf6d7d342ef,
            mid_getName_11b109bd155ca898,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getPropulsionModel_559c6850652697a2,
            mid_init_8e8de2be1664674a,
            mid_init_826b4eda94da4e78,
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
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
