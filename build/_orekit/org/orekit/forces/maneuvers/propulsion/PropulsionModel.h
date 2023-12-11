#ifndef org_orekit_forces_maneuvers_propulsion_PropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PropulsionModel_H

#include "org/orekit/utils/ParameterDriversProvider.h"

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
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class EventDetectorsProvider;
        class EventDetector;
        class FieldEventDetector;
      }
      class SpacecraftState;
    }
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
              mid_getAcceleration_53d7cdec4a9e3cd4,
              mid_getAcceleration_28694fea3dbf2005,
              mid_getControl3DVectorCostType_601f05e5d0c82ad9,
              mid_getEventDetectors_d7cce92225eb0db2,
              mid_getFieldEventDetectors_8130af76f6998f44,
              mid_getMassDerivatives_810dcb8f9f5d191a,
              mid_getMassDerivatives_4ad317f7598a10a9,
              mid_getName_3cffd47377eca18a,
              mid_init_811e49dad2467b67,
              mid_init_0472264ad6f40bc2,
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
