#ifndef org_orekit_forces_maneuvers_propulsion_BasicConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_BasicConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

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
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_06e1ed88b8b36bf6,
              mid_init$_bd301e65f74781e6,
              mid_getFlowRate_dff5885c2c873297,
              mid_getFlowRate_9dc1ec0bcc0a9a29,
              mid_getFlowRate_f2dc4f0d2f87d390,
              mid_getFlowRate_bf1d7732f1acb697,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_getThrustVector_d52645e0d4c07563,
              mid_getThrustVector_36619a55dd67cb97,
              mid_getThrustVector_3cf6594f36d3d60d,
              mid_getThrustVector_24461752d0eea1e3,
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
