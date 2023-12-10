#ifndef org_orekit_forces_radiation_SolarRadiationPressure_H
#define org_orekit_forces_radiation_SolarRadiationPressure_H

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class ParameterDriver;
      class ExtendedPVCoordinatesProvider;
    }
  }
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
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class SolarRadiationPressure : public ::org::orekit::forces::radiation::AbstractRadiationForceModel {
         public:
          enum {
            mid_init$_7df9bc8521d0f47a,
            mid_init$_8d693bdc6a4d68ef,
            mid_acceleration_78989e44b99f7cc2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_getLightingRatio_cc79c2733879de35,
            mid_getLightingRatio_66a2f071e6ed0c06,
            mid_getParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SolarRadiationPressure(jobject obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SolarRadiationPressure(const SolarRadiationPressure& obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {}

          SolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::forces::radiation::RadiationSensitive &);
          SolarRadiationPressure(jdouble, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::forces::radiation::RadiationSensitive &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement getLightingRatio(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          jdouble getLightingRatio(const ::org::orekit::propagation::SpacecraftState &) const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        extern PyType_Def PY_TYPE_DEF(SolarRadiationPressure);
        extern PyTypeObject *PY_TYPE(SolarRadiationPressure);

        class t_SolarRadiationPressure {
        public:
          PyObject_HEAD
          SolarRadiationPressure object;
          static PyObject *wrap_Object(const SolarRadiationPressure&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
