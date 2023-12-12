#ifndef org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H

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
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
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
              mid_init$_695d3f43be2dface,
              mid_getControl3DVectorCostType_601f05e5d0c82ad9,
              mid_getEventDetectors_d7cce92225eb0db2,
              mid_getFieldEventDetectors_8130af76f6998f44,
              mid_getFlowRate_1bbf81d80c47ecdd,
              mid_getFlowRate_810dcb8f9f5d191a,
              mid_getFlowRate_4ad317f7598a10a9,
              mid_getName_3cffd47377eca18a,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getThrustVector_3fff8c49d4e2dc6b,
              mid_getThrustVector_b61fb59a041240c6,
              mid_getThrustVector_61944e27a39e8290,
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
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
