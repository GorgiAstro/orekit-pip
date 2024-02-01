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
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustPropulsionModel;
        }
        class Control3DVectorCostType;
      }
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
              mid_init$_ddbb1762bed80b38,
              mid_init$_33b1676e2cf06e6c,
              mid_getControl3DVectorCostType_fc9abda16ef946e0,
              mid_getDirection_032312bdeb3f2f93,
              mid_getDirection_8b37cafaaf55a3a5,
              mid_getFlowRate_9981f74b2d109da6,
              mid_getFlowRate_a40ce4fdf6559ac0,
              mid_getFlowRate_c04968ee695d037c,
              mid_getFlowRate_b443ba1cc794b916,
              mid_getFlowRate_209f08246d708042,
              mid_getFlowRate_4222abdadde032f5,
              mid_getFlowRate_6c8e6cd5d59063ae,
              mid_getIsp_9981f74b2d109da6,
              mid_getIsp_209f08246d708042,
              mid_getName_d2c8eb4129821f0e,
              mid_getThrustMagnitude_9981f74b2d109da6,
              mid_getThrustMagnitude_209f08246d708042,
              mid_getThrustVector_032312bdeb3f2f93,
              mid_getThrustVector_44a47ea31a9889e8,
              mid_getThrustVector_5e5894038af17774,
              mid_getThrustVector_38283c57554889c0,
              mid_getThrustVector_8b37cafaaf55a3a5,
              mid_getThrustVector_9816b8f76e94356a,
              mid_getThrustVector_5e147f44c28a35c9,
              mid_getInitialFlowRate_9981f74b2d109da6,
              mid_getInitialThrustVector_032312bdeb3f2f93,
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
