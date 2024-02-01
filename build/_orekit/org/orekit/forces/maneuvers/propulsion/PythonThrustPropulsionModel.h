#ifndef org_orekit_forces_maneuvers_propulsion_PythonThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_PythonThrustPropulsionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustPropulsionModel;
        }
        class Control3DVectorCostType;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
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
              mid_init$_ff7cb6c242604316,
              mid_finalize_ff7cb6c242604316,
              mid_getControl3DVectorCostType_fc9abda16ef946e0,
              mid_getFlowRate_b443ba1cc794b916,
              mid_getFlowRate_4222abdadde032f5,
              mid_getFlowRate_6c8e6cd5d59063ae,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_getThrustVector_38283c57554889c0,
              mid_getThrustVector_5e147f44c28a35c9,
              mid_getThrustVector_9816b8f76e94356a,
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

            explicit PythonThrustPropulsionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonThrustPropulsionModel(const PythonThrustPropulsionModel& obj) : ::java::lang::Object(obj) {}

            PythonThrustPropulsionModel();

            void finalize() const;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &) const;
            jdouble getFlowRate(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
