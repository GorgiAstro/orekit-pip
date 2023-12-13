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
        namespace propulsion {
          class ThrustPropulsionModel;
        }
        class Control3DVectorCostType;
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
              mid_init$_c0d617667838be49,
              mid_init$_5c295347eb1c7d1a,
              mid_getControl3DVectorCostType_2eba60c257188b83,
              mid_getDirection_8b724f8b4fdad1a2,
              mid_getDirection_082e6346b274f880,
              mid_getFlowRate_b74f83833fdad017,
              mid_getFlowRate_b060e4326765ccf1,
              mid_getFlowRate_ba5ea64a789ad864,
              mid_getFlowRate_a17ea857ce74d258,
              mid_getFlowRate_fd347811007a6ba3,
              mid_getFlowRate_8e86371c61460f23,
              mid_getFlowRate_f867476668f8eb00,
              mid_getIsp_b74f83833fdad017,
              mid_getIsp_fd347811007a6ba3,
              mid_getName_1c1fa1e935d6cdcf,
              mid_getThrustMagnitude_b74f83833fdad017,
              mid_getThrustMagnitude_fd347811007a6ba3,
              mid_getThrustVector_8b724f8b4fdad1a2,
              mid_getThrustVector_5dc321c3ba065f30,
              mid_getThrustVector_b7e5bd35daed8b40,
              mid_getThrustVector_9019a5b32b11453a,
              mid_getThrustVector_082e6346b274f880,
              mid_getThrustVector_0ce449c67b5ffd9c,
              mid_getThrustVector_20bded0292328743,
              mid_getInitialThrustVector_8b724f8b4fdad1a2,
              mid_getInitialFlowRate_b74f83833fdad017,
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
