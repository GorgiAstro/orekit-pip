#ifndef org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H
#define org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace attitudes {
      class AttitudeProvider;
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
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class TideSystem;
        }
      }
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_79d33b712eca09e6,
            mid_init$_8c697f63edb41aec,
            mid_init$_a9fd3db9acd028e4,
            mid_buildLeastSquaresModel_2eb3122719704f90,
            mid_buildPropagator_0c183831cad84280,
            mid_copy_d4cfcf1c00a12618,
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
