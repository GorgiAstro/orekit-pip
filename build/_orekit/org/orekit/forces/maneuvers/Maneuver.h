#ifndef org_orekit_forces_maneuvers_Maneuver_H
#define org_orekit_forces_maneuvers_Maneuver_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
    }
    namespace forces {
      class ForceModel;
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggers;
        }
        class Control3DVectorCostType;
        namespace propulsion {
          class PropulsionModel;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class Field;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
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
            mid_init$_49fe3b908b3a29ec,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_addContribution_05bb906f491bab6b,
            mid_addContribution_2fcaaed225365615,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getAttitudeOverride_2f73d1f4460b8d6c,
            mid_getControl3DVectorCostType_fc9abda16ef946e0,
            mid_getEventDetectors_11e4ca8182c1933d,
            mid_getFieldEventDetectors_d3db121d9deb0312,
            mid_getManeuverTriggers_9694695cc99bc836,
            mid_getName_d2c8eb4129821f0e,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getPropulsionModel_7f9325840a7bbd68,
            mid_init_14deaae988292d42,
            mid_init_357211ab77703f3f,
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
