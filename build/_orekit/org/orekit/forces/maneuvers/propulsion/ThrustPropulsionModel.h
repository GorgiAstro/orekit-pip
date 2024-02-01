#ifndef org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"

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
              mid_getAcceleration_95da8f0fa460fb9b,
              mid_getAcceleration_04b081b8909cb072,
              mid_getDirection_38283c57554889c0,
              mid_getFlowRate_b443ba1cc794b916,
              mid_getFlowRate_4222abdadde032f5,
              mid_getFlowRate_6c8e6cd5d59063ae,
              mid_getIsp_b443ba1cc794b916,
              mid_getMassDerivatives_6c8e6cd5d59063ae,
              mid_getMassDerivatives_4222abdadde032f5,
              mid_getThrustVector_38283c57554889c0,
              mid_getThrustVector_9816b8f76e94356a,
              mid_getThrustVector_5e147f44c28a35c9,
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
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getIsp(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
