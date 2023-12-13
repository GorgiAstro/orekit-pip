#ifndef org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H
#define org_orekit_forces_maneuvers_propulsion_ScaledConstantThrustPropulsionModel_H

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"

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
              mid_init$_c0d617667838be49,
              mid_getFlowRate_b74f83833fdad017,
              mid_getFlowRate_b060e4326765ccf1,
              mid_getFlowRate_ba5ea64a789ad864,
              mid_getFlowRate_fd347811007a6ba3,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_getThrustVector_8b724f8b4fdad1a2,
              mid_getThrustVector_5dc321c3ba065f30,
              mid_getThrustVector_b7e5bd35daed8b40,
              mid_getThrustVector_082e6346b274f880,
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
