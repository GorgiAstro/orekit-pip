#ifndef org_orekit_forces_maneuvers_propulsion_PropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PropulsionModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace java {
  namespace util {
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
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetectorsProvider;
        class EventDetector;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
    }
    namespace forces {
      namespace maneuvers {
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
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PropulsionModel : public ::org::orekit::utils::ParameterDriversProvider {
           public:
            enum {
              mid_getAcceleration_95da8f0fa460fb9b,
              mid_getAcceleration_04b081b8909cb072,
              mid_getControl3DVectorCostType_fc9abda16ef946e0,
              mid_getEventDetectors_11e4ca8182c1933d,
              mid_getFieldEventDetectors_d3db121d9deb0312,
              mid_getMassDerivatives_4222abdadde032f5,
              mid_getMassDerivatives_6c8e6cd5d59063ae,
              mid_getName_d2c8eb4129821f0e,
              mid_init_14deaae988292d42,
              mid_init_357211ab77703f3f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PropulsionModel(jobject obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PropulsionModel(const PropulsionModel& obj) : ::org::orekit::utils::ParameterDriversProvider(obj) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::java::lang::String getName() const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(PropulsionModel);
          extern PyTypeObject *PY_TYPE(PropulsionModel);

          class t_PropulsionModel {
          public:
            PyObject_HEAD
            PropulsionModel object;
            static PyObject *wrap_Object(const PropulsionModel&);
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
