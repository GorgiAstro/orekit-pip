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
      class Attitude;
      class FieldAttitude;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
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
              mid_getAcceleration_64acd703c3b3c863,
              mid_getAcceleration_be3781a72bd4ba13,
              mid_getDirection_78226ca7935182ea,
              mid_getFlowRate_66a2f071e6ed0c06,
              mid_getFlowRate_4368a5d862927c08,
              mid_getFlowRate_79518d097c897d26,
              mid_getIsp_66a2f071e6ed0c06,
              mid_getMassDerivatives_4368a5d862927c08,
              mid_getMassDerivatives_79518d097c897d26,
              mid_getThrustVector_78226ca7935182ea,
              mid_getThrustVector_00aba28d3abe9a8c,
              mid_getThrustVector_78989e44b99f7cc2,
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
