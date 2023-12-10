#ifndef org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustPropulsionModel;
        }
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
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
              mid_init$_06e1ed88b8b36bf6,
              mid_init$_bd301e65f74781e6,
              mid_getControl3DVectorCostType_67739b20d9566a8c,
              mid_getDirection_d52645e0d4c07563,
              mid_getDirection_24461752d0eea1e3,
              mid_getFlowRate_dff5885c2c873297,
              mid_getFlowRate_9dc1ec0bcc0a9a29,
              mid_getFlowRate_f2dc4f0d2f87d390,
              mid_getFlowRate_432f3d328c15ec82,
              mid_getFlowRate_bf1d7732f1acb697,
              mid_getFlowRate_0b7191d207b9680f,
              mid_getFlowRate_8bdf60d5551eceaf,
              mid_getIsp_dff5885c2c873297,
              mid_getIsp_bf1d7732f1acb697,
              mid_getName_11b109bd155ca898,
              mid_getThrustMagnitude_dff5885c2c873297,
              mid_getThrustMagnitude_bf1d7732f1acb697,
              mid_getThrustVector_d52645e0d4c07563,
              mid_getThrustVector_36619a55dd67cb97,
              mid_getThrustVector_3cf6594f36d3d60d,
              mid_getThrustVector_abc43395638fd218,
              mid_getThrustVector_24461752d0eea1e3,
              mid_getThrustVector_b42ac4b5bfb80fab,
              mid_getThrustVector_8954761face5e1a7,
              mid_getInitialThrustVector_d52645e0d4c07563,
              mid_getInitialFlowRate_dff5885c2c873297,
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
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
