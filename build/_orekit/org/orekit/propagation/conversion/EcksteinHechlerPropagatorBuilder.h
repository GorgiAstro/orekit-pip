#ifndef org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H
#define org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class TideSystem;
        }
      }
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class EcksteinHechlerPropagatorBuilder;
      }
      class Propagator;
    }
    namespace estimation {
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class EcksteinHechlerPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_1cbbf6cefa3a23d1,
            mid_init$_6fdc8fac14c18de2,
            mid_init$_b64c5b5ba3f87fc8,
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_dbf963913bad78cb,
            mid_copy_e21052299cc72e98,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EcksteinHechlerPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EcksteinHechlerPropagatorBuilder(const EcksteinHechlerPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &);
          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          EcksteinHechlerPropagatorBuilder copy() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(EcksteinHechlerPropagatorBuilder);

        class t_EcksteinHechlerPropagatorBuilder {
        public:
          PyObject_HEAD
          EcksteinHechlerPropagatorBuilder object;
          static PyObject *wrap_Object(const EcksteinHechlerPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
