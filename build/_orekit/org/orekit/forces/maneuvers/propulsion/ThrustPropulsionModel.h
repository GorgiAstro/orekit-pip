#ifndef org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"

namespace org {
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
              mid_getAcceleration_28694fea3dbf2005,
              mid_getAcceleration_53d7cdec4a9e3cd4,
              mid_getDirection_3fff8c49d4e2dc6b,
              mid_getFlowRate_1bbf81d80c47ecdd,
              mid_getFlowRate_4ad317f7598a10a9,
              mid_getFlowRate_810dcb8f9f5d191a,
              mid_getIsp_1bbf81d80c47ecdd,
              mid_getMassDerivatives_4ad317f7598a10a9,
              mid_getMassDerivatives_810dcb8f9f5d191a,
              mid_getThrustVector_3fff8c49d4e2dc6b,
              mid_getThrustVector_61944e27a39e8290,
              mid_getThrustVector_b61fb59a041240c6,
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
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
