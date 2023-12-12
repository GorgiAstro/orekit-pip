#ifndef org_orekit_forces_radiation_SolarRadiationPressure_H
#define org_orekit_forces_radiation_SolarRadiationPressure_H

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"

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
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
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
            mid_init$_d555dbd04a0c182e,
            mid_init$_3e673fd4ea8e449d,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_getLightingRatio_de1c2d709eb2829c,
            mid_getLightingRatio_1bbf81d80c47ecdd,
            mid_getParametersDrivers_0d9551367f7ecdef,
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
