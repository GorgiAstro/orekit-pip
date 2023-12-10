#ifndef org_orekit_propagation_conversion_BrouwerLyddanePropagatorBuilder_H
#define org_orekit_propagation_conversion_BrouwerLyddanePropagatorBuilder_H

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
        class BrouwerLyddanePropagatorBuilder;
      }
      namespace analytical {
        class BrouwerLyddanePropagator;
      }
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

        class BrouwerLyddanePropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_9f127c615ff2fc4d,
            mid_init$_628d3b35511bcea6,
            mid_init$_ef197d62fd525fc4,
            mid_buildLeastSquaresModel_2eb3122719704f90,
            mid_buildPropagator_514ffedd6248f0b6,
            mid_copy_20a4ebdd36e580a5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BrouwerLyddanePropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BrouwerLyddanePropagatorBuilder(const BrouwerLyddanePropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble, jdouble);
          BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
          BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble, jdouble);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator buildPropagator(const JArray< jdouble > &) const;
          BrouwerLyddanePropagatorBuilder copy() const;
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
        extern PyType_Def PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder);
        extern PyTypeObject *PY_TYPE(BrouwerLyddanePropagatorBuilder);

        class t_BrouwerLyddanePropagatorBuilder {
        public:
          PyObject_HEAD
          BrouwerLyddanePropagatorBuilder object;
          static PyObject *wrap_Object(const BrouwerLyddanePropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
