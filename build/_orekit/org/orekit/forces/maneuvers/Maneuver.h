#ifndef org_orekit_forces_maneuvers_Maneuver_H
#define org_orekit_forces_maneuvers_Maneuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace numerical {
        class TimeDerivativesEquations;
        class FieldTimeDerivativesEquations;
      }
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          class ManeuverTriggers;
        }
        namespace propulsion {
          class PropulsionModel;
        }
        class Control3DVectorCostType;
      }
      class ForceModel;
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
    class CalculusFieldElement;
    class Field;
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
            mid_init$_812a7c56b984179a,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_addContribution_0f28031d74393af0,
            mid_addContribution_9ecc165cc3358de0,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getAttitudeOverride_6df6b78ab9377151,
            mid_getControl3DVectorCostType_601f05e5d0c82ad9,
            mid_getEventDetectors_d7cce92225eb0db2,
            mid_getFieldEventDetectors_8130af76f6998f44,
            mid_getManeuverTriggers_cee7298c5da7b0f2,
            mid_getName_3cffd47377eca18a,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getPropulsionModel_a5c75fea8de63925,
            mid_init_0472264ad6f40bc2,
            mid_init_811e49dad2467b67,
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
