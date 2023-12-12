#ifndef org_orekit_forces_maneuvers_propulsion_PythonThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PythonThrustPropulsionModel_H

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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustPropulsionModel;
        }
        class Control3DVectorCostType;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PythonThrustPropulsionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getControl3DVectorCostType_601f05e5d0c82ad9,
              mid_getFlowRate_1bbf81d80c47ecdd,
              mid_getFlowRate_4ad317f7598a10a9,
              mid_getFlowRate_810dcb8f9f5d191a,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getThrustVector_3fff8c49d4e2dc6b,
              mid_getThrustVector_b61fb59a041240c6,
              mid_getThrustVector_61944e27a39e8290,
              mid_init_0472264ad6f40bc2,
              mid_pythonDecRef_0640e6acf969ed28,
              mid_pythonExtension_9e26256fb0d384a2,
              mid_pythonExtension_3cd6a6b354c6aa22,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonThrustPropulsionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonThrustPropulsionModel(const PythonThrustPropulsionModel& obj) : ::java::lang::Object(obj) {}

            PythonThrustPropulsionModel();

            void finalize() const;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(PythonThrustPropulsionModel);

          class t_PythonThrustPropulsionModel {
          public:
            PyObject_HEAD
            PythonThrustPropulsionModel object;
            static PyObject *wrap_Object(const PythonThrustPropulsionModel&);
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
