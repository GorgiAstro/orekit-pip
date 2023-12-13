#ifndef org_orekit_forces_maneuvers_propulsion_PropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PropulsionModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class EventDetector;
        class EventDetectorsProvider;
      }
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
  namespace util {
    namespace stream {
      class Stream;
    }
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
              mid_getAcceleration_e58d235f532e1fec,
              mid_getAcceleration_fa24c1d0852b99d1,
              mid_getControl3DVectorCostType_2eba60c257188b83,
              mid_getEventDetectors_14e21bf777ff0ccf,
              mid_getFieldEventDetectors_283ad33581c047a0,
              mid_getMassDerivatives_8e86371c61460f23,
              mid_getMassDerivatives_f867476668f8eb00,
              mid_getName_1c1fa1e935d6cdcf,
              mid_init_96d019f392abf918,
              mid_init_2d7f9a496c7e9781,
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
