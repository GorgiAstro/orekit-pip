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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class PropulsionModel;
        }
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class FieldAttitude;
      class Attitude;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getAcceleration_95da8f0fa460fb9b,
              mid_getAcceleration_04b081b8909cb072,
              mid_getControl3DVectorCostType_fc9abda16ef946e0,
              mid_getMassDerivatives_4222abdadde032f5,
              mid_getMassDerivatives_6c8e6cd5d59063ae,
              mid_getName_d2c8eb4129821f0e,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_init_14deaae988292d42,
              mid_pythonDecRef_ff7cb6c242604316,
              mid_pythonExtension_42c72b98e3c2e08a,
              mid_pythonExtension_f5bbab7e97879358,
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
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::attitudes::Attitude &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::attitudes::FieldAttitude &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
