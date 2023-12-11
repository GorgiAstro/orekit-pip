#ifndef org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_AbstractConstantThrustPropulsionModel_H

#include "java/lang/Object.h"

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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
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
              mid_init$_cf2d903473e9fd3b,
              mid_init$_61fb1c1298b85822,
              mid_getControl3DVectorCostType_601f05e5d0c82ad9,
              mid_getDirection_f88961cca75a2c0a,
              mid_getDirection_3df461fe15362b2b,
              mid_getFlowRate_557b8123390d8d0c,
              mid_getFlowRate_86c4a0582e0747ce,
              mid_getFlowRate_e3919ad898361abd,
              mid_getFlowRate_1bbf81d80c47ecdd,
              mid_getFlowRate_b0b988f941da47d8,
              mid_getFlowRate_810dcb8f9f5d191a,
              mid_getFlowRate_4ad317f7598a10a9,
              mid_getIsp_557b8123390d8d0c,
              mid_getIsp_b0b988f941da47d8,
              mid_getName_3cffd47377eca18a,
              mid_getThrustMagnitude_557b8123390d8d0c,
              mid_getThrustMagnitude_b0b988f941da47d8,
              mid_getThrustVector_f88961cca75a2c0a,
              mid_getThrustVector_b4c4f24efa81746b,
              mid_getThrustVector_73a8498c189497cd,
              mid_getThrustVector_3fff8c49d4e2dc6b,
              mid_getThrustVector_3df461fe15362b2b,
              mid_getThrustVector_b61fb59a041240c6,
              mid_getThrustVector_61944e27a39e8290,
              mid_getInitialFlowRate_557b8123390d8d0c,
              mid_getInitialThrustVector_f88961cca75a2c0a,
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
