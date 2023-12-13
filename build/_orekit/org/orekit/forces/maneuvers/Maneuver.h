#ifndef org_orekit_forces_maneuvers_Maneuver_H
#define org_orekit_forces_maneuvers_Maneuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
      namespace maneuvers {
        namespace propulsion {
          class PropulsionModel;
        }
        class Control3DVectorCostType;
        namespace trigger {
          class ManeuverTriggers;
        }
      }
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
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_2cfe271e1be0464c,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_acceleration_20bded0292328743,
            mid_addContribution_6aa2b69cacacea60,
            mid_addContribution_ab5e59960ebc27c2,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getAttitudeOverride_331f12bb6017243b,
            mid_getControl3DVectorCostType_2eba60c257188b83,
            mid_getEventDetectors_14e21bf777ff0ccf,
            mid_getFieldEventDetectors_283ad33581c047a0,
            mid_getManeuverTriggers_2d460145092fdd66,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getPropulsionModel_ae30c99eecbf6088,
            mid_init_96d019f392abf918,
            mid_init_2d7f9a496c7e9781,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
