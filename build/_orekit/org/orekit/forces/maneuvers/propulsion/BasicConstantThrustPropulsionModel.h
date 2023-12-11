#ifndef org_orekit_forces_maneuvers_propulsion_BasicConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_BasicConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

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
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
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

          class BasicConstantThrustPropulsionModel : public ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel {
           public:
            enum {
              mid_init$_cf2d903473e9fd3b,
              mid_init$_61fb1c1298b85822,
              mid_getFlowRate_557b8123390d8d0c,
              mid_getFlowRate_86c4a0582e0747ce,
              mid_getFlowRate_e3919ad898361abd,
              mid_getFlowRate_b0b988f941da47d8,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_getThrustVector_f88961cca75a2c0a,
              mid_getThrustVector_b4c4f24efa81746b,
              mid_getThrustVector_73a8498c189497cd,
              mid_getThrustVector_3df461fe15362b2b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicConstantThrustPropulsionModel(jobject obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicConstantThrustPropulsionModel(const BasicConstantThrustPropulsionModel& obj) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(obj) {}

            static ::java::lang::String *FLOW_RATE;
            static jdouble FLOW_RATE_SCALE;
            static ::java::lang::String *THRUST;
            static jdouble THRUST_SCALE;

            BasicConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::lang::String &);
            BasicConstantThrustPropulsionModel(jdouble, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &, const ::java::lang::String &);

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
          extern PyType_Def PY_TYPE_DEF(BasicConstantThrustPropulsionModel);
          extern PyTypeObject *PY_TYPE(BasicConstantThrustPropulsionModel);

          class t_BasicConstantThrustPropulsionModel {
          public:
            PyObject_HEAD
            BasicConstantThrustPropulsionModel object;
            static PyObject *wrap_Object(const BasicConstantThrustPropulsionModel&);
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
