#ifndef org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"

namespace org {
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
  }
  namespace orekit {
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ThrustPropulsionModel : public ::org::orekit::forces::maneuvers::propulsion::PropulsionModel {
           public:
            enum {
              mid_getAcceleration_e58d235f532e1fec,
              mid_getAcceleration_fa24c1d0852b99d1,
              mid_getDirection_9019a5b32b11453a,
              mid_getFlowRate_a17ea857ce74d258,
              mid_getFlowRate_8e86371c61460f23,
              mid_getFlowRate_f867476668f8eb00,
              mid_getIsp_a17ea857ce74d258,
              mid_getMassDerivatives_8e86371c61460f23,
              mid_getMassDerivatives_f867476668f8eb00,
              mid_getThrustVector_9019a5b32b11453a,
              mid_getThrustVector_0ce449c67b5ffd9c,
              mid_getThrustVector_20bded0292328743,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThrustPropulsionModel(jobject obj) : ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThrustPropulsionModel(const ThrustPropulsionModel& obj) : ::org::orekit::forces::maneuvers::propulsion::PropulsionModel(obj) {}

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getIsp(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(ThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(ThrustPropulsionModel);

          class t_ThrustPropulsionModel {
          public:
            PyObject_HEAD
            ThrustPropulsionModel object;
            static PyObject *wrap_Object(const ThrustPropulsionModel&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
