#ifndef org_orekit_forces_maneuvers_propulsion_PythonPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PythonPropulsionModel_H

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
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
        namespace propulsion {
          class PropulsionModel;
        }
      }
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class PythonPropulsionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_finalize_0640e6acf969ed28,
              mid_getAcceleration_53d7cdec4a9e3cd4,
              mid_getAcceleration_28694fea3dbf2005,
              mid_getControl3DVectorCostType_601f05e5d0c82ad9,
              mid_getMassDerivatives_810dcb8f9f5d191a,
              mid_getMassDerivatives_4ad317f7598a10a9,
              mid_getName_3cffd47377eca18a,
              mid_getParametersDrivers_0d9551367f7ecdef,
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

            explicit PythonPropulsionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonPropulsionModel(const PythonPropulsionModel& obj) : ::java::lang::Object(obj) {}

            PythonPropulsionModel();

            void finalize() const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            jdouble getMassDerivatives(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::java::lang::String getName() const;
            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(PythonPropulsionModel);
          extern PyTypeObject *PY_TYPE(PythonPropulsionModel);

          class t_PythonPropulsionModel {
          public:
            PyObject_HEAD
            PythonPropulsionModel object;
            static PyObject *wrap_Object(const PythonPropulsionModel&);
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
