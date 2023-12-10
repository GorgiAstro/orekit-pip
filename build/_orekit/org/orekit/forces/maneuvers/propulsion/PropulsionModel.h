#ifndef org_orekit_forces_maneuvers_propulsion_PropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PropulsionModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

namespace org {
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
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class FieldEventDetector;
        class EventDetectorsProvider;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PropulsionModel : public ::org::orekit::utils::ParameterDriversProvider {
           public:
            enum {
              mid_getAcceleration_19f36cd1a0a8b9bf,
              mid_getAcceleration_a6c71e83efaf48d0,
              mid_getControl3DVectorCostType_67739b20d9566a8c,
              mid_getEventDetectors_20f6d2b462aaef4b,
              mid_getFieldEventDetectors_361313cd1a9c693a,
              mid_getMassDerivatives_0b7191d207b9680f,
              mid_getMassDerivatives_8bdf60d5551eceaf,
              mid_getName_11b109bd155ca898,
              mid_init_8e8de2be1664674a,
              mid_init_826b4eda94da4e78,
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

            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            ::java::util::stream::Stream getEventDetectors() const;
            ::java::util::stream::Stream getFieldEventDetectors(const ::org::hipparchus::Field &) const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::java::lang::String getName() const;
            void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
