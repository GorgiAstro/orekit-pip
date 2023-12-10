#ifndef org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ScaledConstantThrustPropulsionModel : public ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel {
           public:
            enum {
              mid_init$_0f1efbd8efdc5b6d,
              mid_getFlowRate_456d9a2f64d6b28d,
              mid_getFlowRate_f05cb8c6dfd5e0b9,
              mid_getFlowRate_05c598bf3375e090,
              mid_getFlowRate_e912d21057defe63,
              mid_getParametersDrivers_a6156df500549a58,
              mid_getThrustVector_17a952530a808943,
              mid_getThrustVector_0afb6e76c9566061,
              mid_getThrustVector_31ec2b6903b76c9e,
              mid_getThrustVector_71c51b45829333ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScaledConstantThrustPropulsionModel(jobject obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScaledConstantThrustPropulsionModel(const ScaledConstantThrustPropulsionModel& obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {}

            static ::java::lang::String *THRUSTX_SCALE_FACTOR;
            static ::java::lang::String *THRUSTY_SCALE_FACTOR;
            static ::java::lang::String *THRUSTZ_SCALE_FACTOR;

            ScaledConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::lang::String &);

            jdouble getFlowRate() const;
            jdouble getFlowRate(const JArray< jdouble > &) const;
            ::org::hipparchus::CalculusFieldElement getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            jdouble getFlowRate(const ::org::orekit::time::AbsoluteDate &) const;
            ::java::util::List getParametersDrivers() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const JArray< jdouble > &) const;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrustVector(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(ScaledConstantThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(ScaledConstantThrustPropulsionModel);

          class t_ScaledConstantThrustPropulsionModel {
          public:
            PyObject_HEAD
            ScaledConstantThrustPropulsionModel object;
            static PyObject *wrap_Object(const ScaledConstantThrustPropulsionModel&);
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
