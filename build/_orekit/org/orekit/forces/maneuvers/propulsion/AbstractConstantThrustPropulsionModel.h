#ifndef org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H

#include "java/lang/Object.h"

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
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
        namespace propulsion {
          class ThrustPropulsionModel;
        }
      }
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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
        namespace propulsion {

          class AbstractConstantThrustPropulsionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0f1efbd8efdc5b6d,
              mid_init$_341fcef9a4126498,
              mid_getControl3DVectorCostType_9fb96072e0d6dbf0,
              mid_getDirection_17a952530a808943,
              mid_getDirection_71c51b45829333ce,
              mid_getFlowRate_456d9a2f64d6b28d,
              mid_getFlowRate_f05cb8c6dfd5e0b9,
              mid_getFlowRate_05c598bf3375e090,
              mid_getFlowRate_66a2f071e6ed0c06,
              mid_getFlowRate_e912d21057defe63,
              mid_getFlowRate_79518d097c897d26,
              mid_getFlowRate_4368a5d862927c08,
              mid_getIsp_456d9a2f64d6b28d,
              mid_getIsp_e912d21057defe63,
              mid_getName_0090f7797e403f43,
              mid_getThrustMagnitude_456d9a2f64d6b28d,
              mid_getThrustMagnitude_e912d21057defe63,
              mid_getThrustVector_17a952530a808943,
              mid_getThrustVector_0afb6e76c9566061,
              mid_getThrustVector_31ec2b6903b76c9e,
              mid_getThrustVector_78226ca7935182ea,
              mid_getThrustVector_71c51b45829333ce,
              mid_getThrustVector_78989e44b99f7cc2,
              mid_getThrustVector_00aba28d3abe9a8c,
              mid_getInitialThrustVector_17a952530a808943,
              mid_getInitialFlowRate_456d9a2f64d6b28d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractConstantThrustPropulsionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractConstantThrustPropulsionModel(const AbstractConstantThrustPropulsionModel& obj) : ::java::lang::Object(obj) {}

            AbstractConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::lang::String &);
            AbstractConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &, const ::java::lang::String &);

            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection(const ::org::orekit::time::AbsoluteDate &) const;
            jdouble getFlowRate() const;
            jdouble getFlowRate(const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getFlowRate(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            jdouble getIsp() const;
            jdouble getIsp(const ::org::orekit::time::AbsoluteDate &) const;
            ::java::lang::String getName() const;
            jdouble getThrustMagnitude() const;
            jdouble getThrustMagnitude(const ::org::orekit::time::AbsoluteDate &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractConstantThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(AbstractConstantThrustPropulsionModel);

          class t_AbstractConstantThrustPropulsionModel {
          public:
            PyObject_HEAD
            AbstractConstantThrustPropulsionModel object;
            static PyObject *wrap_Object(const AbstractConstantThrustPropulsionModel&);
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
