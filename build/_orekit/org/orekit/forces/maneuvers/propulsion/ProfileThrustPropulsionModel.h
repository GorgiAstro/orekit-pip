#ifndef org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H

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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustPropulsionModel;
          class PolynomialThrustSegment;
        }
        class Control3DVectorCostType;
      }
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ProfileThrustPropulsionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b86ecb38dfd5497e,
              mid_getControl3DVectorCostType_2eba60c257188b83,
              mid_getEventDetectors_14e21bf777ff0ccf,
              mid_getFieldEventDetectors_283ad33581c047a0,
              mid_getFlowRate_a17ea857ce74d258,
              mid_getFlowRate_f867476668f8eb00,
              mid_getFlowRate_8e86371c61460f23,
              mid_getName_1c1fa1e935d6cdcf,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getThrustVector_9019a5b32b11453a,
              mid_getThrustVector_0ce449c67b5ffd9c,
              mid_getThrustVector_20bded0292328743,
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
