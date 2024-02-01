#ifndef org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ProfileThrustPropulsionModel_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class TimeSpanMap;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class FieldEventDetector;
        class EventDetector;
      }
      class FieldSpacecraftState;
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
    class Field;
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
              mid_init$_d00ea30a932a71de,
              mid_getControl3DVectorCostType_fc9abda16ef946e0,
              mid_getEventDetectors_11e4ca8182c1933d,
              mid_getFieldEventDetectors_d3db121d9deb0312,
              mid_getFlowRate_b443ba1cc794b916,
              mid_getFlowRate_4222abdadde032f5,
              mid_getFlowRate_6c8e6cd5d59063ae,
              mid_getName_d2c8eb4129821f0e,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getThrustVector_38283c57554889c0,
              mid_getThrustVector_9816b8f76e94356a,
              mid_getThrustVector_5e147f44c28a35c9,
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
