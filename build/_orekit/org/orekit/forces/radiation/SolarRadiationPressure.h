#ifndef org_orekit_forces_radiation_SolarRadiationPressure_H
#define org_orekit_forces_radiation_SolarRadiationPressure_H

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"

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
            mid_init$_eb8e6d3dab9933fd,
            mid_init$_a14707e8e69d92fb,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_getLightingRatio_41a008afe53da855,
            mid_getLightingRatio_432f3d328c15ec82,
            mid_getParametersDrivers_2afa36052df4765d,
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
