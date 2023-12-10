#ifndef org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
        namespace propulsion {
          class PolynomialThrustSegment;
          class ThrustPropulsionModel;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ProfileThrustPropulsionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4d6da41a5acbac84,
              mid_getControl3DVectorCostType_9fb96072e0d6dbf0,
              mid_getEventDetectors_a68a17dd093f796d,
              mid_getFieldEventDetectors_1328ddb491531a35,
              mid_getFlowRate_66a2f071e6ed0c06,
              mid_getFlowRate_79518d097c897d26,
              mid_getFlowRate_4368a5d862927c08,
              mid_getName_0090f7797e403f43,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getThrustVector_78226ca7935182ea,
              mid_getThrustVector_00aba28d3abe9a8c,
              mid_getThrustVector_78989e44b99f7cc2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProfileThrustPropulsionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProfileThrustPropulsionModel(const ProfileThrustPropulsionModel& obj) : ::java::lang::Object(obj) {}

            ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap &, jdouble, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &, const ::java::lang::String &);

            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::java::lang::String getName() const;
            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(ProfileThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(ProfileThrustPropulsionModel);

          class t_ProfileThrustPropulsionModel {
          public:
            PyObject_HEAD
            ProfileThrustPropulsionModel object;
            static PyObject *wrap_Object(const ProfileThrustPropulsionModel&);
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
