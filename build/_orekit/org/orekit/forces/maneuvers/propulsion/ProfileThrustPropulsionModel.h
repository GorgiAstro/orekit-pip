#ifndef org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
        class EventDetector;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
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
    class Field;
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
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
              mid_init$_f818c95c4dc4720b,
              mid_getControl3DVectorCostType_67739b20d9566a8c,
              mid_getEventDetectors_20f6d2b462aaef4b,
              mid_getFieldEventDetectors_361313cd1a9c693a,
              mid_getFlowRate_432f3d328c15ec82,
              mid_getFlowRate_8bdf60d5551eceaf,
              mid_getFlowRate_0b7191d207b9680f,
              mid_getName_11b109bd155ca898,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getThrustVector_abc43395638fd218,
              mid_getThrustVector_8954761face5e1a7,
              mid_getThrustVector_b42ac4b5bfb80fab,
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
