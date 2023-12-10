#ifndef org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
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
              mid_getAcceleration_a6c71e83efaf48d0,
              mid_getAcceleration_19f36cd1a0a8b9bf,
              mid_getDirection_abc43395638fd218,
              mid_getFlowRate_432f3d328c15ec82,
              mid_getFlowRate_8bdf60d5551eceaf,
              mid_getFlowRate_0b7191d207b9680f,
              mid_getIsp_432f3d328c15ec82,
              mid_getMassDerivatives_0b7191d207b9680f,
              mid_getMassDerivatives_8bdf60d5551eceaf,
              mid_getThrustVector_abc43395638fd218,
              mid_getThrustVector_8954761face5e1a7,
              mid_getThrustVector_b42ac4b5bfb80fab,
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

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            jdouble getIsp(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
