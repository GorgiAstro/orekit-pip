#ifndef org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H

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

          class ScaledConstantThrustPropulsionModel : public ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel {
           public:
            enum {
              mid_init$_06e1ed88b8b36bf6,
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
